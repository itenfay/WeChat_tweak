#!/usr/bin/env bash
set -euo pipefail

usage() {
  cat <<'EOF'
用法:
  repeat_v2_gray_check.sh [选项]

选项:
  --build                     先执行本地构建（make -j4）
  --build-timeout N           构建超时秒数，默认 60
  --log FILE                  指定本地日志文件
  --tail N                    仅分析最后 N 行，默认 3000
  --latest-session            仅分析最近一次会话（默认开启）
  --no-latest-session         关闭最近会话过滤
  --strict                    警告视为失败
  --pull-device-log           通过 SSH 从设备拉日志后再分析
  --device-ip IP              设备 IP，默认 localhost
  --device-port PORT          SSH 端口，默认 2222
  --device-user USER          SSH 用户，默认 root
  --remote-log PATH           设备日志路径（可选）
  --out-dir DIR               拉取日志输出目录，默认 <repo>/logs/live
  --report-dir DIR            报告输出目录，默认 <repo>/logs/reports
  --report-file FILE          指定报告文件路径（优先于 --report-dir）
  --no-report                 不生成报告文件
  -h, --help                  查看帮助
EOF
}

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
REPO_ROOT="$(cd "$PROJECT_ROOT/../.." && pwd)"

BUILD_FIRST=0
BUILD_TIMEOUT=60
TAIL_LINES=3000
LATEST_SESSION=1
STRICT=0
PULL_DEVICE_LOG=0
DEVICE_IP="localhost"
DEVICE_PORT="2222"
DEVICE_USER="root"
REMOTE_LOG=""
OUT_DIR="$REPO_ROOT/logs/live"
REPORT_ENABLED=1
REPORT_DIR="$REPO_ROOT/logs/reports"
REPORT_FILE=""
LOG_FILE=""

while (($# > 0)); do
  case "$1" in
    --build)
      BUILD_FIRST=1
      shift
      ;;
    --build-timeout)
      BUILD_TIMEOUT="${2:-}"
      shift 2
      ;;
    --log)
      LOG_FILE="${2:-}"
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
    --strict)
      STRICT=1
      shift
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
      echo "未知参数: $1" >&2
      usage
      exit 2
      ;;
  esac
done

if ! [[ "$BUILD_TIMEOUT" =~ ^[0-9]+$ ]] || ((BUILD_TIMEOUT <= 0)); then
  echo "参数错误: --build-timeout 需要正整数" >&2
  exit 2
fi

if ! [[ "$TAIL_LINES" =~ ^[0-9]+$ ]] || ((TAIL_LINES <= 0)); then
  echo "参数错误: --tail 需要正整数" >&2
  exit 2
fi

if ((BUILD_FIRST == 1)); then
  echo "[gray-check] build start (timeout=${BUILD_TIMEOUT}s)"
  timeout "${BUILD_TIMEOUT}s" make -C "$PROJECT_ROOT" -j4
  echo "[gray-check] build done"
fi

if ((PULL_DEVICE_LOG == 1)); then
  if ! command -v ssh >/dev/null 2>&1 || ! command -v scp >/dev/null 2>&1; then
    echo "error: ssh/scp 不可用，无法拉取设备日志" >&2
    exit 2
  fi

  mkdir -p "$OUT_DIR"

  if [[ -z "$REMOTE_LOG" ]]; then
    REMOTE_LOG="$(ssh -p "$DEVICE_PORT" -o BatchMode=yes -o ConnectTimeout=5 \
      "${DEVICE_USER}@${DEVICE_IP}" \
      'for p in /var/mobile/Documents/wcpl_debug.log /var/jb/var/mobile/Documents/wcpl_debug.log; do if [ -f "$p" ]; then echo "$p"; break; fi; done' \
      2>/dev/null || true)"
  fi

  if [[ -z "$REMOTE_LOG" ]]; then
    echo "error: 设备上未找到 wcpl_debug.log，请通过 --remote-log 指定路径" >&2
    exit 2
  fi

  TS="$(date +%Y%m%d_%H%M%S)"
  LOCAL_LOG="$OUT_DIR/wcpl_debug_${DEVICE_IP//./_}_${TS}.log"
  echo "[gray-check] pull log: ${DEVICE_USER}@${DEVICE_IP}:${REMOTE_LOG}"
  scp -P "$DEVICE_PORT" -o BatchMode=yes -o ConnectTimeout=5 \
    "${DEVICE_USER}@${DEVICE_IP}:${REMOTE_LOG}" "$LOCAL_LOG" >/dev/null
  LOG_FILE="$LOCAL_LOG"
  echo "[gray-check] log saved: $LOG_FILE"
fi

ANALYZE_SCRIPT="$PROJECT_ROOT/scripts/analyze_repeat_button_log.sh"
if [[ ! -x "$ANALYZE_SCRIPT" ]]; then
  echo "error: analyze script 不可执行: $ANALYZE_SCRIPT" >&2
  exit 2
fi

ARGS=()
if [[ -n "$LOG_FILE" ]]; then
  ARGS+=("$LOG_FILE")
fi
ARGS+=(--tail "$TAIL_LINES")
if ((LATEST_SESSION == 1)); then
  ARGS+=(--latest-session)
fi
if ((STRICT == 1)); then
  ARGS+=(--strict)
fi

echo "[gray-check] analyze start"
ANALYZE_OUT="$(mktemp)"
set +e
"$ANALYZE_SCRIPT" "${ARGS[@]}" | tee "$ANALYZE_OUT"
ANALYZE_RC=$?
set -e
ANALYZE_STATUS="$(awk -F= '/^status=/{v=$2} END{print v}' "$ANALYZE_OUT")"

if ((ANALYZE_RC == 0)); then
  if [[ -n "$ANALYZE_STATUS" ]]; then
    echo "[gray-check] result=${ANALYZE_STATUS}"
  else
    echo "[gray-check] result=PASS"
  fi
else
  echo "[gray-check] result=FAIL(rc=${ANALYZE_RC})"
fi

if ((REPORT_ENABLED == 1)); then
  if [[ -z "$REPORT_FILE" ]]; then
    mkdir -p "$REPORT_DIR"
    TS_REPORT="$(date +%Y%m%d_%H%M%S)"
    REPORT_FILE="$REPORT_DIR/repeat_v2_gray_check_${TS_REPORT}.report.txt"
  else
    mkdir -p "$(dirname "$REPORT_FILE")"
  fi

  {
    echo "timestamp=$(date -Iseconds)"
    echo "result_status=${ANALYZE_STATUS:-UNKNOWN}"
    echo "exit_code=${ANALYZE_RC}"
    echo "build_first=${BUILD_FIRST}"
    echo "build_timeout=${BUILD_TIMEOUT}"
    echo "pull_device_log=${PULL_DEVICE_LOG}"
    echo "device_ip=${DEVICE_IP}"
    echo "device_port=${DEVICE_PORT}"
    echo "device_user=${DEVICE_USER}"
    echo "tail_lines=${TAIL_LINES}"
    echo "latest_session=${LATEST_SESSION}"
    echo "strict=${STRICT}"
    echo "log_file=${LOG_FILE:-auto}"
    echo "report_file=${REPORT_FILE}"
    echo "analyze_script=${ANALYZE_SCRIPT}"
    echo "----- analyzer output -----"
    cat "$ANALYZE_OUT"
    echo "----- issue summary -----"
    awk -F= '/^(fail|warn)=/{print $0}' "$ANALYZE_OUT"
  } > "$REPORT_FILE"
  echo "[gray-check] report=$REPORT_FILE"
fi

rm -f "$ANALYZE_OUT"

exit "$ANALYZE_RC"
