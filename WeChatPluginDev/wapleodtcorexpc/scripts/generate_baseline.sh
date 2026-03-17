#!/usr/bin/env bash
# 自动生成 / 更新 / 验证可维护性基线（baseline.json）
# 替代 maintainability_guard.sh 中手工维护的 declare -A 数组
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
SRC_DIR="$ROOT_DIR/src"
BASELINE_FILE="$ROOT_DIR/scripts/baseline.json"

RUNTIME_CLASS_LOOKUP_PATTERN='objc_getClass\(|NSClassFromString\('
SERVICE_LOOKUP_PATTERN='WCPLGetService\('
KVC_LOOKUP_PATTERN='valueForKey:|setValue:forKey:'
LARGE_FILE_DEFAULT_LIMIT=1000

log_info()  { echo "[baseline][info] $1"; }
log_warn()  { echo "[baseline][warn] $1" >&2; }
log_error() { echo "[baseline][error] $1" >&2; }

usage() {
  cat <<'EOF'
用法: scripts/generate_baseline.sh [选项]

选项:
  (无参数)   首次生成基线（baseline.json 不存在时）
  --update   重新扫描并更新基线（债务减少时自动收紧阈值）
  --verify   校验当前计数是否低于基线，若低则提示需 --update（棘轮机制）
  -h|--help  显示此帮助
EOF
}

# --- 扫描函数 ---

count_pattern_in_file() {
  local pattern="$1" file="$2"
  # rg 无匹配时退出码=1，pipefail 下需要显式兜底
  local cnt
  cnt="$(rg -c -e "$pattern" "$file" 2>/dev/null || true)"
  echo "${cnt:-0}"
}

scan_large_files() {
  # 输出 JSON 对象：文件相对路径 -> 行数（仅超出默认阈值的文件）
  local result="{}"
  while IFS= read -r line; do
    [[ -z "$line" ]] && continue
    local count="${line%%:*}"
    local fpath="${line#*:}"
    local rel="${fpath#$ROOT_DIR/}"
    if (( count > LARGE_FILE_DEFAULT_LIMIT )); then
      result=$(echo "$result" | jq --arg k "$rel" --argjson v "$count" '. + {($k): $v}')
    fi
  done < <(
    find "$SRC_DIR" -type f \( -name '*.m' -o -name '*.xm' -o -name '*.h' \) -print0 \
      | xargs -0 wc -l \
      | awk '$2 != "total" { print $1 ":" $2 }'
  )
  echo "$result"
}

scan_hotspot() {
  # $1=pattern，输出 JSON 对象：文件相对路径 -> 计数（仅计数>0）
  local pattern="$1"
  local result="{}"
  while IFS= read -r -d '' fpath; do
    local rel="${fpath#$ROOT_DIR/}"
    local cnt
    cnt="$(count_pattern_in_file "$pattern" "$fpath")"
    if (( cnt > 0 )); then
      result=$(echo "$result" | jq --arg k "$rel" --argjson v "$cnt" '. + {($k): $v}')
    fi
  done < <(
    find "$SRC_DIR" -type f \( -name '*.m' -o -name '*.xm' -o -name '*.h' \) -print0
  )
  echo "$result"
}

generate_baseline() {
  log_info "扫描 $SRC_DIR ..."

  local large_files runtime_lookup service_lookup kvc_lookup
  large_files="$(scan_large_files)"
  runtime_lookup="$(scan_hotspot "$RUNTIME_CLASS_LOOKUP_PATTERN")"
  service_lookup="$(scan_hotspot "$SERVICE_LOOKUP_PATTERN")"
  kvc_lookup="$(scan_hotspot "$KVC_LOOKUP_PATTERN")"

  local timestamp
  timestamp="$(date -u +"%Y-%m-%dT%H:%M:%SZ")"

  jq -n \
    --arg ts "$timestamp" \
    --argjson default_limit "$LARGE_FILE_DEFAULT_LIMIT" \
    --argjson lf "$large_files" \
    --argjson rc "$runtime_lookup" \
    --argjson sl "$service_lookup" \
    --argjson kv "$kvc_lookup" \
    '{
      _meta: { generated_at: $ts, generator: "scripts/generate_baseline.sh" },
      large_file_default_limit: $default_limit,
      large_file_max_lines: $lf,
      runtime_class_lookup: $rc,
      service_lookup: $sl,
      kvc_lookup: $kv
    }' > "$BASELINE_FILE"

  log_info "基线已写入 $BASELINE_FILE"
}

verify_baseline() {
  if [[ ! -f "$BASELINE_FILE" ]]; then
    log_error "baseline.json 不存在，请先运行: scripts/generate_baseline.sh"
    return 1
  fi

  log_info "校验当前计数与基线 ..."
  local improved=0

  # 校验大文件
  while IFS= read -r line; do
    [[ -z "$line" ]] && continue
    local count="${line%%:*}"
    local fpath="${line#*:}"
    local rel="${fpath#$ROOT_DIR/}"
    local baseline_val
    baseline_val="$(jq -r --arg k "$rel" '.large_file_max_lines[$k] // empty' "$BASELINE_FILE")"
    if [[ -n "$baseline_val" ]] && (( count < baseline_val )); then
      log_warn "棘轮: $rel 行数已改善 (当前=$count 基线=$baseline_val)，建议 --update 收紧"
      improved=1
    fi
  done < <(
    find "$SRC_DIR" -type f \( -name '*.m' -o -name '*.xm' -o -name '*.h' \) -print0 \
      | xargs -0 wc -l \
      | awk '$2 != "total" { print $1 ":" $2 }'
  )

  # 校验三类热点
  local category pattern
  for category in runtime_class_lookup service_lookup kvc_lookup; do
    case "$category" in
      runtime_class_lookup) pattern="$RUNTIME_CLASS_LOOKUP_PATTERN" ;;
      service_lookup)       pattern="$SERVICE_LOOKUP_PATTERN" ;;
      kvc_lookup)           pattern="$KVC_LOOKUP_PATTERN" ;;
    esac

    while IFS= read -r -d '' fpath; do
      local rel="${fpath#$ROOT_DIR/}"
      local cnt
      cnt="$(count_pattern_in_file "$pattern" "$fpath")"
      local baseline_val
      baseline_val="$(jq -r --arg cat "$category" --arg k "$rel" '.[$cat][$k] // empty' "$BASELINE_FILE")"
      if [[ -n "$baseline_val" ]] && (( cnt < baseline_val )); then
        log_warn "棘轮: $rel $category 已改善 (当前=$cnt 基线=$baseline_val)，建议 --update 收紧"
        improved=1
      fi
    done < <(
      find "$SRC_DIR" -type f \( -name '*.m' -o -name '*.xm' -o -name '*.h' \) -print0
    )
  done

  if (( improved == 1 )); then
    log_info "检测到改善，建议运行: scripts/generate_baseline.sh --update"
  else
    log_info "基线与当前状态一致，无需更新"
  fi
  return 0
}

main() {
  local mode="generate"

  while (($# > 0)); do
    case "$1" in
      --update)  mode="update";  shift ;;
      --verify)  mode="verify";  shift ;;
      -h|--help) usage; return 0 ;;
      *) log_error "未知参数: $1"; usage >&2; return 1 ;;
    esac
  done

  case "$mode" in
    generate)
      if [[ -f "$BASELINE_FILE" ]]; then
        log_error "baseline.json 已存在。使用 --update 更新，或先删除后重新生成。"
        return 1
      fi
      generate_baseline
      ;;
    update)
      generate_baseline
      ;;
    verify)
      verify_baseline
      ;;
  esac
}

main "$@"
