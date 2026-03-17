#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 1 || $# -gt 2 ]]; then
  echo "usage: $0 <macho_path> [out_dir]" >&2
  echo "example: $0 .tmp/wcpush.dylib .tmp/ida_out/wcpush" >&2
  exit 2
fi

INPUT_PATH="$1"
OUT_DIR="${2:-}"

if [[ ! -f "$INPUT_PATH" ]]; then
  echo "error: input not found: $INPUT_PATH" >&2
  exit 1
fi

INPUT_ABS="$(cd "$(dirname "$INPUT_PATH")" && pwd)/$(basename "$INPUT_PATH")"
NAME="$(basename "$INPUT_ABS")"

if [[ -z "$OUT_DIR" ]]; then
  OUT_DIR=".tmp/ida_out/${NAME%.*}"
fi

mkdir -p "$OUT_DIR"
cp -f "$INPUT_ABS" "$OUT_DIR/$NAME"

pushd "$OUT_DIR" >/dev/null

# 优先使用安装目录内的二进制，避免 PATH 指向不一致。
IDAT_BIN="${IDAT_BIN:-}"
if [[ -z "$IDAT_BIN" ]]; then
  if [[ -x "/opt/ida-pro-9.3/idat" ]]; then
    IDAT_BIN="/opt/ida-pro-9.3/idat"
  elif command -v idat64 >/dev/null 2>&1; then
    IDAT_BIN="$(command -v idat64)"
  elif command -v idat >/dev/null 2>&1; then
    IDAT_BIN="$(command -v idat)"
  else
    echo "error: idat not found (need IDA Pro/Free installed)" >&2
    exit 1
  fi
fi

# -B: 生成 .i64/.asm（注意：batch 模式下普通插件不一定会自动加载）。
"$IDAT_BIN" -B -L ida_batch.log "$NAME" || {
  echo "error: idat failed; see: $OUT_DIR/ida_batch.log (if exists)" >&2
  exit 1
}

popd >/dev/null

echo "ok: $OUT_DIR"
