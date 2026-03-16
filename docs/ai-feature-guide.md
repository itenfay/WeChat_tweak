# AI 新功能开发指南

> 适用范围：`WeChatPluginDev/wapleodtcorexpc`
> 配合阅读：`docs/architecture-governance.md`、`AGENTS.md`

本指南为 AI agent 在 `wapleodtcorexpc` 下新增功能提供模板、规范和验证清单，避免"先写后治"的退化循环。

---

## 1. 文件放置决策表

| 我要做什么 | 应建什么文件 | 归到哪个层 | Makefile 归类 |
|---|---|---|---|
| 拦截 WeChat 方法 | `WCPLXxxHook.xm` | 功能模块层 | `WCPL_COMPILE_FILES` 或 `WCPL_INTERNAL_INCLUDE_FILES`（聚合产物） |
| 封装 WeChat 私有 API | `WCPLXxxAdapter.h/.m` | 适配层 | `WCPL_COMPILE_FILES` |
| 新增配置项 | `WCPLXxxConfig.h/.m` | 基础设施层 | `WCPL_COMPILE_FILES` |
| 纯逻辑 / 计算函数 | `WCPLXxxHelpers.h/.m` 或 `WCPLXxxHelpers.xm` | 基础设施层 | `WCPL_COMPILE_FILES` 或 `WCPL_INTERNAL_INCLUDE_FILES` |
| 有状态的业务服务 | `WCPLXxxService.h/.m` 或 `WCPLXxxService.xm` | 功能模块层 | `WCPL_COMPILE_FILES` |
| UI 控制器 | `WCPLXxxViewController.h/.m` | 功能模块层 | `WCPL_COMPILE_FILES` |

**判断依据：** 如果代码需要 `%hook` 语法，用 `.xm` 扩展名；否则用 `.h/.m`。

---

## 2. 命名规则

### 前缀

- 所有新文件必须使用 `WCPL` 前缀（WeChat PLugin 缩写）
- 遗留文件 `WCHook*` 前缀保持不动，但新文件不再使用

### 后缀约定

| 后缀 | 含义 | 典型示例 |
|---|---|---|
| `Adapter` | 封装 WeChat 私有 API 的适配器 | `WCPLContactAdapter` |
| `Config` | 持久化配置管理 | `WCPLGestureConfig` |
| `Hook` | Logos hook 入口 | `WCPLDoubleTapHook` |
| `Helpers` | 无状态纯函数集合 | `WCPLAlertTextHelpers` |
| `Service` | 有状态业务服务 | `WCPLMarkAllReadService` |
| `ViewController` | UI 控制器 | `WCPLSettingViewController` |

### 其他规则

- 方法与属性注释使用中文
- `_Nullable` / `_Nonnull` 显式标注，头文件用 `NS_ASSUME_NONNULL_BEGIN/END` 包裹
- 暴露给外部的 C 函数使用 `FOUNDATION_EXPORT` 声明

---

## 3. 代码模板

### 3.1 Adapter 模板（基于 WCPLContactAdapter）

**头文件 `src/WCPLXxxAdapter.h`：**

```objc
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Xxx 适配器 — 封装 WeChat 私有 API 访问
/// 所有 runtime/KVC/service 操作集中在此，业务层不直接调用

FOUNDATION_EXPORT NSString * _Nullable WCPLXxxAdapterGetValue(id _Nullable target);

NS_ASSUME_NONNULL_END
```

**实现文件 `src/WCPLXxxAdapter.m`：**

```objc
#import "WCPLXxxAdapter.h"
#import "WCPLLogger.h"
#import <objc/message.h>

NSString * _Nullable WCPLXxxAdapterGetValue(id _Nullable target) {
    if (!target) return nil;

    // 尝试 1：直接属性访问
    @try {
        if ([target respondsToSelector:@selector(someProperty)]) {
            NSString *val = ((NSString *(*)(id, SEL))objc_msgSend)(target, @selector(someProperty));
            if ([val isKindOfClass:[NSString class]] && val.length > 0) {
                return val;
            }
        }
    } @catch (NSException *e) {
        WCPLLogWarn(@"WCPLXxxAdapter someProperty 异常: %@", e);
    }

    // 尝试 2：KVC 回退
    @try {
        NSString *val = [target valueForKey:@"someProperty"];
        if ([val isKindOfClass:[NSString class]] && val.length > 0) {
            return val;
        }
    } @catch (NSException *e) {
        WCPLLogWarn(@"WCPLXxxAdapter KVC 回退异常: %@", e);
    }

    return nil;
}
```

**要点：** `FOUNDATION_EXPORT` + `_Nullable` + triple fallback + `@try-@catch` 保护。

---

### 3.2 Config 模板（基于 WCPLGestureConfig）

**头文件 `src/WCPLXxxConfig.h`：**

```objc
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLXxxConfig : NSObject

/// 单例入口
+ (instancetype)sharedConfig;
+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults;
- (instancetype)initWithDefaults:(NSUserDefaults *)defaults;

/// 配置属性
@property (nonatomic, assign) BOOL featureEnabled;
@property (nonatomic, assign) NSInteger someThreshold;

NS_ASSUME_NONNULL_END

@end
```

**实现文件 `src/WCPLXxxConfig.m`：**

```objc
#import "WCPLXxxConfig.h"

static NSString *const kFeatureEnabled   = @"WCPLXxx_featureEnabled";
static NSString *const kSomeThreshold    = @"WCPLXxx_someThreshold";

@implementation WCPLXxxConfig {
    NSUserDefaults *_defaults;
}

+ (instancetype)sharedConfig {
    static WCPLXxxConfig *instance;
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

    // 读取或初始化默认值
    NSNumber *enabled = [defaults objectForKey:kFeatureEnabled];
    _featureEnabled = enabled ? enabled.boolValue : YES;

    NSNumber *threshold = [defaults objectForKey:kSomeThreshold];
    _someThreshold = threshold ? threshold.integerValue : 10;
    // 归一化
    if (_someThreshold < 1)  _someThreshold = 1;
    if (_someThreshold > 100) _someThreshold = 100;

    return self;
}

- (void)setFeatureEnabled:(BOOL)featureEnabled {
    _featureEnabled = featureEnabled;
    [_defaults setBool:featureEnabled forKey:kFeatureEnabled];
}

- (void)setSomeThreshold:(NSInteger)someThreshold {
    if (someThreshold < 1)  someThreshold = 1;
    if (someThreshold > 100) someThreshold = 100;
    _someThreshold = someThreshold;
    [_defaults setInteger:someThreshold forKey:kSomeThreshold];
}

@end
```

**要点：** `dispatch_once` 单例 + `initWithDefaults` + 归一化 + setter 同步存储。

---

### 3.3 Hook 薄壳模板（基于 WCPLDoubleTapHook）

**文件 `src/WCPLXxxHook.xm`：**

```objc
#import "WCPLConfigCenter.h"
#import "WCPLLogger.h"
#import "WCPLXxxHelpers.h"  // 复杂逻辑在 helpers 中

// --- Hook 薄壳：只做拦截 + 条件分发，不堆业务逻辑 ---

%hook SomeWeChatClass

- (void)someMethod {
    if (![WCPLConfigCenter shared].xxx.featureEnabled) {
        %orig;
        return;
    }

    WCPLLogDebug(@"WCPLXxxHook: someMethod 拦截");

    // 复杂逻辑委托给 helper
    BOOL handled = WCPLXxxHandleSomeAction(self);
    if (!handled) {
        %orig;
    }
}

%end
```

**要点：** Hook 只做 glue 和 dispatch，复杂逻辑下沉到 helpers/service/adapter。

---

### 3.4 Service 模板（基于 WCPLMarkAllReadService）

**文件 `src/WCPLXxxService.xm`：**

```objc
#import "WCPLLogger.h"
#import "WCPLServiceCenter.h"

// --- 并发防护 ---
static BOOL gRunning = NO;

static BOOL WCPLXxxServiceExecute(NSString * _Nullable __autoreleasing * _Nullable outFailText) {
    if (gRunning) {
        WCPLLogWarn(@"WCPLXxxService: 重入，跳过");
        if (outFailText) *outFailText = @"操作正在执行中";
        return NO;
    }

    gRunning = YES;
    BOOL success = NO;

    @try {
        // 1. 保存原始状态
        // BOOL originalState = [someObj isEnabled];

        // 2. 执行业务操作
        // ...
        success = YES;

    } @catch (NSException *e) {
        WCPLLogError(@"WCPLXxxService 异常: %@", e);
        if (outFailText) *outFailText = [NSString stringWithFormat:@"操作异常: %@", e.reason];
    } @finally {
        // 3. 恢复原始状态（无论成功失败）
        // [someObj setEnabled:originalState];
        gRunning = NO;
    }

    return success;
}
```

**要点：** `static BOOL gRunning` 防重入 + `@try-@finally` 保证状态恢复 + 错误信息外传。

---

## 4. 禁止模式速查表

| 禁止做什么 | 应该怎么做 |
|---|---|
| 在 Hook 文件里直接写 `objc_getClass(...)` | 在 Adapter 中封装，Hook 调用 Adapter |
| 在 Hook 文件里直接写 `WCPLGetService(...)` | 通过 `WCPLServiceCenterAdapter` 访问 |
| 在 Hook 文件里直接写 `valueForKey:` / `setValue:forKey:` | 在 Adapter 中封装 KVC 访问 |
| 在 Hook 文件里堆大段业务判断 / 状态机 | 下沉到 Helper / Service |
| 在 Hook 文件里拼装复杂 UI | 下沉到 ViewController / Helper |
| 空 `@catch {}` 块（吞掉异常） | 至少 `WCPLLogWarn` 记录异常 |
| 手动编辑 `WCPLMessageHook.xm` / `WCPLGestureHook.xm` | 编辑 include-only 模块，运行生成脚本 |
| 恢复 `legacy/Tweak.m` 到编译主链 | 在 `src/Tweak.xm` 或新 Hook 文件中实现 |
| 新文件不注册到 Makefile | 必须归类到 `WCPL_COMPILE_FILES` 或 `WCPL_BLOCKED_FILES` |
| 静默 fallback / mock 成功 / 吞错逻辑 | 失败显式暴露，便于调试 |

---

## 5. Makefile 注册清单

新增文件后必须完成以下 4 步：

1. **添加到 `WCPL_COMPILE_FILES`**（独立编译文件）或 **`WCPL_INTERNAL_INCLUDE_FILES`**（聚合 include-only 文件）
2. **确认 source drift 检查通过**：`make source-drift-check` 或运行 `repo_guard.sh`
3. **如果是 include-only 模块**，编辑对应生成脚本注册 include 路径：
   - 消息相关 → `scripts/generate_wcpl_message_hook.sh`
   - 手势相关 → `scripts/generate_wcpl_gesture_hook.sh`
4. **重新生成 Hook 产物**（如果涉及 include-only 模块）

---

## 6. 验证命令清单

完成功能开发后，按以下顺序运行：

```bash
cd WeChatPluginDev/wapleodtcorexpc

# 1. 如果改了 include-only 模块，先重新生成
./scripts/generate_wcpl_message_hook.sh
./scripts/generate_wcpl_gesture_hook.sh

# 2. 如果减少了技术债务，收紧基线
./scripts/generate_baseline.sh --update

# 3. 运行仓库门禁（包含生成一致性、基线棘轮、可维护性检查、跨平台测试）
./scripts/repo_guard.sh

# 4. 如果涉及构建链 / 白名单 / 核心入口，还需运行
./scripts/local_gate.sh --strict-toolchain --skip-tests
```

---

## 7. 脚手架工具

使用 `scripts/new_feature_scaffold.sh` 快速生成符合规范的模板文件：

```bash
# 生成基本功能文件
./scripts/new_feature_scaffold.sh MyFeature

# 带适配器
./scripts/new_feature_scaffold.sh MyFeature --with-adapter

# 带 Hook 入口
./scripts/new_feature_scaffold.sh MyFeature --with-hook

# 带配置管理
./scripts/new_feature_scaffold.sh MyFeature --with-config

# 组合使用
./scripts/new_feature_scaffold.sh MyFeature --with-adapter --with-hook --with-config
```

生成的文件会放置在 `src/` 下，但**不会自动修改 Makefile**（防误操作）。脚本会打印需要在 Makefile 中添加的注册提示。
