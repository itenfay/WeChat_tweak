#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT_DIR"

OUT_BIN="${TMPDIR:-/tmp}/wcpl_unit_tests"

clang \
  -fobjc-arc \
  -framework Foundation \
  -framework CoreGraphics \
  -I"Headers" \
  -I"src" \
  -I"tests" \
  "tests/WCPLUnitTests.m" \
  "src/WCPLConfigSanitizer.m" \
  "src/WCPLThreadSafeMutableDictionary.m" \
  "src/WCPLRedEnvelopParamQueue.m" \
  "src/WeChatRedEnvelopParam.m" \
  "src/WCPLRedEnvelopConfig.m" \
  "src/WCPLIgnoreConfig.m" \
  -o "$OUT_BIN"

"$OUT_BIN"
