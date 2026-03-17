#!/usr/bin/env bash

append_csv() {
  local var_name="$1"
  local value="$2"
  local current="${!var_name:-}"

  if [[ -n "$current" ]]; then
    printf -v "$var_name" '%s,%s' "$current" "$value"
  else
    printf -v "$var_name" '%s' "$value"
  fi
}

resolve_theos_dir() {
  local root_dir="$1"
  local repo_root="$2"
  local theos_value="${3:-}"
  local file_candidate=""

  if [[ -n "$theos_value" && -f "$theos_value/makefiles/common.mk" ]]; then
    echo "$theos_value"
    return 0
  fi

  if [[ -f "$root_dir/theos" ]]; then
    file_candidate="$(tr -d '\r' < "$root_dir/theos" | head -n 1)"
    if [[ -n "$file_candidate" && -f "$file_candidate/makefiles/common.mk" ]]; then
      echo "$file_candidate"
      return 0
    fi
  fi

  if [[ -n "$repo_root" && -f "$repo_root/theos-roothide/makefiles/common.mk" ]]; then
    echo "$repo_root/theos-roothide"
    return 0
  fi

  return 1
}

find_ldid_bin() {
  local repo_root="$1"
  local ldid_bin=""

  ldid_bin="$(command -v ldid 2>/dev/null || true)"
  if [[ -n "$ldid_bin" ]]; then
    echo "$ldid_bin"
    return 0
  fi

  for candidate in \
    "$repo_root/.tmp/tools/ldid_linux_x86_64" \
    "/root/WeChat_tweak/.tmp/tools/ldid_linux_x86_64"; do
    if [[ -x "$candidate" ]]; then
      echo "$candidate"
      return 0
    fi
  done

  return 1
}

doctor_log_ok() {
  PASS_COUNT=$((PASS_COUNT + 1))
  echo "[doctor][ok][$1] $2"
}

doctor_log_warn() {
  WARN_COUNT=$((WARN_COUNT + 1))
  echo "[doctor][warn][$1] $2"
}

doctor_log_error() {
  ERROR_COUNT=$((ERROR_COUNT + 1))
  echo "[doctor][error][$1] $2" >&2
}

gate_set_step_state() {
  local step="$1"
  local status="$2"
  local detail="$3"

  printf -v "${step}_status" '%s' "$status"
  echo "[gate][result] step=$step status=$status detail=$detail"
}

gate_start_step() {
  current_step="$1"
  current_detail="$2"
  echo "[gate][phase] step=$current_step action=$current_detail"
}

gate_finish_step() {
  gate_set_step_state "$current_step" "$1" "$2"
  current_step=""
  current_detail=""
}

gate_extract_doctor_status() {
  local output="$1"
  local summary_line=""

  summary_line="$(printf '%s\n' "$output" | sed -n 's/^\[doctor\]\[summary\].*status=\([^ ]*\).*/\1/p' | tail -n 1)"
  if [[ -n "$summary_line" ]]; then
    echo "$summary_line"
  else
    echo "unknown"
  fi
}

gate_emit_summary() {
  local exit_code="$1"
  local overall="passed"

  if [[ "$exit_code" -ne 0 ]]; then
    overall="failed"
  fi

  echo "[gate][summary] overall=$overall exit_code=$exit_code strict=$STRICT_TOOLCHAIN host=$HOST_OS doctor_reported_status=$doctor_reported_status generate=$generate_status maintainability_guard=$maintainability_guard_status doctor=$doctor_status unit_tests=$unit_tests_status before_all_dry_run=$before_all_dry_run_status before_all_real=$before_all_real_status package_preflight=$package_preflight_status package_real=$package_real_status"
}

gate_on_exit() {
  local exit_code="$?"

  trap - EXIT
  if [[ "$exit_code" -ne 0 && -n "${current_step:-}" ]]; then
    gate_set_step_state "$current_step" "failed" "command_failed"
  fi
  gate_emit_summary "$exit_code"
  exit "$exit_code"
}
