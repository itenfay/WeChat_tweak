#!/usr/bin/env bash
set -euo pipefail

usage() {
  cat <<'EOF'
用法:
  analyze_runtime_perf_log.sh [日志文件] [--tail N] [--latest-session]

参数:
  日志文件               默认: wcpl_debug.log
  --tail N              仅分析最后 N 行（N>0）
  --latest-session      仅分析最近一次 "WCPL Logger Started" 之后的日志（默认开启）
  --no-latest-session   关闭最近会话过滤

示例:
  ./scripts/analyze_runtime_perf_log.sh wcpl_debug.log
  ./scripts/analyze_runtime_perf_log.sh wcpl_debug.log --tail 5000
EOF
}

if [[ "${1:-}" == "-h" || "${1:-}" == "--help" ]]; then
  usage
  exit 0
fi

LOG_FILE="wcpl_debug.log"
TAIL_LINES=0
LATEST_SESSION=1

if [[ "${1:-}" != "" && "${1:0:1}" != "-" ]]; then
  LOG_FILE="$1"
  shift
fi

while [[ $# -gt 0 ]]; do
  case "$1" in
    --tail)
      shift
      if [[ $# -eq 0 ]]; then
        echo "error: --tail 需要数字参数" >&2
        exit 2
      fi
      TAIL_LINES="$1"
      ;;
    --latest-session)
      LATEST_SESSION=1
      ;;
    --no-latest-session)
      LATEST_SESSION=0
      ;;
    *)
      echo "error: 未知参数: $1" >&2
      usage
      exit 2
      ;;
  esac
  shift
done

if [[ ! -f "$LOG_FILE" ]]; then
  echo "error: 日志文件不存在: $LOG_FILE" >&2
  exit 1
fi

WORK_FILE="$(mktemp)"
cleanup() {
  rm -f "$WORK_FILE"
}
trap cleanup EXIT

cp "$LOG_FILE" "$WORK_FILE"

if [[ "$LATEST_SESSION" -eq 1 ]]; then
  SESSION_START_LINE="$(rg -n --no-heading "WCPL Logger Started" "$WORK_FILE" 2>/dev/null | tail -n 1 | cut -d: -f1 || true)"
  if [[ -n "$SESSION_START_LINE" ]]; then
    tail -n "+${SESSION_START_LINE}" "$WORK_FILE" > "${WORK_FILE}.session"
    mv "${WORK_FILE}.session" "$WORK_FILE"
  fi
fi

if [[ "$TAIL_LINES" -gt 0 ]]; then
  tail -n "$TAIL_LINES" "$WORK_FILE" > "${WORK_FILE}.tail"
  mv "${WORK_FILE}.tail" "$WORK_FILE"
fi

python3 - "$WORK_FILE" <<'PY'
import re
import statistics
import sys
from collections import Counter, defaultdict

path = sys.argv[1]
with open(path, "r", encoding="utf-8", errors="ignore") as f:
    lines = [ln.rstrip("\n") for ln in f]

boot_re = re.compile(r"\[PERF\]\[BOOT\]\s+phase=([A-Za-z0-9_]+)\s+elapsed_ms=(\d+)\s+uptime_ms=(\d+)\s+rss_kb=(\d+)")
mem_re = re.compile(r"\[PERF\]\[MEM\]\s+stage=([A-Za-z0-9_]+)\s+sample=(\d+)\s+elapsed_ms=(\d+)\s+rss_kb=(\d+)")
entry_re = re.compile(r"\[PERF\]\[ENTRY\]\s+selector=([A-Za-z0-9_]+)\s+(.*)")
repeat_re = re.compile(r"\[PERF\]\[REPEAT\]\s+phase=menu_dispatch\s+result=([A-Za-z0-9_]+)\s+elapsed_ms=(\d+)")
kv_re = re.compile(r"([A-Za-z0-9_]+)=([^ \t]+)")

boot_events = []
mem_events = []
entry_events = defaultdict(list)
repeat_events = []
legacy_repeat_sent = 0
legacy_repeat_failed = 0

for ln in lines:
    m = boot_re.search(ln)
    if m:
        phase, elapsed, uptime, rss = m.groups()
        boot_events.append({
            "phase": phase,
            "elapsed_ms": int(elapsed),
            "uptime_ms": int(uptime),
            "rss_kb": int(rss),
        })
        continue

    m = mem_re.search(ln)
    if m:
        stage, sample, elapsed, rss = m.groups()
        mem_events.append({
            "stage": stage,
            "sample": int(sample),
            "elapsed_ms": int(elapsed),
            "rss_kb": int(rss),
        })
        continue

    m = entry_re.search(ln)
    if m:
        selector, payload = m.groups()
        data = {"selector": selector}
        for k, v in kv_re.findall(payload):
            if v.isdigit():
                data[k] = int(v)
            else:
                data[k] = v
        entry_events[selector].append(data)
        continue

    m = repeat_re.search(ln)
    if m:
        result, elapsed = m.groups()
        repeat_events.append({
            "result": result,
            "elapsed_ms": int(elapsed),
        })
        continue

    if "Repeat sent:" in ln:
        legacy_repeat_sent += 1
    if "Repeat failed:" in ln:
        legacy_repeat_failed += 1


def stats(values):
    if not values:
        return None
    values = sorted(values)
    p95_idx = int(round((len(values) - 1) * 0.95))
    return {
        "count": len(values),
        "avg": sum(values) / len(values),
        "median": statistics.median(values),
        "min": values[0],
        "max": values[-1],
        "p95": values[p95_idx],
    }


print("=== Runtime Perf Report ===")
print(f"log_lines={len(lines)}")
print("")

print("[boot]")
if not boot_events:
    print("boot_events=0")
else:
    print(f"boot_events={len(boot_events)}")
    by_phase = {}
    for ev in boot_events:
        by_phase[ev["phase"]] = ev
    for phase in sorted(by_phase.keys(), key=lambda p: by_phase[p]["elapsed_ms"]):
        ev = by_phase[phase]
        print(f"phase={phase} elapsed_ms={ev['elapsed_ms']} rss_kb={ev['rss_kb']}")
print("")

print("[memory_curve]")
if not mem_events:
    print("mem_samples=0")
else:
    rss_vals = [ev["rss_kb"] for ev in mem_events]
    elapsed_vals = [ev["elapsed_ms"] for ev in mem_events]
    print(f"mem_samples={len(mem_events)}")
    print(f"rss_kb_min={min(rss_vals)} rss_kb_max={max(rss_vals)} rss_kb_avg={int(sum(rss_vals)/len(rss_vals))}")
    print(f"elapsed_ms_first={min(elapsed_vals)} elapsed_ms_last={max(elapsed_vals)}")
print("")

print("[entry_latency]")
if not entry_events:
    print("entry_events=0")
else:
    for selector in sorted(entry_events.keys()):
        vals = [ev.get("total_ms") for ev in entry_events[selector] if isinstance(ev.get("total_ms"), int)]
        s = stats(vals)
        if not s:
            print(f"selector={selector} count={len(entry_events[selector])} total_ms=NA")
            continue
        print(
            "selector={selector} count={count} avg_ms={avg:.2f} median_ms={median:.2f} p95_ms={p95} min_ms={min} max_ms={max}".format(
                selector=selector,
                **s,
            )
        )
print("")

print("[repeat_latency]")
if not repeat_events:
    print("repeat_perf_events=0")
else:
    ok_vals = [ev["elapsed_ms"] for ev in repeat_events if ev["result"] == "dispatch_ok"]
    all_vals = [ev["elapsed_ms"] for ev in repeat_events]
    result_counter = Counter(ev["result"] for ev in repeat_events)
    s_all = stats(all_vals)
    s_ok = stats(ok_vals)
    print(f"repeat_perf_events={len(repeat_events)}")
    print("repeat_result_counts=" + ",".join(f"{k}:{v}" for k, v in sorted(result_counter.items())))
    if s_all:
        print(
            "repeat_all count={count} avg_ms={avg:.2f} median_ms={median:.2f} p95_ms={p95} min_ms={min} max_ms={max}".format(
                **s_all
            )
        )
    if s_ok:
        print(
            "repeat_dispatch_ok count={count} avg_ms={avg:.2f} median_ms={median:.2f} p95_ms={p95} min_ms={min} max_ms={max}".format(
                **s_ok
            )
        )

print("")
print("[legacy_repeat_counters]")
print(f"legacy_repeat_sent={legacy_repeat_sent}")
print(f"legacy_repeat_failed={legacy_repeat_failed}")
PY
