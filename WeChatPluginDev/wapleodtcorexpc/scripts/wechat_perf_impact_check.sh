#!/usr/bin/env bash
set -euo pipefail

usage() {
  cat <<'USAGE'
用法:
  wechat_perf_impact_check.sh [选项]

说明:
  用于评估 tweak 对微信性能影响，流程为：
  1) 可选：从真机拉取最新日志
  2) 运行运行时 PERF 分析脚本
  3) 可选：与 baseline 日志做退化对比
  4) 输出终端结论并生成报告

选项:
  --log FILE                  指定当前版本日志文件（不传则自动探测）
  --pull-device-log           通过 SSH 从设备拉取当前日志再分析
  --device-ip IP              设备 IP，默认 localhost
  --device-port PORT          SSH 端口，默认 2222
  --device-user USER          SSH 用户，默认 root
  --remote-log PATH           设备日志路径（可选，不传则自动探测）
  --out-dir DIR               拉取日志目录，默认 <repo>/logs/live
  --tail N                    仅分析最后 N 行，默认 20000
  --latest-session            仅分析最近会话（默认开启）
  --no-latest-session         关闭最近会话过滤

  --baseline-log FILE         基线日志文件（建议: 同场景历史版本日志）
  --scenario-tag TAG          场景标签（写入报告），默认 manual

  --threshold-launch-ms N     didFinishLaunching avg_ms 阈值，默认 120
  --threshold-repeat-ms N     repeat_dispatch_ok avg_ms 阈值，默认 80
  --threshold-ctor-ms N       ctor_done elapsed_ms 阈值，默认 100
  --threshold-rss-kb N        rss_kb_avg 阈值，默认 30720 (30MB)
  --strict                    存在超阈值项时返回非 0

  --report-dir DIR            报告目录，默认 <repo>/logs/reports
  --report-file FILE          指定报告文件（优先于 --report-dir）
  --no-report                 不生成报告文件

  -h, --help                  查看帮助

示例:
  # 分析本地日志（最近会话）
  ./scripts/wechat_perf_impact_check.sh --log wcpl_debug.log

  # 真机拉日志并分析
  ./scripts/wechat_perf_impact_check.sh --pull-device-log --device-ip 192.168.1.7

  # 与基线对比，严格模式下有退化则失败
  ./scripts/wechat_perf_impact_check.sh \
    --log logs/live/current.log \
    --baseline-log logs/baseline/prev_version.log \
    --scenario-tag startup_chat_list \
    --strict
USAGE
}

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
REPO_ROOT="$(cd "$PROJECT_ROOT/../.." && pwd)"
ANALYZE_SCRIPT="$PROJECT_ROOT/scripts/analyze_runtime_perf_log.sh"

LOG_FILE=""
PULL_DEVICE_LOG=0
DEVICE_IP="localhost"
DEVICE_PORT="2222"
DEVICE_USER="root"
REMOTE_LOG=""
OUT_DIR="$REPO_ROOT/logs/live"

TAIL_LINES=20000
LATEST_SESSION=1

BASELINE_LOG=""
SCENARIO_TAG="manual"

THRESHOLD_LAUNCH_MS=120
THRESHOLD_REPEAT_MS=80
THRESHOLD_CTOR_MS=100
THRESHOLD_RSS_KB=30720
STRICT=0

REPORT_ENABLED=1
REPORT_DIR="$REPO_ROOT/logs/reports"
REPORT_FILE=""

while (($# > 0)); do
  case "$1" in
    --log)
      LOG_FILE="${2:-}"
      shift 2
      ;;
    --pull-device-log)
      PULL_DEVICE_LOG=1
      shift
      ;;
    --device-ip)
      DEVICE_IP="${2:-}"
      shift 2
      ;;
    --device-port)
      DEVICE_PORT="${2:-}"
      shift 2
      ;;
    --device-user)
      DEVICE_USER="${2:-}"
      shift 2
      ;;
    --remote-log)
      REMOTE_LOG="${2:-}"
      shift 2
      ;;
    --out-dir)
      OUT_DIR="${2:-}"
      shift 2
      ;;
    --tail)
      TAIL_LINES="${2:-}"
      shift 2
      ;;
    --latest-session)
      LATEST_SESSION=1
      shift
      ;;
    --no-latest-session)
      LATEST_SESSION=0
      shift
      ;;
    --baseline-log)
      BASELINE_LOG="${2:-}"
      shift 2
      ;;
    --scenario-tag)
      SCENARIO_TAG="${2:-}"
      shift 2
      ;;
    --threshold-launch-ms)
      THRESHOLD_LAUNCH_MS="${2:-}"
      shift 2
      ;;
    --threshold-repeat-ms)
      THRESHOLD_REPEAT_MS="${2:-}"
      shift 2
      ;;
    --threshold-ctor-ms)
      THRESHOLD_CTOR_MS="${2:-}"
      shift 2
      ;;
    --threshold-rss-kb)
      THRESHOLD_RSS_KB="${2:-}"
      shift 2
      ;;
    --strict)
      STRICT=1
      shift
      ;;
    --report-dir)
      REPORT_DIR="${2:-}"
      shift 2
      ;;
    --report-file)
      REPORT_FILE="${2:-}"
      shift 2
      ;;
    --no-report)
      REPORT_ENABLED=0
      shift
      ;;
    -h|--help)
      usage
      exit 0
      ;;
    *)
      echo "error: 未知参数: $1" >&2
      usage
      exit 2
      ;;
  esac
done

is_pos_int() {
  [[ "$1" =~ ^[0-9]+$ ]] && ((10#$1 > 0))
}

is_number() {
  [[ "$1" =~ ^[0-9]+([.][0-9]+)?$ ]]
}

if ! is_pos_int "$DEVICE_PORT"; then
  echo "error: --device-port 需要正整数" >&2
  exit 2
fi

if ! is_pos_int "$TAIL_LINES"; then
  echo "error: --tail 需要正整数" >&2
  exit 2
fi

for pair in \
  "$THRESHOLD_LAUNCH_MS --threshold-launch-ms" \
  "$THRESHOLD_REPEAT_MS --threshold-repeat-ms" \
  "$THRESHOLD_CTOR_MS --threshold-ctor-ms" \
  "$THRESHOLD_RSS_KB --threshold-rss-kb"; do
  value="${pair%% *}"
  name="${pair#* }"
  if ! is_pos_int "$value"; then
    echo "error: ${name} 需要正整数" >&2
    exit 2
  fi
done

if [[ ! -x "$ANALYZE_SCRIPT" ]]; then
  echo "error: 分析脚本不可执行: $ANALYZE_SCRIPT" >&2
  exit 2
fi

auto_find_local_log() {
  local candidates=(
    "$REPO_ROOT/logs/live/wcpl_debug.log"
    "$REPO_ROOT/logs/wcpl_debug.log"
    "$REPO_ROOT/wcpl_debug.log"
    "$PROJECT_ROOT/wcpl_debug.log"
  )
  local p
  for p in "${candidates[@]}"; do
    if [[ -f "$p" ]]; then
      echo "$p"
      return 0
    fi
  done
  return 1
}

auto_find_remote_log() {
  ssh -p "$DEVICE_PORT" -o BatchMode=yes -o ConnectTimeout=5 \
    "${DEVICE_USER}@${DEVICE_IP}" \
    'for p in /var/mobile/Documents/wcpl_debug.log /var/jb/var/mobile/Documents/wcpl_debug.log; do
       if [ -f "$p" ]; then
         echo "$p"
         exit 0
       fi
     done
     if [ -d /var/mobile/Containers/Data/Application ]; then
       find /var/mobile/Containers/Data/Application -maxdepth 4 -name wcpl_debug.log -print -quit 2>/dev/null
     fi' 2>/dev/null || true
}

if ((PULL_DEVICE_LOG == 1)); then
  if ! command -v ssh >/dev/null 2>&1 || ! command -v scp >/dev/null 2>&1; then
    echo "error: ssh/scp 不可用，无法拉取设备日志" >&2
    exit 2
  fi

  mkdir -p "$OUT_DIR"

  if [[ -z "$REMOTE_LOG" ]]; then
    REMOTE_LOG="$(auto_find_remote_log)"
  fi

  if [[ -z "$REMOTE_LOG" ]]; then
    echo "error: 设备上未找到 wcpl_debug.log，请使用 --remote-log 指定" >&2
    exit 2
  fi

  TS_PULL="$(date +%Y%m%d_%H%M%S)"
  LOCAL_LOG="$OUT_DIR/wcpl_debug_${DEVICE_IP//./_}_${TS_PULL}.log"

  echo "[perf-impact] pull log: ${DEVICE_USER}@${DEVICE_IP}:${REMOTE_LOG}"
  scp -P "$DEVICE_PORT" -o BatchMode=yes -o ConnectTimeout=5 \
    "${DEVICE_USER}@${DEVICE_IP}:${REMOTE_LOG}" "$LOCAL_LOG" >/dev/null

  LOG_FILE="$LOCAL_LOG"
  echo "[perf-impact] log saved: $LOG_FILE"
fi

if [[ -z "$LOG_FILE" ]]; then
  if ! LOG_FILE="$(auto_find_local_log)"; then
    echo "error: 未找到本地日志，请使用 --log 指定或加 --pull-device-log" >&2
    exit 2
  fi
fi

if [[ ! -f "$LOG_FILE" ]]; then
  echo "error: 当前日志不存在: $LOG_FILE" >&2
  exit 2
fi

if [[ -n "$BASELINE_LOG" && ! -f "$BASELINE_LOG" ]]; then
  echo "error: 基线日志不存在: $BASELINE_LOG" >&2
  exit 2
fi

mk_tmp() {
  mktemp "${TMPDIR:-/tmp}/wcpl_perf_XXXXXX"
}

CURR_OUT="$(mk_tmp)"
BASE_OUT=""
REPORT_RESULT="PASS"
EXIT_CODE=0
WARNINGS=()

cleanup() {
  rm -f "$CURR_OUT"
  if [[ -n "$BASE_OUT" ]]; then
    rm -f "$BASE_OUT"
  fi
}
trap cleanup EXIT

build_analyze_args() {
  local log_file="$1"
  local arr=("$log_file" "--tail" "$TAIL_LINES")
  if ((LATEST_SESSION == 1)); then
    arr+=("--latest-session")
  else
    arr+=("--no-latest-session")
  fi
  printf '%s\n' "${arr[@]}"
}

extract_field() {
  local file="$1"
  local pattern="$2"
  local key="$3"
  awk -v pat="$pattern" -v key="$key" '
    $0 ~ pat {
      for (i = 1; i <= NF; i++) {
        if ($i ~ ("^" key "=")) {
          v = $i
          sub("^" key "=", "", v)
          print v
          exit
        }
      }
    }
  ' "$file"
}

num_sub() {
  awk -v a="$1" -v b="$2" 'BEGIN { printf "%.2f", (a - b) }'
}

num_gt() {
  awk -v a="$1" -v b="$2" 'BEGIN { exit !(a > b) }'
}

format_metric() {
  local v="$1"
  if [[ -z "$v" ]]; then
    echo "NA"
  else
    echo "$v"
  fi
}

run_analyze() {
  local log_file="$1"
  local output_file="$2"
  local -a args
  mapfile -t args < <(build_analyze_args "$log_file")
  "$ANALYZE_SCRIPT" "${args[@]}" > "$output_file"
}

parse_metrics() {
  local file="$1"
  local prefix="$2"
  local value

  value="$(extract_field "$file" "selector=didFinishLaunching" "avg_ms")"
  printf -v "${prefix}_launch_avg_ms" '%s' "$value"

  value="$(extract_field "$file" "^repeat_dispatch_ok " "avg_ms")"
  printf -v "${prefix}_repeat_avg_ms" '%s' "$value"

  value="$(extract_field "$file" "^phase=ctor_done " "elapsed_ms")"
  printf -v "${prefix}_ctor_elapsed_ms" '%s' "$value"

  value="$(extract_field "$file" "^rss_kb_min=" "rss_kb_avg")"
  printf -v "${prefix}_mem_rss_avg_kb" '%s' "$value"
}

warn() {
  WARNINGS+=("$1")
}

echo "[perf-impact] analyze current log: $LOG_FILE"
set +e
run_analyze "$LOG_FILE" "$CURR_OUT"
CURR_RC=$?
set -e
cat "$CURR_OUT"

if ((CURR_RC != 0)); then
  echo "[perf-impact] current analyze failed: rc=${CURR_RC}" >&2
  REPORT_RESULT="FAIL"
  EXIT_CODE="$CURR_RC"
else
  parse_metrics "$CURR_OUT" "curr"

  echo "[perf-impact] current metrics:"
  echo "  launch_avg_ms=$(format_metric "$curr_launch_avg_ms")"
  echo "  repeat_dispatch_ok_avg_ms=$(format_metric "$curr_repeat_avg_ms")"
  echo "  ctor_done_elapsed_ms=$(format_metric "$curr_ctor_elapsed_ms")"
  echo "  mem_rss_avg_kb=$(format_metric "$curr_mem_rss_avg_kb")"

  if [[ -n "$BASELINE_LOG" ]]; then
    BASE_OUT="$(mk_tmp)"
    echo "[perf-impact] analyze baseline log: $BASELINE_LOG"

    set +e
    run_analyze "$BASELINE_LOG" "$BASE_OUT"
    BASE_RC=$?
    set -e

    if ((BASE_RC != 0)); then
      echo "[perf-impact] baseline analyze failed: rc=${BASE_RC}" >&2
      REPORT_RESULT="FAIL"
      EXIT_CODE="$BASE_RC"
    else
      parse_metrics "$BASE_OUT" "base"

      echo "[perf-impact] baseline metrics:"
      echo "  launch_avg_ms=$(format_metric "$base_launch_avg_ms")"
      echo "  repeat_dispatch_ok_avg_ms=$(format_metric "$base_repeat_avg_ms")"
      echo "  ctor_done_elapsed_ms=$(format_metric "$base_ctor_elapsed_ms")"
      echo "  mem_rss_avg_kb=$(format_metric "$base_mem_rss_avg_kb")"

      if is_number "${curr_launch_avg_ms:-}" && is_number "${base_launch_avg_ms:-}"; then
        launch_delta="$(num_sub "$curr_launch_avg_ms" "$base_launch_avg_ms")"
        echo "[perf-impact] delta launch_avg_ms=${launch_delta}"
        if num_gt "$launch_delta" "$THRESHOLD_LAUNCH_MS"; then
          warn "didFinishLaunching 平均耗时退化 ${launch_delta}ms > 阈值 ${THRESHOLD_LAUNCH_MS}ms"
        fi
      fi

      if is_number "${curr_repeat_avg_ms:-}" && is_number "${base_repeat_avg_ms:-}"; then
        repeat_delta="$(num_sub "$curr_repeat_avg_ms" "$base_repeat_avg_ms")"
        echo "[perf-impact] delta repeat_dispatch_ok_avg_ms=${repeat_delta}"
        if num_gt "$repeat_delta" "$THRESHOLD_REPEAT_MS"; then
          warn "复读分发平均耗时退化 ${repeat_delta}ms > 阈值 ${THRESHOLD_REPEAT_MS}ms"
        fi
      fi

      if is_number "${curr_ctor_elapsed_ms:-}" && is_number "${base_ctor_elapsed_ms:-}"; then
        ctor_delta="$(num_sub "$curr_ctor_elapsed_ms" "$base_ctor_elapsed_ms")"
        echo "[perf-impact] delta ctor_done_elapsed_ms=${ctor_delta}"
        if num_gt "$ctor_delta" "$THRESHOLD_CTOR_MS"; then
          warn "启动 ctor 完成耗时退化 ${ctor_delta}ms > 阈值 ${THRESHOLD_CTOR_MS}ms"
        fi
      fi

      if is_number "${curr_mem_rss_avg_kb:-}" && is_number "${base_mem_rss_avg_kb:-}"; then
        rss_delta="$(num_sub "$curr_mem_rss_avg_kb" "$base_mem_rss_avg_kb")"
        echo "[perf-impact] delta mem_rss_avg_kb=${rss_delta}"
        if num_gt "$rss_delta" "$THRESHOLD_RSS_KB"; then
          warn "平均 RSS 退化 ${rss_delta}KB > 阈值 ${THRESHOLD_RSS_KB}KB"
        fi
      fi
    fi
  else
    echo "[perf-impact] baseline 未提供，按绝对阈值做粗检"

    if is_number "${curr_launch_avg_ms:-}" && num_gt "$curr_launch_avg_ms" "$THRESHOLD_LAUNCH_MS"; then
      warn "didFinishLaunching 平均耗时 ${curr_launch_avg_ms}ms > 阈值 ${THRESHOLD_LAUNCH_MS}ms"
    fi
    if is_number "${curr_repeat_avg_ms:-}" && num_gt "$curr_repeat_avg_ms" "$THRESHOLD_REPEAT_MS"; then
      warn "复读分发平均耗时 ${curr_repeat_avg_ms}ms > 阈值 ${THRESHOLD_REPEAT_MS}ms"
    fi
    if is_number "${curr_ctor_elapsed_ms:-}" && num_gt "$curr_ctor_elapsed_ms" "$THRESHOLD_CTOR_MS"; then
      warn "启动 ctor 完成耗时 ${curr_ctor_elapsed_ms}ms > 阈值 ${THRESHOLD_CTOR_MS}ms"
    fi
    if is_number "${curr_mem_rss_avg_kb:-}" && num_gt "$curr_mem_rss_avg_kb" "$THRESHOLD_RSS_KB"; then
      warn "平均 RSS ${curr_mem_rss_avg_kb}KB > 阈值 ${THRESHOLD_RSS_KB}KB"
    fi
  fi
fi

if ((EXIT_CODE == 0)); then
  if ((${#WARNINGS[@]} > 0)); then
    REPORT_RESULT="WARN"
    echo "[perf-impact] warnings=${#WARNINGS[@]}"
    for w in "${WARNINGS[@]}"; do
      echo "  - $w"
    done
    if ((STRICT == 1)); then
      REPORT_RESULT="FAIL"
      EXIT_CODE=3
    fi
  else
    REPORT_RESULT="PASS"
    echo "[perf-impact] no warning"
  fi
fi

if ((REPORT_ENABLED == 1)); then
  TS_REPORT="$(date +%Y%m%d_%H%M%S)"
  if [[ -z "$REPORT_FILE" ]]; then
    mkdir -p "$REPORT_DIR"
    safe_tag="${SCENARIO_TAG//[^A-Za-z0-9_.-]/_}"
    REPORT_FILE="$REPORT_DIR/wechat_perf_impact_${safe_tag}_${TS_REPORT}.report.txt"
  else
    mkdir -p "$(dirname "$REPORT_FILE")"
  fi

  {
    echo "timestamp=$(date -Iseconds)"
    echo "result_status=$REPORT_RESULT"
    echo "exit_code=$EXIT_CODE"
    echo "strict=$STRICT"
    echo "scenario_tag=$SCENARIO_TAG"
    echo "log_file=$LOG_FILE"
    echo "baseline_log=${BASELINE_LOG:-none}"
    echo "tail_lines=$TAIL_LINES"
    echo "latest_session=$LATEST_SESSION"
    echo "pull_device_log=$PULL_DEVICE_LOG"
    echo "device_ip=$DEVICE_IP"
    echo "device_port=$DEVICE_PORT"
    echo "device_user=$DEVICE_USER"
    echo "threshold_launch_ms=$THRESHOLD_LAUNCH_MS"
    echo "threshold_repeat_ms=$THRESHOLD_REPEAT_MS"
    echo "threshold_ctor_ms=$THRESHOLD_CTOR_MS"
    echo "threshold_rss_kb=$THRESHOLD_RSS_KB"
    echo "----- current analyzer output -----"
    cat "$CURR_OUT"

    if [[ -n "$BASE_OUT" ]]; then
      echo "----- baseline analyzer output -----"
      cat "$BASE_OUT"
    fi

    echo "----- warning summary -----"
    if ((${#WARNINGS[@]} == 0)); then
      echo "none"
    else
      for w in "${WARNINGS[@]}"; do
        echo "$w"
      done
    fi
  } > "$REPORT_FILE"

  echo "[perf-impact] report=$REPORT_FILE"
fi

exit "$EXIT_CODE"
