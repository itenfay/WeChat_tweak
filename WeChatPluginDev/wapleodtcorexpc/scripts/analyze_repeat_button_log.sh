#!/usr/bin/env bash
set -euo pipefail

usage() {
  cat <<'EOF'
用法:
  analyze_repeat_button_log.sh [日志文件] [--tail N] [--latest-session] [--strict]

说明:
  - 不传日志文件时，会按以下顺序自动探测:
    1) <repo>/logs/live/wcpl_debug.log
    2) <repo>/logs/wcpl_debug.log
    3) <repo>/wcpl_debug.log
  - --tail N: 仅分析最后 N 行，适合灰度回归时快速检查
  - --latest-session: 仅分析最近一次 "WCPL Logger Started" 之后的日志
  - --strict: 发现警告也返回失败退出码
EOF
}

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
REPO_ROOT="$(cd "$PROJECT_ROOT/../.." && pwd)"

STRICT=0
TAIL_LINES=0
LATEST_SESSION=0
LOG_FILE=""
SESSION_START_LINE=""
TMP_FILES=()

cleanup() {
  if ((${#TMP_FILES[@]} > 0)); then
    rm -f "${TMP_FILES[@]}"
  fi
}
trap cleanup EXIT

while (($# > 0)); do
  case "$1" in
    --strict)
      STRICT=1
      shift
      ;;
    --tail)
      if (($# < 2)); then
        echo "参数错误: --tail 需要数字" >&2
        usage
        exit 2
      fi
      TAIL_LINES="$2"
      shift 2
      ;;
    --latest-session)
      LATEST_SESSION=1
      shift
      ;;
    -h|--help)
      usage
      exit 0
      ;;
    *)
      if [[ -n "$LOG_FILE" ]]; then
        echo "参数错误: 仅支持一个日志文件参数" >&2
        usage
        exit 2
      fi
      LOG_FILE="$1"
      shift
      ;;
  esac
done

if [[ -z "$LOG_FILE" ]]; then
  for candidate in \
    "$REPO_ROOT/logs/live/wcpl_debug.log" \
    "$REPO_ROOT/logs/wcpl_debug.log" \
    "$REPO_ROOT/wcpl_debug.log"; do
    if [[ -f "$candidate" ]]; then
      LOG_FILE="$candidate"
      break
    fi
  done
fi

if [[ -z "$LOG_FILE" || ! -f "$LOG_FILE" ]]; then
  echo "日志文件不存在: ${LOG_FILE:-<未提供>}" >&2
  exit 2
fi

ANALYZE_FILE="$LOG_FILE"
if ((LATEST_SESSION == 1)); then
  SESSION_START_LINE="$(rg -n --no-heading "WCPL Logger Started" "$LOG_FILE" 2>/dev/null | tail -n 1 | cut -d: -f1 || true)"
  if [[ "$SESSION_START_LINE" =~ ^[0-9]+$ ]] && ((SESSION_START_LINE > 0)); then
    SESSION_TMP="$(mktemp)"
    TMP_FILES+=("$SESSION_TMP")
    sed -n "${SESSION_START_LINE},\$p" "$LOG_FILE" > "$SESSION_TMP"
    ANALYZE_FILE="$SESSION_TMP"
  fi
fi

if [[ "$TAIL_LINES" =~ ^[0-9]+$ ]] && ((TAIL_LINES > 0)); then
  TAIL_TMP="$(mktemp)"
  TMP_FILES+=("$TAIL_TMP")
  tail -n "$TAIL_LINES" "$ANALYZE_FILE" > "$TAIL_TMP"
  ANALYZE_FILE="$TAIL_TMP"
fi

count_pattern() {
  local pattern="$1"
  local value
  value="$(rg -c -- "$pattern" "$ANALYZE_FILE" 2>/dev/null || true)"
  if [[ -z "$value" ]]; then
    value=0
  fi
  echo "$value"
}

repeat_clicks="$(count_pattern "Repeat click: class=")"
sent_success="$(count_pattern "Repeat sent: flow=")"
repeat_failed="$(count_pattern "Repeat failed:")"
debounce_ignored="$(count_pattern "Repeat click ignored by debounce")"
stale_binding_fixed="$(count_pattern "Repeat click stale binding fixed")"
wrap_mismatch_fixed="$(count_pattern "Repeat click wrap mismatch fixed")"
anchor_signature_changed="$(count_pattern "Repeat anchor signature changed")"
button_clamped="$(count_pattern "Repeat button clamped to cell end")"
button_dedupe_v2="$(count_pattern "Repeat button dedupe\\(v2\\)")"
engine_switch_v2="$(count_pattern "Repeat button engine switched to V2\\(sync-cell\\)")"
engine_switch_v1="$(count_pattern "Repeat button engine switched to V1\\(global-refresh\\)")"
proxy_unresolved_warn="$(count_pattern "Repeat proxy unresolved")"

stale_pct=0
mismatch_pct=0
has_repeat_activity=0
if ((repeat_clicks > 0 || sent_success > 0 || repeat_failed > 0)); then
  has_repeat_activity=1
fi
if ((repeat_clicks > 0)); then
  stale_pct=$((stale_binding_fixed * 100 / repeat_clicks))
  mismatch_pct=$((wrap_mismatch_fixed * 100 / repeat_clicks))
fi

warnings=()
failures=()

if ((repeat_failed > 0)); then
  failures+=("检测到 Repeat 发送失败: ${repeat_failed}")
fi
if ((repeat_clicks > 0 && sent_success == 0)); then
  failures+=("有点击但无发送成功日志")
fi
if ((has_repeat_activity == 0)); then
  warnings+=("未检测到复读点击/发送日志，可能尚未执行回归动作")
fi
if ((stale_pct > 5)); then
  warnings+=("stale_binding 修复比例偏高: ${stale_pct}%")
fi
if ((mismatch_pct > 5)); then
  warnings+=("wrap_mismatch 修复比例偏高: ${mismatch_pct}%")
fi
if ((button_clamped > repeat_clicks && repeat_clicks > 0)); then
  warnings+=("clamp 次数高于点击次数，可能存在布局抖动")
fi
if ((has_repeat_activity == 1 && proxy_unresolved_warn > 0)); then
  warnings+=("检测到 proxy unresolved 警告: ${proxy_unresolved_warn}")
fi

status="PASS"
if ((${#failures[@]} > 0)); then
  status="FAIL"
elif ((${#warnings[@]} > 0)); then
  status="WARN"
fi

if ((STRICT == 1)) && [[ "$status" == "WARN" ]]; then
  failures+=("strict 模式下，警告视为失败")
  status="FAIL"
fi

echo "log_file=$LOG_FILE"
echo "tail_lines=${TAIL_LINES}"
echo "latest_session=${LATEST_SESSION}"
echo "session_start_line=${SESSION_START_LINE:-0}"
echo "metric.repeat_clicks=${repeat_clicks}"
echo "metric.sent_success=${sent_success}"
echo "metric.repeat_failed=${repeat_failed}"
echo "metric.has_repeat_activity=${has_repeat_activity}"
echo "metric.debounce_ignored=${debounce_ignored}"
echo "metric.stale_binding_fixed=${stale_binding_fixed}"
echo "metric.wrap_mismatch_fixed=${wrap_mismatch_fixed}"
echo "metric.anchor_signature_changed=${anchor_signature_changed}"
echo "metric.button_clamped=${button_clamped}"
echo "metric.button_dedupe_v2=${button_dedupe_v2}"
echo "metric.engine_switch_v2=${engine_switch_v2}"
echo "metric.engine_switch_v1=${engine_switch_v1}"
echo "metric.proxy_unresolved_warn=${proxy_unresolved_warn}"
echo "status=$status"

if ((${#warnings[@]} > 0)); then
  for item in "${warnings[@]}"; do
    echo "warn=$item"
  done
fi

if ((${#failures[@]} > 0)); then
  for item in "${failures[@]}"; do
    echo "fail=$item"
  done
  exit 2
fi

exit 0
