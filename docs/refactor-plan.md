# WeChat_tweak 重构方案

> 生成日期：2026-03-14
> 适用范围：`WeChatPluginDev/wapleodtcorexpc`
> 方案类型：增量重构，不包含功能扩张

## 1. 目标与边界

### 1.1 重构目标

1. 降低核心热点文件的修改风险，优先建立可回归的安全网。
2. 将 Hook、业务逻辑、配置持久化、WeChat 运行时适配逐步解耦。
3. 在不改变现有功能对外行为的前提下，降低单文件复杂度和跨模块扇出。
4. 保持当前构建链路、热更新链路、显式编译白名单不破坏。

### 1.2 非目标

1. 不做“大一统新架构”重写。
2. 不先做全局命名重命名、代码风格清洗、目录大搬迁。
3. 不先追求彻底移除所有单例；先建立可注入入口，再逐步替换。
4. 不先抽象整个 WeChat 私有 API；只抽当前重构目标真正需要的适配面。

## 2. 当前状态证据

### 2.1 已确认的结构事实

1. 维护性分析报告将项目综合可维护性评为 `5.9/10`，核心短板是测试、错误处理、耦合和超大文件。[`docs/maintainability-analysis.md#L159`](/root/WeChat_tweak/docs/maintainability-analysis.md#L159) [`docs/maintainability-analysis.md#L162`](/root/WeChat_tweak/docs/maintainability-analysis.md#L162) [`docs/maintainability-analysis.md#L979`](/root/WeChat_tweak/docs/maintainability-analysis.md#L979)
2. 当前构建使用显式编译白名单 `WCPL_COMPILE_FILES`，同时把若干 `.xm` 片段列为“仅内部 include 文件”，说明工程已经依赖生成式聚合，而不是每个文件都直接参与编译。[`WeChatPluginDev/wapleodtcorexpc/Makefile`](/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/Makefile)
3. 关键热点文件体量如下：
   - `WCPLMessageSearchCore.xm`: 4433 行
   - `WCPLRedEnvelopHook.xm`: 2791 行
   - `WCPLSettingViewController.m`: 1698 行
   - `WCPLLogger.m`: 509 行
4. `WCPLConfigCenter` 只是一个单例聚合器，本身直接持有多个 `sharedConfig` 子配置，没有注入点。[`WCPLConfigCenter.m`](/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/src/WCPLConfigCenter.m)
5. `WeChatRedEnvelop.h` 直接聚合 60+ 个 WeChat 头文件，是明显的胖头文件入口。[`WeChatRedEnvelop.h`](/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/src/WeChatRedEnvelop.h)
6. `WCPLHookGovernance.h` 已经给出统一 Hook 决策日志接口，这是后续拆分 Hook 文件时必须保留的治理边界。[`WCPLHookGovernance.h`](/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/src/WCPLHookGovernance.h)

### 2.2 已确认的耦合热点

1. 直接 `#import "WCPLLogger.h"` 的源文件有 28 个。
2. 直接 `#import "WCPLConfigCenter.h"` 的源文件有 18 个。
3. 直接 `#import "WeChatRedEnvelop.h"` 的源文件有 18 个。
4. 全仓库共有 1100 个 `@catch`，其中 63 个是显式空块；大量其余 `@catch` 也只是吞异常或只保留局部日志。

### 2.3 已确认的测试基线

1. 当前可见测试入口主要是：
   - `tests/WCPLUnitTests.m`
   - `tests/cross_platform/run_cross_platform_tests.py`
2. 已执行 `./scripts/run_unit_tests.sh --cross-platform`，结果为通过；说明纯函数、参数队列、配置清洗这类逻辑已经具备最小可回归入口。[`WeChatPluginDev/wapleodtcorexpc/scripts/run_unit_tests.sh`](/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/scripts/run_unit_tests.sh)

## 3. 重构总原则

1. 先稳边界，再拆文件。没有测试和诊断兜底，拆大文件只会放大回归面。
2. 先抽“接缝”，不先换“骨架”。优先引入协议、适配器、协调器；不先移除现有共享入口。
3. 生成式文件先改生成边界，不直接手工肢解聚合产物。
4. 每个阶段只解决一类主要问题：测试、配置、UI、红包、搜索、API 适配，不混做。
5. 每个阶段结束必须保持：
   - `make` 通过
   - 现有测试通过
   - 无新增 blocked file 误编译
   - Hook 入口顺序不漂移

## 4. 目标模块边界

### 4.1 目标分层

```text
Hook Entry
  只保留 %hook / %group / %ctor / 生命周期接入

Feature Handlers
  红包 / 搜索 / 设置 / 防撤回 / 语音转发等功能逻辑

Application Services
  配置读取、联系人解析、消息发送、诊断日志、错误上报

WeChat Adapters
  对 WeChat 私有类、selector、KVC、objc_msgSend 的薄封装

Infrastructure
  Logger / CrashReporter / DefaultsStore / ThreadSafe containers
```

### 4.2 建议模块

1. `WCPLConfig`：配置模型 + 存储访问协议。
2. `WCPLDiagnostics`：日志、异常记录、诊断事件。
3. `WCPLWeChatAdapters`：按消息、联系人、UI、搜索四个域拆开。
4. `WCPLFeatureRedEnvelop`：红包入口、查询跟踪、自动回复、通知、详情摘要。
5. `WCPLFeatureMessageSearch`：按钮注入、搜索桥接、UI 清理、运行态管理。
6. `WCPLFeatureSettings`：页面协调、section builder、picker/image flow。

## 5. 分阶段执行方案

### Phase 0：稳定面建设

**目标**

先建立最低限度的安全网，避免“边拆边失真”。

**改动范围**

1. 为已有可纯化逻辑补测试，而不是先碰 Hook UI：
   - `WCPLConfigSanitizer`
   - `WCPLSharedConfigHelpers`
   - `WCPLRedEnvelopConfig`
   - `WCPLIgnoreConfig`
   - 红包参数映射/队列
2. 统一异常记录入口，至少在本阶段涉及的文件中禁止空 `@catch`。
3. 为后续重构建立基线指标脚本：
   - 热点文件行数
   - `WeChatRedEnvelop.h` 导入数量
   - `WCPLLogger.h` 导入数量

**建议新增接缝**

1. `WCPLRecordException(NSString *scope, NSException *exception)` 或同等 helper。
2. `WCPLRefactorMetrics` 脚本，输出热点尺寸与导入数。

**验收标准**

1. 现有 cross-platform suite 继续通过。
2. 新增配置/纯函数测试通过。
3. 触达文件内不再出现空 `@catch`。

### Phase 1：配置层去硬耦合

**目标**

把配置单例从“直接绑定 `NSUserDefaults`”改为“可注入存储后端”，但先不移除现有 `sharedConfig` API。

**现状依据**

`WCPLConfigCenter` 当前只是多个 `sharedConfig` 的聚合容器；`WCPLRedEnvelopConfig`、`WCPLGestureConfig`、`WCPLIgnoreConfig` 都在 `init` 和 setter 中直接访问 `NSUserDefaults`。[`WCPLConfigCenter.m`](/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/src/WCPLConfigCenter.m) [`WCPLRedEnvelopConfig.m`](/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopConfig.m) [`WCPLGestureConfig.m`](/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureConfig.m) [`WCPLIgnoreConfig.m`](/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/src/WCPLIgnoreConfig.m)

**改动方式**

1. 引入 `WCPLDefaultsStore` 协议。
2. 提供 `WCPLUserDefaultsStore` 默认实现。
3. 每个 Config 增加 `-initWithStore:`。
4. 保留 `+sharedConfig`，但改为内部调用默认 store。
5. `WCPLConfigCenter` 增加 `-initWithStore:` 或 `-initWithConfigFactory:`。

**预期产物**

1. `WCPLDefaultsStore.h/.m`
2. `WCPLUserDefaultsStore.h/.m`
3. 调整后的 `WCPL*Config` 与 `WCPLConfigCenter`

**收益**

1. 配置类可单测。
2. 设置页和业务逻辑能逐步摆脱对单例初始化时机的硬依赖。
3. 后续可在测试中使用内存 store，而不是写真实 `NSUserDefaults`。

**验收标准**

1. `sharedConfig` 调用点无需大规模修改。
2. 新增配置测试覆盖默认值、归一化和持久化行为。

### Phase 2：设置页拆分

**目标**

把 `WCPLSettingViewController.m` 从“页面 + section 构造 + picker 流程 + 配置写入”四种职责中拆开。

**现状依据**

`WCPLSettingViewController.m` 1698 行，既负责页面生命周期，又直接读取/写入 `WCPLConfigCenter`，还承载白名单选择、图片选择、动作 picker 等流程。[`WCPLSettingViewController.m`](/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/src/WCPLSettingViewController.m)

**建议边界**

1. `WCPLSettingsPageCoordinator`
   - 只负责页面类型、标题、section 装配顺序。
2. `WCPLSettingsRedEnvelopSectionBuilder`
3. `WCPLSettingsIgnoreSectionBuilder`
4. `WCPLSettingsGestureSectionBuilder`
5. `WCPLSettingsOtherSectionBuilder`
6. `WCPLRepeatCustomImageCoordinator`
   - 处理图片选择、重置、路径更新。

**迁移策略**

1. 第一轮只搬 section 构造方法，不改 selector 名称。
2. 第二轮再把 picker 与图片流程移到 coordinator。
3. 最后让 ViewController 只保留：
   - 生命周期
   - `reloadTableData`
   - 页面间跳转
   - builder/coordinator 组合

**不要先做**

不要先把整个设置系统重写成全新的 DSL 或 schema 驱动配置页。当前代码已经深度依赖 WeChat 自带 `WCTableViewManager` 与 selector 绑定，先做职责切分比重做 UI 框架风险低得多。

**验收标准**

1. `WCPLSettingViewController.m` 降到协调器级别。
2. 每个 section builder 只关心一个功能域。
3. 配置写入入口可在 builder 层单独测试或伪造。

### Phase 3：红包功能拆分

**目标**

把 `WCPLRedEnvelopHook.xm` 从“Hook 入口 + 请求跟踪 + 参数解析 + 联系人解析 + 自动回复 + 通知 + UI 汇总”拆成薄 Hook + 服务模块。

**现状依据**

该文件 2791 行，导入了 `WeChatRedEnvelop.h`、多种 manager/config/service，并含大量静态函数、多个 `%hook`、请求跟踪队列和 UI 逻辑。[`WCPLRedEnvelopHook.xm`](/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopHook.xm)

**建议拆分**

1. `WCPLRedEnvelopLogicHooks.xm`
   - `WCRedEnvelopesLogicMgr` 相关 `%hook`
2. `WCPLRedEnvelopNetworkHooks.xm`
   - `WCRedEnvelopesNetworkHelper` 相关 `%hook`
3. `WCPLRedEnvelopMessageEntryHooks.xm`
   - `CMessageMgr` 相关红包入口识别
4. `WCPLRedEnvelopRequestTracker.m`
   - 查询 pending/finished、hedge request 逻辑
5. `WCPLRedEnvelopSessionResolver.m`
   - session、群名、联系人显示名解析
6. `WCPLRedEnvelopAutoReplyService.m`
7. `WCPLRedEnvelopNotifyService.m`
8. `WCPLRedEnvelopSummaryPresenter.m`

**关键约束**

1. 保留 `WCPLHookGovernance` 调用。
2. Hook 方法中只做：
   - 参数采样
   - 调用 `%orig`
   - 委托 handler/service
3. 避免先改红包时序策略；第一阶段只做结构拆分。

**验收标准**

1. Hook 文件中静态工具函数显著减少。
2. 红包查询、打开、通知、自回复的逻辑有明确服务归属。
3. 红包相关纯逻辑可以增加单测。

### Phase 4：搜索功能拆分

**目标**

把 `WCPLMessageSearchCore.xm` 从巨型“状态机 + UI 修复 + 搜索桥接 + 诊断探针”文件，拆成可维护的功能片段。

**现状依据**

1. 文件顶部已经说明它是由 `CoreA/B/C` 合并而来，但当前产物依然达到 4433 行。
2. 文件内同时包含：
   - 导航按钮注入
   - view tree 搜索残留清理
   - 搜索 helper 业务类型纠偏
   - bridge 到聊天信息页
   - 大量触控与 UI 诊断日志

**拆分策略**

不要直接手改最终聚合产物。应该改“生成前模块”或者把公共 helper 提取到常规 `.m` 文件，再由聚合 Hook 调用。

**建议边界**

1. `WCPLMessageSearchButtonInjector.m`
2. `WCPLMessageSearchOverlayCleaner.m`
3. `WCPLMessageSearchBridgeCoordinator.m`
4. `WCPLMessageSearchRuntimeState.m`
   - associated object key 与 epoch/retry 状态
5. `WCPLMessageSearchDiagnostics.m`

**Hook 文件目标形态**

1. `%hook` 保留在 `WCPLMessageSearchCore.xm`
2. 大部分静态函数迁出
3. Hook 方法只保留“判断 + 委托 + 关键日志”

**为什么不应最先拆它**

搜索模块是当前最复杂、最依赖 WeChat UI 运行态的路径；在没有 Phase 0 的诊断和回归基线之前，优先拆它是高风险策略。

**验收标准**

1. 聚合文件只作为 Hook 编排入口。
2. runtime state 与 UI cleanup 有独立实现文件。
3. 复杂诊断逻辑不再和业务跳转逻辑混在同一段静态函数集合里。

### Phase 5：WeChat API 适配层与头文件收敛

**目标**

减少 `WeChatRedEnvelop.h` 作为全局入口头文件的传播范围。

**现状依据**

当前 `WeChatRedEnvelop.h` 聚合大量类定义，且至少有 18 个源文件直接导入它，导致 UI、业务、Hook、picker 代码都被动耦合到一整个 WeChat 私有头集合。

**建议拆分**

1. `WCPLWeChatMessageAPI.h`
2. `WCPLWeChatContactAPI.h`
3. `WCPLWeChatUIAPI.h`
4. `WCPLWeChatRedEnvelopAPI.h`

**实施方式**

1. 保留 `WeChatRedEnvelop.h` 作为兼容入口。
2. 新代码和被重构文件只导入更窄的域头。
3. 对高风险 selector/KVC 访问，建立薄适配器函数：
   - `WCPLWeChatContactAdapter`
   - `WCPLWeChatSearchAdapter`
   - `WCPLWeChatMessageSenderAdapter`

**不要先做**

不要一开始就试图封装所有 WeChat 私有类。先为红包、搜索、设置三条主线服务，避免做成一个体量很大但缺少真实调用收敛的“抽象仓库”。

**验收标准**

1. `WeChatRedEnvelop.h` 的直接导入数量明显下降。
2. 业务文件对 `objc_msgSend`、KVC 的直接调用减少。

### Phase 6：基础设施抽象与单例降级

**目标**

在前几阶段形成稳定接缝后，再降低 `WCPLLogger`、`WCPLCrashReporter`、`WCPLServiceCenter` 这类全局入口的直接扇出。

**建议内容**

1. `WCPLLoggerProtocol`
2. `WCPLErrorReporterProtocol`
3. `WCPLServiceResolving`
4. 新模块通过构造参数或 context 对象拿依赖，而不是直接 `shared*`

**原因**

如果在主链路尚未拆分前先做全局依赖注入，工程改动面会非常大，且收益不如前几个阶段直接。

## 6. 实施顺序与里程碑

### 6.1 推荐顺序

1. Phase 0：测试与诊断基线
2. Phase 1：配置注入接缝
3. Phase 2：设置页拆分
4. Phase 3：红包模块拆分
5. Phase 4：搜索模块拆分
6. Phase 5：WeChat API 适配层
7. Phase 6：基础设施协议化

### 6.2 每阶段提交策略

1. 一个阶段最多覆盖一个功能域。
2. 每个阶段拆成 2 到 4 个小 PR：
   - 接缝引入
   - 调用点迁移
   - 清理旧实现
   - 补测试
3. 不把“功能修复”和“结构重组”混在同一提交里。

## 7. 不应优先做的事情

1. 不应先重写全部 Hook 文件。
2. 不应先全面替换 18 个单例。
3. 不应先删除 `Tweak.m`、`.bak`、历史文件；这些是清理收益，不是稳定性收益。
4. 不应先做全项目头文件瘦身；应该跟随红包/搜索/设置三条主线渐进收敛。
5. 不应在没有生成链路调整的前提下，直接手工拆分聚合型 `.xm` 产物。

## 8. 成功判据

### 8.1 结构指标

1. `WCPLSettingViewController.m` 降到协调器级别。
2. `WCPLRedEnvelopHook.xm` 只剩 Hook 编排与少量入口判断。
3. `WCPLMessageSearchCore.xm` 从“全逻辑载体”降为“聚合 Hook 壳”。
4. `WeChatRedEnvelop.h` 直接导入数明显下降。

### 8.2 质量指标

1. 核心配置与纯函数测试数量增长。
2. 重构触达文件内不存在空 `@catch`。
3. 红包、搜索、设置三个热点功能至少各自拥有一个独立回归入口。

### 8.3 过程指标

1. `make` 持续通过。
2. `./scripts/run_unit_tests.sh --cross-platform` 持续通过。
3. 编译白名单和 blocked file 机制持续有效。

## 9. 一句话策略

先把“测试和诊断接缝”补上，再把“配置、设置页、红包、搜索”按功能域逐个拆开，最后才做 WeChat API 适配层和基础设施协议化；这条路径的回归风险最低，且对当前代码库的真实瓶颈命中率最高。
