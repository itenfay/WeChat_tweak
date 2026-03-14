#!/usr/bin/env bash
set -euo pipefail
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
REPO_ROOT="$(cd "$ROOT_DIR/../.." && pwd)"
COMMON_SCRIPT="$ROOT_DIR/scripts/gate_common.sh"
DOCTOR_SCRIPT="$ROOT_DIR/scripts/build_doctor.sh"
MAINTAINABILITY_GUARD_SCRIPT="$ROOT_DIR/scripts/maintainability_guard.sh"
UNIT_TEST_SCRIPT="$ROOT_DIR/scripts/run_unit_tests.sh"
MESSAGE_GEN="$ROOT_DIR/scripts/generate_wcpl_message_hook.sh"
GESTURE_GEN="$ROOT_DIR/scripts/generate_wcpl_gesture_hook.sh"
STRICT_TOOLCHAIN=0
PACKAGE_PREFLIGHT=0
SKIP_GENERATE=0
SKIP_DOCTOR=0
SKIP_TESTS=0
SKIP_MAKE=0
SCHEME="${THEOS_PACKAGE_SCHEME:-rootless}"
TARGET_VALUE="${TARGET:-iphone:clang:13.7:14.0}"
ARCHS_VALUE="${ARCHS:-arm64e}"
THEOS_VALUE="${THEOS:-}"
HOST_OS="$(uname -s 2>/dev/null || echo unknown)"
generate_status="not_run"
maintainability_guard_status="not_run"
doctor_status="not_run"
unit_tests_status="not_run"
before_all_dry_run_status="not_run"
before_all_real_status="not_run"
package_preflight_status="not_requested"
package_real_status="not_requested"
doctor_reported_status="unknown"
current_step=""
current_detail=""
usage() {
  cat <<'EOF'
Usage: scripts/local_gate.sh [options]

Unified local acceptance gate:
  1. regenerate generated hook sources
  2. run maintainability guard
  3. run build doctor
  4. run host unit tests when supported
  5. run make -n before-all
  6. run make before-all
  7. optionally run make -n package
  8. in --strict-toolchain mode, run make clean then make package

Default behavior is degrade-friendly:
  - repository breakage => fail
  - missing host test or make toolchain => explicit degrade/skip
  - --strict-toolchain => require unit tests + before-all + package + local resign

Options:
  --strict-toolchain   require complete gate capability
  --package-preflight additionally run make -n package (optional, not default)
  --skip-generate      skip generated source refresh
  --skip-doctor        skip build doctor
  --skip-tests         skip host unit tests
  --skip-make          skip make preflight/build checks
  --scheme <name>      override THEOS_PACKAGE_SCHEME for make validation
  --target <value>     override TARGET for make validation
  --archs <value>      override ARCHS for make validation
  --help               show this message
EOF
}
bootstrap_gate_common() {
  if [[ ! -f "$COMMON_SCRIPT" ]]; then
    echo "[gate][result] step=bootstrap status=failed detail=reason=missing_gate_common"
    echo "[gate][summary] overall=failed exit_code=1 strict=$STRICT_TOOLCHAIN host=$HOST_OS doctor_reported_status=unknown generate=not_run maintainability_guard=not_run doctor=not_run unit_tests=not_run before_all_dry_run=not_run before_all_real=not_run package_preflight=not_requested package_real=not_requested"
    exit 1
  fi

  set +e
  source "$COMMON_SCRIPT" 2>/dev/null
  bootstrap_status=$?
  set -e
  if [[ "$bootstrap_status" -ne 0 ]]; then
    echo "[gate][result] step=bootstrap status=failed detail=reason=invalid_gate_common"
    echo "[gate][summary] overall=failed exit_code=1 strict=$STRICT_TOOLCHAIN host=$HOST_OS doctor_reported_status=unknown generate=not_run maintainability_guard=not_run doctor=not_run unit_tests=not_run before_all_dry_run=not_run before_all_real=not_run package_preflight=not_requested package_real=not_requested"
    exit 1
  fi
}
while (($# > 0)); do
  case "$1" in
    --strict-toolchain)
      STRICT_TOOLCHAIN=1
      ;;
    --package-preflight)
      PACKAGE_PREFLIGHT=1
      ;;
    --skip-generate)
      SKIP_GENERATE=1
      ;;
    --skip-doctor)
      SKIP_DOCTOR=1
      ;;
    --skip-tests)
      SKIP_TESTS=1
      ;;
    --skip-make)
      SKIP_MAKE=1
      ;;
    --scheme)
      shift
      SCHEME="${1:?missing value for --scheme}"
      ;;
    --target)
      shift
      TARGET_VALUE="${1:?missing value for --target}"
      ;;
    --archs)
      shift
      ARCHS_VALUE="${1:?missing value for --archs}"
      ;;
    -h|--help)
      usage
      exit 0
      ;;
    *)
      echo "[gate] unknown argument: $1" >&2
      usage >&2
      exit 1
      ;;
  esac
  shift
done
bootstrap_gate_common
trap gate_on_exit EXIT

if [[ "$SKIP_GENERATE" -eq 1 ]]; then
  gate_set_step_state "generate" "skipped" "reason=requested"
else
  gate_start_step "generate" "refresh_generated_hook_sources"
  "$MESSAGE_GEN"
  "$GESTURE_GEN"
  gate_finish_step "passed" "artifacts=message_and_gesture_hooks"
fi

gate_start_step "maintainability_guard" "check_empty_catch_large_files_and_fat_headers"
"$MAINTAINABILITY_GUARD_SCRIPT"
gate_finish_step "passed" "policy=repo_guard"

if [[ "$SKIP_DOCTOR" -eq 1 ]]; then
  gate_set_step_state "doctor" "skipped" "reason=requested"
else
  DOCTOR_ARGS=()
  if [[ "$STRICT_TOOLCHAIN" -eq 1 ]]; then
    DOCTOR_ARGS+=(--strict-toolchain)
  fi

  gate_start_step "doctor" "run_build_doctor"
  set +e
  DOCTOR_OUTPUT="$($DOCTOR_SCRIPT "${DOCTOR_ARGS[@]}" 2>&1)"
  doctor_exit_code=$?
  set -e

  printf '%s\n' "$DOCTOR_OUTPUT"
  doctor_reported_status="$(gate_extract_doctor_status "$DOCTOR_OUTPUT")"

  case "$doctor_exit_code" in
    0)
      gate_finish_step "passed" "reported=$doctor_reported_status"
      ;;
    1)
      gate_finish_step "failed" "reported=$doctor_reported_status"
      echo "[gate] doctor reported repository/preflight errors; aborting" >&2
      exit 1
      ;;
    2)
      gate_finish_step "blocked" "reported=$doctor_reported_status"
      echo "[gate] strict toolchain requested but gate capability is incomplete" >&2
      exit 2
      ;;
    *)
      gate_finish_step "failed" "exit=$doctor_exit_code"
      echo "[gate] unexpected doctor exit code: $doctor_exit_code" >&2
      exit "$doctor_exit_code"
      ;;
  esac
fi

PYTHON3_BIN="$(command -v python3 2>/dev/null || true)"
CLANG_BIN="$(command -v clang 2>/dev/null || true)"
TEST_MODE=""
TEST_STATUS="passed"
TEST_DETAIL="mode=auto"

if [[ "$SKIP_TESTS" -eq 1 ]]; then
  gate_set_step_state "unit_tests" "skipped" "reason=requested"
elif [[ -z "$PYTHON3_BIN" ]]; then
  if [[ "$STRICT_TOOLCHAIN" -eq 1 ]]; then
    gate_set_step_state "unit_tests" "blocked" "reason=python3_missing"
    echo "[gate] strict toolchain requested but cross-platform tests are unavailable (python3 missing)" >&2
    exit 2
  fi
  gate_set_step_state "unit_tests" "degraded" "reason=python3_missing"
elif [[ "$HOST_OS" == "Darwin" && -z "$CLANG_BIN" ]]; then
  if [[ "$STRICT_TOOLCHAIN" -eq 1 ]]; then
    gate_set_step_state "unit_tests" "blocked" "reason=darwin_clang_missing"
    echo "[gate] strict toolchain requested but Darwin host tests cannot run (clang missing)" >&2
    exit 2
  fi
  TEST_MODE="cross-platform"
  TEST_STATUS="limited"
  TEST_DETAIL="mode=cross_platform scope=cross_platform_only"
else
  if [[ "$HOST_OS" == "Darwin" ]]; then
    TEST_MODE="auto"
    TEST_STATUS="passed"
    TEST_DETAIL="mode=auto scope=darwin_host+cross_platform"
  else
    TEST_MODE="cross-platform"
    TEST_STATUS="limited"
    TEST_DETAIL="mode=cross_platform scope=cross_platform_only"
  fi
fi

if [[ -n "$TEST_MODE" ]]; then
  gate_start_step "unit_tests" "run_$TEST_MODE"
  "$UNIT_TEST_SCRIPT" "--$TEST_MODE"
  gate_finish_step "$TEST_STATUS" "$TEST_DETAIL"
fi

MAKE_BIN="$(command -v make 2>/dev/null || true)"
RESOLVED_THEOS="$(resolve_theos_dir "$ROOT_DIR" "$REPO_ROOT" "$THEOS_VALUE" 2>/dev/null || true)"
DPKG_DEB_BIN="$(command -v dpkg-deb 2>/dev/null || true)"
LDID_BIN="$(find_ldid_bin "$REPO_ROOT" 2>/dev/null || true)"

if [[ "$SKIP_MAKE" -eq 1 ]]; then
  gate_set_step_state "before_all_dry_run" "skipped" "reason=requested"
  gate_set_step_state "before_all_real" "skipped" "reason=requested"
  if [[ "$PACKAGE_PREFLIGHT" -eq 1 ]]; then
    gate_set_step_state "package_preflight" "skipped" "reason=requested"
  fi
  gate_set_step_state "package_real" "skipped" "reason=requested"
elif [[ -z "$MAKE_BIN" || -z "$RESOLVED_THEOS" ]]; then
  make_detail="reason=make_or_theos_missing"
  if [[ "$STRICT_TOOLCHAIN" -eq 1 ]]; then
    gate_set_step_state "before_all_dry_run" "blocked" "$make_detail"
    gate_set_step_state "before_all_real" "blocked" "$make_detail"
    if [[ "$PACKAGE_PREFLIGHT" -eq 1 ]]; then
      gate_set_step_state "package_preflight" "blocked" "$make_detail"
    fi
    gate_set_step_state "package_real" "blocked" "$make_detail"
    echo "[gate] strict toolchain requested but make/THEOS validation is unavailable" >&2
    exit 2
  fi

  gate_set_step_state "before_all_dry_run" "degraded" "$make_detail"
  gate_set_step_state "before_all_real" "degraded" "$make_detail"
  if [[ "$PACKAGE_PREFLIGHT" -eq 1 ]]; then
    gate_set_step_state "package_preflight" "degraded" "$make_detail"
  fi
  gate_set_step_state "package_real" "not_requested" "reason=strict_mode_required"
  echo "[gate] degraded: skip make validation (make or THEOS missing)" >&2
else
  gate_start_step "before_all_dry_run" "make_-n_before-all"
  THEOS="$RESOLVED_THEOS" \
  THEOS_PACKAGE_SCHEME="$SCHEME" \
  TARGET="$TARGET_VALUE" \
  ARCHS="$ARCHS_VALUE" \
  "$MAKE_BIN" -n before-all
  gate_finish_step "passed" "command=make_-n_before-all"

  gate_start_step "before_all_real" "make_before-all"
  THEOS="$RESOLVED_THEOS" \
  THEOS_PACKAGE_SCHEME="$SCHEME" \
  TARGET="$TARGET_VALUE" \
  ARCHS="$ARCHS_VALUE" \
  "$MAKE_BIN" before-all
  gate_finish_step "passed" "command=make_before-all"

  if [[ "$PACKAGE_PREFLIGHT" -eq 1 ]]; then
    gate_start_step "package_preflight" "make_-n_package"
    THEOS="$RESOLVED_THEOS" \
    THEOS_PACKAGE_SCHEME="$SCHEME" \
    TARGET="$TARGET_VALUE" \
    ARCHS="$ARCHS_VALUE" \
    "$MAKE_BIN" -n package
    gate_finish_step "passed" "command=make_-n_package"
  fi

  if [[ "$STRICT_TOOLCHAIN" -eq 1 ]]; then
    if [[ -z "$DPKG_DEB_BIN" ]]; then
      gate_set_step_state "package_real" "blocked" "reason=dpkg_deb_missing"
      echo "[gate] strict toolchain requested but real package build needs dpkg-deb" >&2
      exit 2
    fi
    if [[ -z "$LDID_BIN" ]]; then
      gate_set_step_state "package_real" "blocked" "reason=ldid_missing"
      echo "[gate] strict toolchain requested but local resign needs ldid" >&2
      exit 2
    fi
    gate_start_step "package_real" "make_clean_then_package"
    THEOS="$RESOLVED_THEOS" \
    THEOS_PACKAGE_SCHEME="$SCHEME" \
    TARGET="$TARGET_VALUE" \
    ARCHS="$ARCHS_VALUE" \
    "$MAKE_BIN" clean
    THEOS="$RESOLVED_THEOS" \
    THEOS_PACKAGE_SCHEME="$SCHEME" \
    TARGET="$TARGET_VALUE" \
    ARCHS="$ARCHS_VALUE" \
    "$MAKE_BIN" package
    gate_finish_step "passed" "command=make_clean_then_package"
  else
    gate_set_step_state "package_real" "not_requested" "reason=strict_mode_required"
  fi
fi

echo "[gate] completed: local acceptance gate finished"
