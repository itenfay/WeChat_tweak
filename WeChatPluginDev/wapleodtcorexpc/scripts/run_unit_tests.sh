#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT_DIR"

OUT_BIN="${TMPDIR:-/tmp}/wcpl_unit_tests"
TIMEOUT_SECONDS="${WCPL_TEST_TIMEOUT_SECONDS:-60}"
HOST_OS="$(uname -s)"
TEST_MODE="${WCPL_TEST_MODE:-auto}"
CROSS_PLATFORM_TEST_SCRIPT="$ROOT_DIR/tests/cross_platform/run_cross_platform_tests.py"

usage() {
  cat <<'EOF'
Usage: scripts/run_unit_tests.sh [--auto|--cross-platform|--darwin-host]

Modes:
  --auto            Darwin: run Darwin host suite + cross-platform suite
                    others: run cross-platform suite only
  --cross-platform  run Python cross-platform minimal regression suite only
  --darwin-host     run Foundation/CoreGraphics host suite only (Darwin required)
EOF
}

while (($# > 0)); do
  case "$1" in
    --auto)
      TEST_MODE="auto"
      ;;
    --cross-platform)
      TEST_MODE="cross-platform"
      ;;
    --darwin-host)
      TEST_MODE="darwin-host"
      ;;
    -h|--help)
      usage
      exit 0
      ;;
    *)
      echo "error: unknown argument: $1" >&2
      usage >&2
      exit 1
      ;;
  esac
  shift
done

run_with_timeout() {
  if command -v timeout >/dev/null 2>&1; then
    timeout "$TIMEOUT_SECONDS" "$@"
  else
    "$@"
  fi
}

run_cross_platform_tests() {
  if ! command -v python3 >/dev/null 2>&1; then
    echo "error: python3 not found; cross-platform tests are unavailable." >&2
    return 127
  fi
  if [[ ! -f "$CROSS_PLATFORM_TEST_SCRIPT" ]]; then
    echo "error: missing cross-platform test script: ${CROSS_PLATFORM_TEST_SCRIPT#$ROOT_DIR/}" >&2
    return 127
  fi

  echo "[tests] cross-platform minimal suite"
  run_with_timeout python3 "$CROSS_PLATFORM_TEST_SCRIPT"
}

run_darwin_host_tests() {
  if [[ "$HOST_OS" != "Darwin" ]]; then
    echo "error: Darwin host unit tests require Darwin/Foundation frameworks; current host is $HOST_OS." >&2
    return 127
  fi

  if ! command -v clang >/dev/null 2>&1; then
    echo "error: clang not found. please install clang toolchain first." >&2
    return 127
  fi

  echo "[tests] darwin host suite"
  clang \
    -fobjc-arc \
    -framework Foundation \
    -framework CoreGraphics \
    -I"Headers" \
    -I"src" \
    -I"tests" \
    "tests/WCPLUnitTests.m" \
    "src/WCPLAlertTextHelpers.m" \
    "src/WCPLConfigSanitizer.m" \
    "src/WCPLPureHelpers.m" \
    "src/WCPLSharedConfigHelpers.m" \
    "src/WCPLThreadSafeMutableDictionary.m" \
    "src/WCPLRedEnvelopParamQueue.m" \
    "src/WeChatRedEnvelopParam.m" \
    "src/WCPLRedEnvelopConfig.m" \
    "src/WCPLIgnoreConfig.m" \
    "src/WCPLGestureConfig.m" \
    -o "$OUT_BIN"

  run_with_timeout "$OUT_BIN"
}

case "$TEST_MODE" in
  auto)
    if [[ "$HOST_OS" == "Darwin" ]]; then
      run_darwin_host_tests
      run_cross_platform_tests
    else
      run_cross_platform_tests
    fi
    ;;
  cross-platform)
    run_cross_platform_tests
    ;;
  darwin-host)
    run_darwin_host_tests
    ;;
  *)
    echo "error: unsupported test mode: $TEST_MODE" >&2
    exit 1
    ;;
esac
