#!/usr/bin/env bash
set -euo pipefail
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
REPO_ROOT="$(cd "$ROOT_DIR/../.." && pwd)"
COMMON_SCRIPT="$ROOT_DIR/scripts/gate_common.sh"
STRICT_TOOLCHAIN=0
usage() {
  cat <<'EOF'
Usage: scripts/build_doctor.sh [--strict-toolchain]

Checks repository integrity and local build prerequisites for the WeChat tweak.

Exit codes:
  0  doctor completed; capability may still be limited unless --strict-toolchain is used
  1  repository/preflight is broken
  2  strict toolchain requested, but required capability is incomplete
EOF
}
emit_bootstrap_failure() {
  local reason="$1"
  local host_os
  host_os="$(uname -s 2>/dev/null || echo unknown)"
  echo "[doctor] project: $ROOT_DIR"
  echo "[doctor][error][repository] $reason" >&2
  echo "[doctor][section] repository status=BROKEN"
  echo "[doctor][section] toolchain status=UNKNOWN host_os=$host_os bash=0 make=0 theos=0"
  echo "[doctor][section] unit_tests status=UNAVAILABLE scope=none ready_for_unit_tests=0 ready_for_cross_platform_tests=0 ready_for_darwin_host_tests=0"
  echo "[doctor][section] package status=UNAVAILABLE ready_for_before_all=0 ready_for_make=0 ready_for_package_preflight=0 ready_for_package=0 ready_for_local_resign=0"
  echo "[doctor][summary] status=BROKEN repo=BROKEN toolchain=UNKNOWN unit_tests=UNAVAILABLE package=UNAVAILABLE ok=0 warn=0 error=1"
  echo "[doctor][capability] ready_for_unit_tests=0 ready_for_cross_platform_tests=0 ready_for_darwin_host_tests=0 ready_for_before_all=0 ready_for_make=0 ready_for_package_preflight=0 ready_for_package=0 ready_for_local_resign=0"
  exit 1
}
while (($# > 0)); do
  case "$1" in
    --strict-toolchain)
      STRICT_TOOLCHAIN=1
      ;;
    -h|--help)
      usage
      exit 0
      ;;
    *)
      echo "[doctor] unknown argument: $1" >&2
      exit 1
      ;;
  esac
  shift
done
if [[ ! -f "$COMMON_SCRIPT" ]]; then
  emit_bootstrap_failure "missing script: scripts/gate_common.sh"
fi
set +e
source "$COMMON_SCRIPT" 2>/dev/null
bootstrap_status=$?
set -e
if [[ "$bootstrap_status" -ne 0 ]]; then
  emit_bootstrap_failure "failed to load scripts/gate_common.sh"
fi
PASS_COUNT=0
WARN_COUNT=0
ERROR_COUNT=0
READY_FOR_UNIT_TESTS=0
READY_FOR_CROSS_PLATFORM_TESTS=0
READY_FOR_DARWIN_HOST_TESTS=0
READY_FOR_BEFORE_ALL=0
READY_FOR_MAKE=0
READY_FOR_PACKAGE_PREFLIGHT=0
READY_FOR_PACKAGE=0
READY_FOR_LOCAL_RESIGN=0
REPOSITORY_STATUS="OK"
TOOLCHAIN_STATUS="READY"
UNIT_TESTS_STATUS="UNAVAILABLE"
UNIT_TEST_SCOPE="none"
PACKAGE_STATUS="UNAVAILABLE"
BASH_BIN=""
PYTHON3_BIN=""
CLANG_BIN=""
MAKE_BIN=""
DPKG_DEB_BIN=""
LDID_BIN=""
THEOS_DIR_RESOLVED=""
HOST_OS="$(uname -s 2>/dev/null || echo unknown)"
STRICT_BLOCKERS=""
echo "[doctor] project: $ROOT_DIR"
doctor_log_ok "toolchain" "host os detected: $HOST_OS"
KEY_FILES=(
  "$ROOT_DIR/Makefile"
  "$ROOT_DIR/control"
  "$ROOT_DIR/wechatpepper.plist"
  "$ROOT_DIR/src/Tweak.xm"
)
for file in "${KEY_FILES[@]}"; do
  if [[ -f "$file" ]]; then
    doctor_log_ok "repository" "key file present: ${file#$ROOT_DIR/}"
  else
    REPOSITORY_STATUS="BROKEN"
    doctor_log_error "repository" "missing key file: ${file#$ROOT_DIR/}"
  fi
done
REQUIRED_SCRIPTS=(
  "$ROOT_DIR/scripts/generate_wcpl_message_hook.sh"
  "$ROOT_DIR/scripts/generate_wcpl_gesture_hook.sh"
  "$ROOT_DIR/scripts/build_doctor.sh"
  "$ROOT_DIR/scripts/gate_common.sh"
  "$ROOT_DIR/scripts/local_gate.sh"
  "$ROOT_DIR/scripts/validate_local.sh"
  "$ROOT_DIR/scripts/run_unit_tests.sh"
)
for script in "${REQUIRED_SCRIPTS[@]}"; do
  if [[ ! -f "$script" ]]; then
    REPOSITORY_STATUS="BROKEN"
    doctor_log_error "repository" "missing script: ${script#$ROOT_DIR/}"
  elif [[ "${script##*/}" != "gate_common.sh" && ! -x "$script" ]]; then
    REPOSITORY_STATUS="BROKEN"
    doctor_log_error "repository" "script is not executable: ${script#$ROOT_DIR/}"
  else
    doctor_log_ok "repository" "script ready: ${script#$ROOT_DIR/}"
  fi
done
for artifact in \
  "$ROOT_DIR/src/WCPLMessageHook.xm" \
  "$ROOT_DIR/src/WCPLGestureHook.xm"; do
  if [[ -f "$artifact" ]]; then
    doctor_log_ok "repository" "generated artifact present: ${artifact#$ROOT_DIR/}"
  else
    doctor_log_warn "repository" "generated artifact missing: ${artifact#$ROOT_DIR/} (run scripts/local_gate.sh to regenerate)"
  fi
done
if BASH_BIN="$(command -v bash 2>/dev/null)"; then
  doctor_log_ok "toolchain" "bash found: $BASH_BIN"
else
  TOOLCHAIN_STATUS="INCOMPLETE"
  doctor_log_warn "toolchain" "bash not found"
fi
if PYTHON3_BIN="$(command -v python3 2>/dev/null)"; then
  READY_FOR_CROSS_PLATFORM_TESTS=1
  doctor_log_ok "unit_tests" "python3 found: $PYTHON3_BIN"
  doctor_log_ok "unit_tests" "cross-platform minimal tests ready"
else
  PYTHON3_BIN=""
  doctor_log_warn "unit_tests" "python3 not found; cross-platform tests are unavailable"
fi
if CLANG_BIN="$(command -v clang 2>/dev/null)"; then
  doctor_log_ok "unit_tests" "clang found: $CLANG_BIN"
else
  CLANG_BIN=""
  doctor_log_warn "unit_tests" "clang not found; Darwin Objective-C host tests are unavailable"
fi
if [[ "$HOST_OS" == "Darwin" && -n "$CLANG_BIN" ]]; then
  READY_FOR_DARWIN_HOST_TESTS=1
  doctor_log_ok "unit_tests" "Darwin host tests ready: Darwin + clang"
elif [[ "$HOST_OS" == "Darwin" ]]; then
  doctor_log_warn "unit_tests" "Darwin host tests require clang on macOS"
else
  doctor_log_warn "unit_tests" "current host is $HOST_OS; Darwin/Foundation Objective-C host execution is unavailable"
fi
if MAKE_BIN="$(command -v make 2>/dev/null)"; then
  doctor_log_ok "toolchain" "make found: $MAKE_BIN"
else
  MAKE_BIN=""
  TOOLCHAIN_STATUS="INCOMPLETE"
  doctor_log_warn "toolchain" "make not found; make-based validation is unavailable"
fi
if THEOS_DIR_RESOLVED="$(resolve_theos_dir "$ROOT_DIR" "$REPO_ROOT" "${THEOS:-}" 2>/dev/null)"; then
  doctor_log_ok "toolchain" "THEOS resolved: $THEOS_DIR_RESOLVED"
else
  THEOS_DIR_RESOLVED=""
  TOOLCHAIN_STATUS="INCOMPLETE"
  if [[ -n "${THEOS:-}" ]]; then
    doctor_log_warn "toolchain" "THEOS env is set but missing makefiles/common.mk: ${THEOS}"
  elif [[ -f "$ROOT_DIR/theos" ]]; then
    doctor_log_warn "toolchain" "project theos pointer is unavailable here: $(tr -d '\r' < "$ROOT_DIR/theos" | head -n 1)"
  elif [[ -d "$REPO_ROOT/theos-roothide" ]]; then
    doctor_log_warn "toolchain" "repo theos-roothide directory exists but is incomplete: $REPO_ROOT/theos-roothide"
  else
    doctor_log_warn "toolchain" "THEOS not found; export THEOS=/path/to/theos before full build validation"
  fi
fi
if DPKG_DEB_BIN="$(command -v dpkg-deb 2>/dev/null)"; then
  doctor_log_ok "package" "dpkg-deb found: $DPKG_DEB_BIN"
else
  DPKG_DEB_BIN=""
  doctor_log_warn "package" "dpkg-deb not found; real package builds are unavailable"
fi
LDID_BIN="$(find_ldid_bin "$REPO_ROOT" 2>/dev/null || true)"
if [[ -n "$LDID_BIN" ]]; then
  case "$LDID_BIN" in
    "$REPO_ROOT/.tmp/tools/"*|"/root/WeChat_tweak/.tmp/tools/"*)
      doctor_log_ok "package" "ldid fallback found: $LDID_BIN"
      ;;
    *)
      doctor_log_ok "package" "ldid found: $LDID_BIN"
      ;;
  esac
else
  LDID_BIN=""
  doctor_log_warn "package" "ldid not found; local resign step will be skipped"
fi
if [[ "$READY_FOR_CROSS_PLATFORM_TESTS" -eq 1 && "$READY_FOR_DARWIN_HOST_TESTS" -eq 1 ]]; then
  READY_FOR_UNIT_TESTS=1
  UNIT_TESTS_STATUS="READY"
  UNIT_TEST_SCOPE="darwin_host+cross_platform"
  doctor_log_ok "unit_tests" "full host test capability is ready"
elif [[ "$READY_FOR_CROSS_PLATFORM_TESTS" -eq 1 ]]; then
  READY_FOR_UNIT_TESTS=1
  UNIT_TESTS_STATUS="LIMITED"
  UNIT_TEST_SCOPE="cross_platform_only"
  doctor_log_warn "unit_tests" "cross-platform suite is ready, but Objective-C/Foundation host execution is unavailable"
elif [[ "$READY_FOR_DARWIN_HOST_TESTS" -eq 1 ]]; then
  UNIT_TESTS_STATUS="LIMITED"
  UNIT_TEST_SCOPE="darwin_host_only"
  doctor_log_warn "unit_tests" "Darwin host tests are ready, but cross-platform suite is unavailable"
else
  UNIT_TESTS_STATUS="UNAVAILABLE"
  UNIT_TEST_SCOPE="none"
  doctor_log_warn "unit_tests" "no runnable unit test suite is available on this host"
fi
if [[ -n "$MAKE_BIN" && -n "$THEOS_DIR_RESOLVED" ]]; then
  READY_FOR_BEFORE_ALL=1
  READY_FOR_MAKE=1
  READY_FOR_PACKAGE_PREFLIGHT=1
  doctor_log_ok "package" "make before-all and make -n package preflight are available"
else
  doctor_log_warn "package" "make before-all and package preflight require make + THEOS"
fi
if [[ "$READY_FOR_BEFORE_ALL" -eq 1 && -n "$DPKG_DEB_BIN" ]]; then
  READY_FOR_PACKAGE=1
  doctor_log_ok "package" "real package build capability is ready"
else
  doctor_log_warn "package" "real package build requires make/THEOS + dpkg-deb"
fi
if [[ "$READY_FOR_PACKAGE" -eq 1 && -n "$LDID_BIN" ]]; then
  READY_FOR_LOCAL_RESIGN=1
  doctor_log_ok "package" "local ldid resign is ready"
elif [[ "$READY_FOR_PACKAGE" -eq 1 ]]; then
  doctor_log_warn "package" "package build is ready, but local ldid resign is unavailable"
fi
if [[ "$READY_FOR_PACKAGE" -eq 1 && "$READY_FOR_LOCAL_RESIGN" -eq 1 ]]; then
  PACKAGE_STATUS="READY"
elif [[ "$READY_FOR_PACKAGE" -eq 1 ]]; then
  PACKAGE_STATUS="BUILD_ONLY"
elif [[ "$READY_FOR_PACKAGE_PREFLIGHT" -eq 1 ]]; then
  PACKAGE_STATUS="PREFLIGHT_ONLY"
else
  PACKAGE_STATUS="UNAVAILABLE"
fi
STATUS="DEGRADED"
if [[ "$REPOSITORY_STATUS" == "BROKEN" ]]; then
  STATUS="BROKEN"
elif [[ "$READY_FOR_UNIT_TESTS" -eq 1 && "$READY_FOR_BEFORE_ALL" -eq 1 && "$READY_FOR_PACKAGE" -eq 1 && "$READY_FOR_LOCAL_RESIGN" -eq 1 ]]; then
  STATUS="READY"
fi
if [[ "$STATUS" != "BROKEN" ]]; then
  if [[ "$READY_FOR_UNIT_TESTS" -ne 1 ]]; then
    append_csv STRICT_BLOCKERS "unit_tests"
  fi
  if [[ "$READY_FOR_BEFORE_ALL" -ne 1 ]]; then
    append_csv STRICT_BLOCKERS "before_all"
  fi
  if [[ "$READY_FOR_PACKAGE" -ne 1 ]]; then
    append_csv STRICT_BLOCKERS "package"
  fi
  if [[ "$READY_FOR_LOCAL_RESIGN" -ne 1 ]]; then
    append_csv STRICT_BLOCKERS "local_resign"
  fi
fi
echo "[doctor][section] repository status=$REPOSITORY_STATUS"
echo "[doctor][section] toolchain status=$TOOLCHAIN_STATUS host_os=$HOST_OS bash=$([[ -n "$BASH_BIN" ]] && echo 1 || echo 0) make=$([[ -n "$MAKE_BIN" ]] && echo 1 || echo 0) theos=$([[ -n "$THEOS_DIR_RESOLVED" ]] && echo 1 || echo 0)"
echo "[doctor][section] unit_tests status=$UNIT_TESTS_STATUS scope=$UNIT_TEST_SCOPE ready_for_unit_tests=$READY_FOR_UNIT_TESTS ready_for_cross_platform_tests=$READY_FOR_CROSS_PLATFORM_TESTS ready_for_darwin_host_tests=$READY_FOR_DARWIN_HOST_TESTS"
echo "[doctor][section] package status=$PACKAGE_STATUS ready_for_before_all=$READY_FOR_BEFORE_ALL ready_for_make=$READY_FOR_MAKE ready_for_package_preflight=$READY_FOR_PACKAGE_PREFLIGHT ready_for_package=$READY_FOR_PACKAGE ready_for_local_resign=$READY_FOR_LOCAL_RESIGN"
echo "[doctor][summary] status=$STATUS repo=$REPOSITORY_STATUS toolchain=$TOOLCHAIN_STATUS unit_tests=$UNIT_TESTS_STATUS package=$PACKAGE_STATUS ok=$PASS_COUNT warn=$WARN_COUNT error=$ERROR_COUNT"
echo "[doctor][capability] ready_for_unit_tests=$READY_FOR_UNIT_TESTS ready_for_cross_platform_tests=$READY_FOR_CROSS_PLATFORM_TESTS ready_for_darwin_host_tests=$READY_FOR_DARWIN_HOST_TESTS ready_for_before_all=$READY_FOR_BEFORE_ALL ready_for_make=$READY_FOR_MAKE ready_for_package_preflight=$READY_FOR_PACKAGE_PREFLIGHT ready_for_package=$READY_FOR_PACKAGE ready_for_local_resign=$READY_FOR_LOCAL_RESIGN"
if [[ -n "$STRICT_BLOCKERS" ]]; then
  echo "[doctor][strict] blockers=$STRICT_BLOCKERS"
fi
if [[ "$STATUS" == "DEGRADED" ]]; then
  echo "[doctor] hint: repository is intact, but acceptance capability is partial on this host."
  echo "[doctor] hint: default scripts/local_gate.sh will degrade explicitly; use --strict-toolchain when unit_tests + before_all + package + local_resign must all be ready."
fi
if [[ "$STATUS" == "BROKEN" ]]; then
  exit 1
fi
if [[ "$STRICT_TOOLCHAIN" -eq 1 && "$STATUS" != "READY" ]]; then
  exit 2
fi
exit 0
