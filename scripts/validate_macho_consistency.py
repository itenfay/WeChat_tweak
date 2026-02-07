#!/usr/bin/env python3

import pathlib
import struct
import sys

FAT_MAGIC = 0xCAFEBABE
FAT_MAGIC_64 = 0xCAFEBABF
MH_MAGIC_64 = 0xFEEDFACF
LC_BUILD_VERSION = 0x32
LC_LOAD_DYLIB = 0xC
LC_LOAD_WEAK_DYLIB = 0x80000018

CPU_TYPE_ARM64 = 0x0100000C
CPU_SUBTYPE_ARM64E_BASE = 2


def arch_name(cputype, cpusubtype):
    if cputype == CPU_TYPE_ARM64:
        if (cpusubtype & 0x00FFFFFF) == CPU_SUBTYPE_ARM64E_BASE:
            return "arm64e"
        return "arm64"
    return hex(cputype)


def version_text(value):
    major = (value >> 16) & 0xFFFF
    minor = (value >> 8) & 0xFF
    patch = value & 0xFF
    return major, minor, patch, f"{major}.{minor}.{patch}"


def read_cstr(blob, offset):
    end = blob.find(b"\0", offset)
    if end < 0:
        end = len(blob)
    return blob[offset:end].decode("utf-8", "replace")


def parse_macho(path):
    data = pathlib.Path(path).read_bytes()
    magic_be = struct.unpack_from(">I", data, 0)[0]
    offsets = []
    if magic_be in (FAT_MAGIC, FAT_MAGIC_64):
        count = struct.unpack_from(">I", data, 4)[0]
        cursor = 8
        for _ in range(count):
            if magic_be == FAT_MAGIC:
                _, _, offset, _, _ = struct.unpack_from(">IIIII", data, cursor)
                cursor += 20
            else:
                _, _, offset, _, _, _ = struct.unpack_from(">IIQQII", data, cursor)
                cursor += 32
            offsets.append(offset)
    else:
        offsets.append(0)

    slices = []
    for offset in offsets:
        magic = struct.unpack_from("<I", data, offset)[0]
        if magic != MH_MAGIC_64:
            continue
        _, cputype, cpusubtype, _, ncmds, _, _, _ = struct.unpack_from("<IIIIIIII", data, offset)
        arch = arch_name(cputype, cpusubtype)
        minos = None
        substrate_dep = None
        cursor = offset + 32
        for _ in range(ncmds):
            cmd, cmdsize = struct.unpack_from("<II", data, cursor)
            payload = data[cursor:cursor + cmdsize]
            if cmd == LC_BUILD_VERSION and cmdsize >= 24:
                minos_raw = struct.unpack_from("<I", payload, 12)[0]
                minos = version_text(minos_raw)
            if cmd in (LC_LOAD_DYLIB, LC_LOAD_WEAK_DYLIB) and cmdsize >= 24:
                name_offset = struct.unpack_from("<I", payload, 8)[0]
                name = read_cstr(payload, name_offset)
                if "substrate" in name.lower() and substrate_dep is None:
                    substrate_dep = name
            cursor += cmdsize
        slices.append((arch, minos, substrate_dep))
    return slices


def validate(label, path):
    issues = []
    details = []
    parsed = parse_macho(path)
    has_arm64e = False

    for arch, minos, substrate_dep in parsed:
        has_arm64e = has_arm64e or arch == "arm64e"
        if minos is None:
            issues.append(f"{label} {arch}: missing LC_BUILD_VERSION")
            continue
        major, minor, _, text = minos
        details.append((arch, text, substrate_dep or "(none)"))
        if (major, minor) < (14, 0):
            issues.append(f"{label} {arch}: minos {text} < 14.0")

    if not has_arm64e:
        issues.append(f"{label}: missing arm64e slice")

    return details, issues


def main():
    if len(sys.argv) != 3:
        print("usage: validate_macho_consistency.py <rootless_dylib> <roothide_dylib>", file=sys.stderr)
        return 2

    rootless_path, roothide_path = sys.argv[1], sys.argv[2]
    all_issues = []

    for label, path in (("rootless", rootless_path), ("roothide", roothide_path)):
        details, issues = validate(label, path)
        print(f"[{label}] {path}")
        for arch, minos, substrate in details:
            print(f"  - {arch}: minos={minos} substrate={substrate}")
        all_issues.extend(issues)

    if all_issues:
        print("::group::Binary consistency issues")
        for issue in all_issues:
            print(issue)
        print("::endgroup::")
        return 1

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
