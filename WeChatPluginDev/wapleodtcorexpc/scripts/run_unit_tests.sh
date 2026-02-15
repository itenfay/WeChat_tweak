#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT_DIR"

OUT_BIN="${TMPDIR:-/tmp}/wcpl_unit_tests"
TIMEOUT_SECONDS="${WCPL_TEST_TIMEOUT_SECONDS:-60}"

if ! command -v clang >/dev/null 2>&1; then
  echo "error: clang not found. please install clang toolchain first." >&2
  exit 127
fi

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
  "src/WCPLGestureConfig.m" \
  -o "$OUT_BIN"

if command -v timeout >/dev/null 2>&1; then
  timeout "$TIMEOUT_SECONDS" "$OUT_BIN"
else
  "$OUT_BIN"
fi
