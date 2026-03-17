#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
MESSAGE_GEN="$ROOT_DIR/scripts/generate_wcpl_message_hook.sh"
GESTURE_GEN="$ROOT_DIR/scripts/generate_wcpl_gesture_hook.sh"
BASELINE_GEN="$ROOT_DIR/scripts/generate_baseline.sh"
MAINTAINABILITY_GUARD="$ROOT_DIR/scripts/maintainability_guard.sh"
UNIT_TEST_SCRIPT="$ROOT_DIR/scripts/run_unit_tests.sh"

guard_step() {
  echo "[repo-guard] $1"
}

require_git_repo() {
  if ! git -C "$ROOT_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
    echo "[repo-guard][error] git repository not found: $ROOT_DIR" >&2
    exit 1
  fi
}

verify_generated_hooks_clean() {
  git -C "$ROOT_DIR" diff --exit-code -- src/WCPLMessageHook.xm src/WCPLGestureHook.xm
}

main() {
  require_git_repo

  guard_step "refresh generated hooks"
  "$MESSAGE_GEN"
  "$GESTURE_GEN"

  guard_step "verify generated hook outputs are committed"
  verify_generated_hooks_clean

  guard_step "verify baseline ratchet"
  "$BASELINE_GEN" --verify

  guard_step "run maintainability guard"
  "$MAINTAINABILITY_GUARD"

  guard_step "run cross-platform tests"
  "$UNIT_TEST_SCRIPT" --cross-platform

  guard_step "passed"
}

main "$@"
