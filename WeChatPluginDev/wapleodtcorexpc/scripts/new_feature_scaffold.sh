#!/usr/bin/env bash
# 新功能脚手架 — 生成符合 wapleodtcorexpc 规范的模板文件
# 用法: scripts/new_feature_scaffold.sh <FeatureName> [--with-adapter] [--with-hook] [--with-config]
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
SRC_DIR="$ROOT_DIR/src"

log_info()  { echo "[scaffold][info] $1"; }
log_error() { echo "[scaffold][error] $1" >&2; }
log_warn()  { echo "[scaffold][warn] $1"; }

usage() {
  cat <<'EOF'
用法: scripts/new_feature_scaffold.sh <FeatureName> [选项]

参数:
  FeatureName       功能名称（不含 WCPL 前缀，如 MyFeature）

选项:
  --with-adapter    生成 Adapter 模板（封装 WeChat 私有 API）
  --with-hook       生成 Hook 薄壳模板
  --with-config     生成 Config 配置管理模板
  -h|--help         显示此帮助

示例:
  ./scripts/new_feature_scaffold.sh VideoForward --with-adapter --with-hook --with-config
EOF
}

safe_write() {
  local path="$1" content="$2"
  if [[ -f "$path" ]]; then
    log_warn "已存在，跳过: $path"
    return 1
  fi
  echo "$content" > "$path"
  log_info "已生成: $path"
  return 0
}

# --- 模板生成函数 ---

generate_helpers_header() {
  local name="$1"
  safe_write "$SRC_DIR/WCPL${name}Helpers.h" "\
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// WCPL${name}Helpers — ${name} 功能的纯函数集合
/// 无状态、无副作用，便于单元测试

FOUNDATION_EXPORT BOOL WCPL${name}IsValid(id _Nullable target);

NS_ASSUME_NONNULL_END"
}

generate_helpers_impl() {
  local name="$1"
  safe_write "$SRC_DIR/WCPL${name}Helpers.m" "\
#import \"WCPL${name}Helpers.h\"
#import \"WCPLLogger.h\"

BOOL WCPL${name}IsValid(id _Nullable target) {
    if (!target) return NO;

    // TODO: 实现验证逻辑
    return YES;
}"
}

generate_adapter_header() {
  local name="$1"
  safe_write "$SRC_DIR/WCPL${name}Adapter.h" "\
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// WCPL${name}Adapter — 封装 ${name} 相关的 WeChat 私有 API
/// 所有 runtime/KVC/service 操作集中在此，业务层不直接调用

FOUNDATION_EXPORT id _Nullable WCPL${name}AdapterGetTarget(id _Nullable source);

NS_ASSUME_NONNULL_END"
}

generate_adapter_impl() {
  local name="$1"
  safe_write "$SRC_DIR/WCPL${name}Adapter.m" "\
#import \"WCPL${name}Adapter.h\"
#import \"WCPLLogger.h\"
#import <objc/message.h>

id _Nullable WCPL${name}AdapterGetTarget(id _Nullable source) {
    if (!source) return nil;

    // 尝试 1：直接属性访问
    @try {
        if ([source respondsToSelector:@selector(target)]) {
            id val = ((id (*)(id, SEL))objc_msgSend)(source, @selector(target));
            if (val) return val;
        }
    } @catch (NSException *e) {
        WCPLLogWarn(@\"WCPL${name}Adapter target 属性异常: %@\", e);
    }

    // 尝试 2：KVC 回退
    @try {
        id val = [source valueForKey:@\"target\"];
        if (val) return val;
    } @catch (NSException *e) {
        WCPLLogWarn(@\"WCPL${name}Adapter KVC 回退异常: %@\", e);
    }

    return nil;
}"
}

generate_config_header() {
  local name="$1"
  safe_write "$SRC_DIR/WCPL${name}Config.h" "\
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// WCPL${name}Config — ${name} 功能配置管理
@interface WCPL${name}Config : NSObject

+ (instancetype)sharedConfig;
+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults;
- (instancetype)initWithDefaults:(NSUserDefaults *)defaults;

/// 功能总开关
@property (nonatomic, assign) BOOL featureEnabled;

@end

NS_ASSUME_NONNULL_END"
}

generate_config_impl() {
  local name="$1"
  safe_write "$SRC_DIR/WCPL${name}Config.m" "\
#import \"WCPL${name}Config.h\"

static NSString *const kFeatureEnabled = @\"WCPL${name}_featureEnabled\";

@implementation WCPL${name}Config {
    NSUserDefaults *_defaults;
}

+ (instancetype)sharedConfig {
    static WCPL${name}Config *instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[self alloc] initWithDefaults:[NSUserDefaults standardUserDefaults]];
    });
    return instance;
}

+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults {
    return [[self alloc] initWithDefaults:defaults];
}

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults {
    self = [super init];
    if (!self) return nil;
    _defaults = defaults;

    NSNumber *enabled = [defaults objectForKey:kFeatureEnabled];
    _featureEnabled = enabled ? enabled.boolValue : YES;

    return self;
}

- (void)setFeatureEnabled:(BOOL)featureEnabled {
    _featureEnabled = featureEnabled;
    [_defaults setBool:featureEnabled forKey:kFeatureEnabled];
}

@end"
}

generate_hook() {
  local name="$1"
  local has_config="$2"

  local config_import=""
  local config_check=""
  if [[ "$has_config" == "1" ]]; then
    config_import="#import \"WCPL${name}Config.h\""
    config_check="
    if (![WCPL${name}Config sharedConfig].featureEnabled) {
        %orig;
        return;
    }
"
  fi

  safe_write "$SRC_DIR/WCPL${name}Hook.xm" "\
#import \"WCPLLogger.h\"
#import \"WCPL${name}Helpers.h\"
${config_import}

// --- WCPL${name}Hook: 薄壳入口，只做拦截 + 条件分发 ---

%hook SomeWeChatClass

- (void)someMethod {
${config_check}
    WCPLLogDebug(@\"WCPL${name}Hook: someMethod 拦截\");

    // 复杂逻辑委托给 helper
    BOOL handled = WCPL${name}IsValid(self);
    if (!handled) {
        %orig;
        return;
    }

    // TODO: 实现功能逻辑
    %orig;
}

%end"
}

print_makefile_hint() {
  local files=("$@")
  echo ""
  echo "════════════════════════════════════════════════════════════════"
  echo "  Makefile 注册提示（请手动添加以下文件到对应列表）"
  echo "════════════════════════════════════════════════════════════════"
  echo ""
  echo "在 Makefile 的 WCPL_COMPILE_FILES 中添加："
  for f in "${files[@]}"; do
    echo "  $f \\"
  done
  echo ""
  echo "如果 Hook 文件是 include-only 模块（被聚合产物 include），"
  echo "则应添加到 WCPL_INTERNAL_INCLUDE_FILES 而非 WCPL_COMPILE_FILES。"
  echo ""
  echo "添加后运行: ./scripts/repo_guard.sh 验证白名单一致性"
  echo "════════════════════════════════════════════════════════════════"
}

main() {
  if (($# < 1)); then
    usage
    return 1
  fi

  local feature_name=""
  local with_adapter=0
  local with_hook=0
  local with_config=0

  while (($# > 0)); do
    case "$1" in
      --with-adapter) with_adapter=1; shift ;;
      --with-hook)    with_hook=1;    shift ;;
      --with-config)  with_config=1;  shift ;;
      -h|--help)      usage; return 0 ;;
      -*)             log_error "未知选项: $1"; usage >&2; return 1 ;;
      *)
        if [[ -z "$feature_name" ]]; then
          feature_name="$1"
        else
          log_error "多余参数: $1"; usage >&2; return 1
        fi
        shift
        ;;
    esac
  done

  if [[ -z "$feature_name" ]]; then
    log_error "缺少 FeatureName 参数"
    usage >&2
    return 1
  fi

  # 验证命名规则：首字母大写
  if [[ ! "$feature_name" =~ ^[A-Z] ]]; then
    log_error "FeatureName 必须首字母大写（PascalCase），如 MyFeature"
    return 1
  fi

  log_info "功能名称: ${feature_name}"
  log_info "目标目录: ${SRC_DIR}"

  local generated_files=()

  # 总是生成 helpers
  generate_helpers_header "$feature_name" && generated_files+=("src/WCPL${feature_name}Helpers.h")
  generate_helpers_impl "$feature_name"   && generated_files+=("src/WCPL${feature_name}Helpers.m")

  if (( with_adapter == 1 )); then
    generate_adapter_header "$feature_name" && generated_files+=("src/WCPL${feature_name}Adapter.h")
    generate_adapter_impl "$feature_name"   && generated_files+=("src/WCPL${feature_name}Adapter.m")
  fi

  if (( with_config == 1 )); then
    generate_config_header "$feature_name" && generated_files+=("src/WCPL${feature_name}Config.h")
    generate_config_impl "$feature_name"   && generated_files+=("src/WCPL${feature_name}Config.m")
  fi

  if (( with_hook == 1 )); then
    generate_hook "$feature_name" "$with_config" && generated_files+=("src/WCPL${feature_name}Hook.xm")
  fi

  if (( ${#generated_files[@]} > 0 )); then
    print_makefile_hint "${generated_files[@]}"
  else
    log_warn "所有文件已存在，未生成任何新文件"
  fi
}

main "$@"
