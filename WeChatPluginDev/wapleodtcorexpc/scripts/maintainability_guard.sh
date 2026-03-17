#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
SRC_DIR="$ROOT_DIR/src"
LARGE_FILE_DEFAULT_LIMIT=1000
EMPTY_CATCH_PATTERN='@catch\s*\([^)]*\)\s*\{\s*\}'
FAT_HEADER_IMPORT_PATTERN='#import "WeChatRedEnvelop\.h"'

declare -A LARGE_FILE_MAX_LINES=(
  ["src/WCPLGestureHook.xm"]=9500
  ["src/WCPLMessageHook.xm"]=9300
  ["src/WCPLMessageSearchCore.xm"]=1500
  ["src/WCPLMessageSearchStateStore.xm"]=900
  ["src/WCPLMessageSearchResidualCleanup.xm"]=1600
  ["src/WCPLMessageSearchNavButtonHelpers.xm"]=1100
  ["src/WCPLMessageSearchPresentationBridge.xm"]=1100
  ["src/WCPLGestureHookCommon.xm"]=3500
  ["src/WCPLRedEnvelopHook.xm"]=2900
  ["src/WCPLQuitMonitorHook.xm"]=2800
  ["src/WCPLVoiceForwardCore.xm"]=2200
  ["src/WCPLDouyinParserHook.xm"]=2100
  ["src/WCPLPush2ChatHook.xm"]=2000
  ["src/WCPLSettingViewController.m"]=1750
  ["src/WCPLMessageHookCommon.xm"]=1650
  ["src/WCPLRevokeHook.xm"]=1200
  ["src/WCPLRepeatActionHook.xm"]=1100
)

usage() {
  cat <<'EOF'
Usage: scripts/maintainability_guard.sh

Checks maintainability regressions against the current repository policy:
  1. empty @catch {} blocks must remain at zero
  2. large source files must stay within current file-specific ceilings
  3. direct imports of WeChatRedEnvelop.h must remain at zero
  4. legacy tweak entry must not reappear under src/
EOF
}

guard_log_ok() {
  echo "[maintainability][ok] $1"
}

guard_log_error() {
  echo "[maintainability][error] $1" >&2
}

relative_path() {
  local abs_path="$1"
  printf '%s\n' "${abs_path#$ROOT_DIR/}"
}

check_empty_catches() {
  local failed=0
  local line=""

  while IFS= read -r line; do
    [[ -z "$line" ]] && continue
    local file_path="${line%%:*}"
    local count="${line##*:}"
    local relative
    relative="$(relative_path "$file_path")"

    if (( count > 0 )); then
      guard_log_error "empty catch blocks are forbidden: $relative current=$count"
      failed=1
    fi
  done < <(rg -c -P -U "$EMPTY_CATCH_PATTERN" "$SRC_DIR" || true)

  if (( failed == 0 )); then
    guard_log_ok "empty catch policy preserved"
  fi
  return "$failed"
}

check_large_files() {
  local failed=0
  local line=""

  while IFS= read -r line; do
    [[ -z "$line" ]] && continue
    local line_count="${line%%:*}"
    local file_path="${line#*:}"
    local relative
    relative="$(relative_path "$file_path")"
    local allowed="${LARGE_FILE_MAX_LINES[$relative]:-$LARGE_FILE_DEFAULT_LIMIT}"

    if (( line_count > allowed )); then
      guard_log_error "file exceeds line budget: $relative current=$line_count allowed=$allowed"
      failed=1
    fi
  done < <(
    find "$SRC_DIR" -type f \( -name '*.m' -o -name '*.xm' -o -name '*.h' \) -print0 \
      | xargs -0 wc -l \
      | awk '$2 != "total" { print $1 ":" $2 }'
  )

  if (( failed == 0 )); then
    guard_log_ok "large-file ceilings preserved"
  fi
  return "$failed"
}

check_fat_header_imports() {
  local failed=0
  local file_path=""

  while IFS= read -r file_path; do
    [[ -z "$file_path" ]] && continue
    local relative
    relative="$(relative_path "$file_path")"

    guard_log_error "direct import of WeChatRedEnvelop.h must remain zero: $relative"
    failed=1
  done < <(rg -l "$FAT_HEADER_IMPORT_PATTERN" "$SRC_DIR" || true)

  if (( failed == 0 )); then
    guard_log_ok "fat-header direct imports remain at zero"
  fi
  return "$failed"
}

check_legacy_entry_archival() {
  local legacy_source="$SRC_DIR/Tweak.m"
  if [[ -f "$legacy_source" ]]; then
    guard_log_error "legacy tweak entry must stay outside src/: $(relative_path "$legacy_source")"
    return 1
  fi

  guard_log_ok "legacy tweak entry remains outside src/"
}

main() {
  if (($# > 0)); then
    case "$1" in
      -h|--help)
        usage
        return 0
        ;;
      *)
        echo "unknown argument: $1" >&2
        usage >&2
        return 1
        ;;
    esac
  fi

  local failures=0

  check_empty_catches || failures=$((failures + 1))
  check_large_files || failures=$((failures + 1))
  check_fat_header_imports || failures=$((failures + 1))
  check_legacy_entry_archival || failures=$((failures + 1))

  if (( failures > 0 )); then
    guard_log_error "maintainability guard failed checks=$failures"
    return 1
  fi

  guard_log_ok "maintainability guard passed"
}

main "$@"
