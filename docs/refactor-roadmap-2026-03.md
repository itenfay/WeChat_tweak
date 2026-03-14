# WeChat_tweak 项目重构方案

> 日期：2026-03-14
> 依据：`docs/maintainability-analysis.md` + 代码现状抽样 + 现有测试基线

## 1. 目标

- 在不改变现有功能外观和部署方式的前提下，降低回归风险和修改成本。
- 先补“安全网”和“可观测性”，再拆热点文件和耦合点。
- 保持 Theos 构建入口、显式编译白名单、自动生成 Hook 链路不失效。

## 2. 非目标

- 不做功能重写。
- 不在第一阶段移除所有单例。
- 不先动设备侧配置、Choicy、注入策略。
- 不把 Hook 层一次性改成全新架构。

## 3. 基线事实

### 3.1 代码与构建现状

- `Makefile` 采用显式编译白名单，当前主编译文件 72 个，且存在 `WCPL_INTERNAL_INCLUDE_FILES` 这类“只能被聚合、不能直接编译”的内部文件。
- `WCPLMessageSearchCore.xm` 为 4402 行，`WCPLRedEnvelopHook.xm` 为 1147 行，`WCPLSettingViewController.m` 为 772 行。
- `WCPLConfigCenter.h` 直接聚合 9 个 Config 头文件，`WCPLConfigCenter.m` 在初始化时直接绑定各 `sharedConfig`。
- 重构启动基线时，`WeChatRedEnvelop.h` 包含 61 个 `#import`，属于胖头文件。

### 3.2 耦合与错误处理现状

- 直接 `#import "WCPLLogger.h"` 的文件有 28 个。
- 直接引用 `WCPLConfigCenter` 的文件有 28 个。
- 重构启动基线时，直接 `#import "WeChatRedEnvelop.h"` 的文件有 18 个。
- 当前源码中共匹配到 1100 个 `@catch`，其中 63 个是空的 inline `@catch {}`。

### 3.3 测试基线

- 现有测试入口为 `scripts/run_unit_tests.sh`。
- 在当前环境执行 `./scripts/run_unit_tests.sh --cross-platform` 通过，包含 7 个最小回归测试。
- 当前测试更偏纯函数和数据结构，尚未覆盖 Hook 薄壳、设置页组装、错误处理协议、适配层。

## 4. 重构原则

- 先加测试和日志，再移动代码。
- 先抽“稳定边界”，不先追求“漂亮分层”。
- Hook 只负责拦截、组装上下文、派发；业务逻辑下沉到可测试类。
- 保留现有 `shared` 入口，先增加可注入初始化方式，再逐步替换调用方。
- 不新增静默兜底。异常要记录日志，失败要可见。
- 对 `WCPL_INTERNAL_INCLUDE_FILES`，优先采用“内部拆分 + 聚合入口保持不变”的方式，避免早期打乱构建白名单。

## 5. 目标结构

### 5.1 分层目标

1. `Hook Shell`
   - `*Hook.xm`
   - 只做原方法调用策略、上下文提取、委托派发
2. `Feature Service`
   - 红包、消息搜索、手势、忽略、语音转发等可测试服务类
3. `Feature Config`
   - 各 `*Config` 类与配置仓库
4. `Infrastructure`
   - Logger、CrashReporter、ErrorReporter、线程安全容器
5. `WeChat Adapter`
   - 对 WeChat 私有类/服务中心/胖头文件的隔离层
6. `Pure Helpers / Contracts`
   - 纯函数、数据映射、跨平台契约测试

### 5.2 模块边界目标

- `WCPLConfigCenter` 从“全局配置 hub”收敛为“装配入口”，不再承载业务默认值判断。
- `WCPLLogger` 从“全局直接依赖”收敛为协议注入或门面调用。
- `WeChatRedEnvelop.h` 从“全量导入”收敛为按领域拆分的 umbrella headers。
- `WCPLSettingViewController.m` 从“大而全控制器”收敛为页面路由 + section builder + picker coordinator。
- `WCPLRedEnvelopHook.xm` 和 `WCPLMessageSearchCore.xm` 从“大量静态函数堆叠”收敛为 Hook 薄壳 + 服务类/内部 helper shard。

## 6. 分阶段实施

## 阶段 0：建立重构护栏 [已完成]

### 状态

- 已完成（2026-03-14）
- 已落地 `scripts/maintainability_guard.sh`
- 已接入 `scripts/local_gate.sh`
- `build_doctor.sh` 已校验该脚本存在且可执行
- 当前 `./scripts/run_unit_tests.sh --cross-platform` 保持通过

### 目标

- 让后续拆分有回归信号。

### 变更

- 固化当前 cross-platform 测试作为最低门槛。
- 为以下模块补最小契约测试：
  - `WCPLConfigSanitizer`
  - `WCPLSharedConfigHelpers`
  - `WCPLRedEnvelopParamQueue`
  - `WCPLPureHelpers`
- 扩展 `build_doctor.sh` 或新增 `scripts/maintainability_guard.sh`，检查：
  - 空 `@catch {}`
  - 超大文件阈值
  - 新增胖头文件导入

### 验收

- `./scripts/run_unit_tests.sh --cross-platform` 必须持续通过。
- 新 guard 脚本可在本地和 CI 执行。

## 阶段 1：统一错误处理与日志策略 [已完成]

### 状态

- 已完成（2026-03-14）
- 已在 `WCPLLogger.h` 增加统一异常记录接口：`WCPLRecordCaughtException` / `WCPLCatchLog`
- 已清零源码中的 inline 空 `@catch {}`
- 已为高优先模块的静默 `catch` 补齐统一记录
- `maintainability_guard.sh` 已升级为“空 inline catch 必须为 0”

### 目标

- 消除“失败不可见”的状态。

### 变更

- 新增统一错误记录接口，例如：
  - `WCPLErrorReporter.h/.m`
  - 或 `WCPLTryLog.h` 这类只做记录、不做吞错的最小门面
- 分批替换空 `@catch`，优先级按风险排序：
  - `WCPLMessageHook.xm`
  - `WCPLVoiceForwardCore.xm`
  - `WCPLMarkAllReadService.xm`
  - `WCPLMessageSearchHook.xm`
- 约束 `@catch` 中至少记录：
  - 功能名
  - 调用阶段
  - 目标 selector 或对象类型
  - exception 文本

### 验收

- 空 inline `@catch {}` 数量降为 0。
- 新增或修改的 `@catch` 均有日志上下文。

## 阶段 2：配置与基础设施先解耦 [已完成]

### 状态

- 已完成（2026-03-14）
- 9 个 `*Config` 类已新增 `NSUserDefaults` 注入入口，并保留 `sharedConfig` 兼容旧调用。
- `WCPLConfigCenter` 已收敛为可注入 `defaults + components` 的装配入口。
- `WCPLLogger` 已新增 `WCPLLogging` / `WCPLLogSink` 协议边界，并支持 `sharedLogging` / `loggerWithDefaults:`
- `WCPLCrashReporter` 已新增 `defaults + logger` 注入方式，并通过 `WCPLLogSink` 接收告警/错误诊断。
- 已新增 cross-platform 合约测试覆盖配置初始化与基础设施注入边界。
- 当前 `./scripts/maintainability_guard.sh`、`./scripts/run_unit_tests.sh --cross-platform`、`FINALPACKAGE=1 ./scripts/local_gate.sh --strict-toolchain --skip-tests` 保持通过。

### 目标

- 让核心服务可测，而不是立刻移除所有单例。

### 变更

- 为 `WCPLConfigCenter` 引入可注入初始化方式：
  - `-initWithDefaults:configs:`
  - 或工厂方法 `+centerWithDefaults:...`
- 各 `*Config` 类补可注入 `NSUserDefaults` 的初始化方式，保留 `sharedConfig` 兼容旧入口。
- 为 `WCPLLogger` 引入协议边界：
  - `WCPLLogging`
  - `WCPLLogSink`
- 新代码禁止直接依赖 `WCPLLogger` 具体类，优先依赖协议或统一门面。

### 推荐优先文件

- `WCPLConfigCenter.h/.m`
- `WCPLLogger.h/.m`
- `WCPLCrashReporter.h/.m`
- 所有 `*Config.h/.m`

### 验收

- 新增 host/cross-platform 层面的配置初始化测试。
- 新代码中不再新增对 `sharedLogger`/`sharedConfig` 的直接耦合。

## 阶段 3：拆胖头文件和重复类型检查 [已完成]

### 状态

- 已完成（2026-03-14）
- 已新增 `WCPLTypeGuard.h/.m`，收敛字符串 / 数组 / 字典的高频运行时类型判断与转换。
- 已新增 4 个领域 umbrella headers：
  - `WCPLWeChatMessageHeaders.h`
  - `WCPLWeChatContactHeaders.h`
  - `WCPLWeChatUIHeaders.h`
  - `WCPLWeChatServiceHeaders.h`
- 已新增 `WCPLWeChatCompatibilityHeaders.h`，承接 category / protocol 兼容声明，避免联系人 UI 继续被胖头文件绑定。
- `WeChatRedEnvelop.h` 已降级为兼容聚合入口，内部改为转发上述领域头。
- 已将首批低风险文件迁离胖头文件：
  - `WCPLContactLookup.m`
  - `WCPLPickerDataProvider.m`
  - `WCHookTableViewFactory.m`
- 已将第二批 UI / 联系人文件迁离胖头文件：
  - `WCPLBaseViewController.m`
  - `WCPLLogSettingsViewController.m`
  - `WCPLUnifiedMultiSelectViewController.m`
- 已将第三批中低风险文件迁离胖头文件：
  - `WCPLReceiveRedEnvelopOperation.m`
  - `WCPLIgnoreUIHook.xm`
  - `WCPLQuitMonitorHook.xm`
- 已将第四批手势 / 防撤回 / 设置 / 抖音相关文件迁离胖头文件：
  - `WCPLRevokeHook.xm`
  - `WCPLDouyinParserHook.xm`
  - `WCPLGesturePureHelpers.xm`
  - `WCPLGestureHookCommon.xm`
  - `WCPLSettingViewController.m`
- 已将最后一批消息 / 红包入口迁离胖头文件：
  - `WCPLMessageHookCommon.xm`
  - `WCPLRedEnvelopHook.xm`
  - `WCPLMessageHook.xm` 已通过 `scripts/generate_wcpl_message_hook.sh` 同步刷新
- 已清理遗留归档文件 `legacy/Tweak.m` 中对 `WeChatRedEnvelop.h` 的直接导入，源码口径与 guard 口径一致。
- `WeChatRedEnvelop.h` 的直接导入文件数已从基线 18 降到 0。
- 已补 host-side 与 cross-platform `WCPLTypeGuard` 合约测试，并继续沿用现有 cross-platform gate / maintainability guard 做回归检查。
- `scripts/maintainability_guard.sh` 已从旧 allowlist 模式收紧为“`WeChatRedEnvelop.h` 直接导入必须保持 0”。
- 当前验证结果：
  - `./scripts/maintainability_guard.sh` 通过（fat-header direct imports remain at zero）
  - `./scripts/run_unit_tests.sh --cross-platform` 通过
  - `./scripts/local_gate.sh --strict-toolchain --skip-tests` 通过
  - 最新本地打包产物：`packages/com.aple.wechatpepper_1.8.36-81+debug_iphoneos-arm64.deb`

### 目标

- 降低编译耦合面和重复样板代码。

### 变更

- 新增 `WCPLTypeGuard.h/.m`，统一以下操作：
  - `isValidString:`
  - `isValidArray:`
  - `isValidDictionary:`
  - `arrayOfStringsOrNil:` 这类高频转换
- 拆分 `WeChatRedEnvelop.h` 为领域头：
  - `WCPLWeChatMessageHeaders.h`
  - `WCPLWeChatContactHeaders.h`
  - `WCPLWeChatUIHeaders.h`
  - `WCPLWeChatServiceHeaders.h`
- 保留一个兼容入口头，避免一次性改完所有调用方。

### 推荐顺序

1. 先引入新头文件，不删旧头。
2. 先改纯业务/工具类导入。
3. 最后改 Hook 文件导入。

### 验收

- `WeChatRedEnvelop.h` 的直接导入方降到 0，并由 guard 持续锁定。
- 重复类型检查逻辑开始收敛到 `WCPLTypeGuard`。

## 阶段 4：先拆设置页，再拆红包，再拆消息搜索 [已完成]

### 原则

- 从“副作用较低、UI 可见、验证成本较低”的文件开始。
- 不先拆 `WCPLMessageSearchCore.xm`，因为它对导航态、搜索残留清理和桥接流程耦合最深。

### 4.1 `WCPLSettingViewController.m`

#### 当前进展

- 已新增 `WCPLSettingsPageContext.h/.m`，承接设置页页面类型与标题映射。
- 已新增 `WCPLSettingsPageRouter.h/.m`，承接顶层入口 section 与子页 push / 调试页路由。
- 已新增 `WCPLSettingsPickerCoordinator.h/.m`，承接统一多选控制器、复读图片 picker / alert / action sheet、通用动作选择器，以及延迟抢包 / 抢包通知 / 群聊范围 / 退群监控范围 / 复读按钮大小 / 手势灵敏度等弹窗协调逻辑。
- 已新增 `WCPLSettingsSelectionCoordinator.h/.m`，承接红包白名单 / 黑名单、消息屏蔽好友 / 群聊、退群监控白名单，以及“重置所有屏蔽”确认流程等统一选择器协调逻辑。
- 已新增 `WCPLSettingsSelectionStore.h/.m`，承接统一选择器相关的名单读取、用户 / 群聊筛选与持久化更新逻辑。
- 已新增 `WCPLSettingsSectionFactory.h/.m`，承接 `Other` / `MessageIgnore` / `GroupMonitor` / `LongPressPanel` / `Push2Chat` / `SwipeQuote` / `RepeatBubble` / `RedEnvelop basic` / `RedEnvelop advance` 等纯 section 组装。
- `WCPLSettingViewController.m` 已去除页面标题映射、顶层入口 section 构建、多组 `open*SettingsEntry` 路由方法、统一选择器 / 通用 picker 协调逻辑，以及多组纯 section 组装逻辑，文件行数从 1698 降到 772，已进入阶段目标中的 800 行以内。
- 当前验证结果：
  - `./scripts/maintainability_guard.sh` 通过
  - `./scripts/run_unit_tests.sh --cross-platform` 通过
  - `./scripts/local_gate.sh --strict-toolchain --skip-tests` 通过
  - 最新本地打包产物：`packages/com.aple.wechatpepper_1.8.36-82+debug_iphoneos-arm64.deb`

#### 问题

- 页面路由、section 组装、picker 协调、资源选择、配置读写混在一起。

#### 目标拆分

- `WCPLSettingsPageRouter`
- `WCPLSettingsSectionFactory`
- `WCPLSettingsPickerCoordinator`
- `WCPLSettingsPageContext`

#### 保留在控制器中的内容

- 生命周期
- 导航标题
- `reloadTableData` 分发

### 4.2 `WCPLRedEnvelopHook.xm`

#### 当前进展

- 已新增 `WCPLRedEnvelopBackgroundTaskTracker.h/.m`，承接后台保活任务 token、状态表，以及 begin / end 流程。
- 已新增 `WCPLRedEnvelopOpenReplyTracker.h/.m`，承接红包打开后的会话跟踪表、TTL 清理与 sendId / sign / timing / fallback last 查找逻辑。
- 已新增 `WCPLRedEnvelopReceiverQueryTracker.h/.m`，承接查询 pending/finished 状态表与 hedge request 补发调度逻辑。
- 已新增 `WCPLRedEnvelopSessionResolver.h/.m`，承接 `sessionUserName` 候选收敛、用户名归一化 / 名单匹配复用、联系人/群聊展示名解析、通知场景文案与 `selfUserName` 解析逻辑。
- 已新增 `WCPLRedEnvelopSummaryPresenter.h/.m`，承接 miyou 领取完页汇总标签、视图安装钩子与布局逻辑。
- 已新增 `WCPLRedEnvelopRequestParser.h/.m`，承接字典 / 字符串 / 整数读取、query string / nativeUrl / hongbao buffer 解析、cmdId 解析、open response success 判定，以及通用错误 response 日志。
- 已新增 `WCPLRedEnvelopEntryCoordinator.h/.m`，承接红包入口 `nativeUrl -> WeChatRedEnvelopParam` 组装、参数入队、query request 组装，以及 `ReceiverQueryRedEnvelopesRequest:` 派发 / 回滚逻辑。
- `WCPLRedEnvelopOpenReplyTracker.h/.m` 已补 `WCPLTrackOpenReplySessionFromRequestDictionary`，承接 request 字典到打开回复跟踪表的解析入口。
- `WCPLRedEnvelopHook.xm` 已移除后台保活任务、打开回复跟踪入口、查询状态跟踪、session/contact/display 解析、请求参数解析、入口 query 派发，以及 miyou 汇总展示静态实现，主文件行数从 2772 降到 1147，已进入阶段目标中的 1200 行以内。
- 当前验证结果：
  - `./scripts/maintainability_guard.sh` 通过
  - `./scripts/run_unit_tests.sh --cross-platform` 通过
  - `./scripts/local_gate.sh --strict-toolchain --skip-tests` 通过
  - 最新本地打包产物：`packages/com.aple.wechatpepper_1.8.36-82+debug_iphoneos-arm64.deb`

#### 问题

- Hook、请求参数解析、后台任务跟踪、自动回复跟踪、UI 汇总、联系人解析混在同一文件。

#### 目标拆分

- `WCPLRedEnvelopRequestParser`
- `WCPLRedEnvelopEntryCoordinator`
- `WCPLRedEnvelopSessionResolver`
- `WCPLRedEnvelopBackgroundTaskTracker`
- `WCPLRedEnvelopOpenReplyTracker`
- `WCPLRedEnvelopSummaryPresenter`
- `WCPLRedEnvelopHook.xm` 仅保留 hook 入口和委托

### 4.3 `WCPLMessageSearchCore.xm`

#### 当前进展

- 已新增 `WCPLMessageSearchStateStore.xm`，承接搜索 UI 显示态判定、search controller / helper 识别、bridge pending / auto-pop 标记、helper/businessType 快照与搜索退出收口状态机。
- 已新增 `WCPLMessageSearchResidualCleanup.xm`，承接导航栏 / 根视图搜索残留识别、残留日志、pre-hide / restore / dismiss / overlay fail-safe，以及 exit repair 流程。
- 已新增 `WCPLMessageSearchNavButtonHelpers.xm`，承接聊天页判定、用户名缓存、搜索按钮 icon / rightBar 注入、miyou 风格按钮收敛与延迟修复。
- 已新增 `WCPLMessageSearchPresentationBridge.xm`，承接 miyou searcher/searchBar container、push/fallback、chat info bridge，以及完整搜索激活与卡死回退链路。
- `WCPLMessageSearchCore.xm` 已收缩为薄聚合入口，仅保留 `%group`、associated-object key、少量前置声明、`wcpl_viewOriginY` / `wcpl_setViewOriginY`、`CommonMessageCellView` category 声明，以及 4 个内部 shard 的 `#include`。
- `Makefile` 已把 4 个新 shard 纳入 `WCPL_INTERNAL_INCLUDE_FILES`，`scripts/generate_wcpl_message_hook.sh` 已补充搜索 core 的 shard 说明，`scripts/maintainability_guard.sh` 已同步收紧 `WCPLMessageSearchCore.xm` 并新增 4 个 shard 的行数阈值。
- 当前文件行数：
  - `WCPLMessageSearchCore.xm`: `118`
  - `WCPLMessageSearchStateStore.xm`: `744`
  - `WCPLMessageSearchResidualCleanup.xm`: `1528`
  - `WCPLMessageSearchNavButtonHelpers.xm`: `1050`
  - `WCPLMessageSearchPresentationBridge.xm`: `995`
- 当前验证结果：
  - `./scripts/maintainability_guard.sh` 通过
  - `./scripts/run_unit_tests.sh --cross-platform` 通过
  - `./scripts/local_gate.sh --strict-toolchain --skip-tests` 通过
  - 最新本地打包产物：`packages/com.aple.wechatpepper_1.8.36-82+debug_iphoneos-arm64.deb`

#### 问题

- 大量静态函数同时处理导航按钮、残留清理、search presentation、桥接、状态标记。

#### 目标拆分

- `WCPLMessageSearchNavButtonHelpers.xm`
- `WCPLMessageSearchResidualCleanup.xm`
- `WCPLMessageSearchPresentationBridge.xm`
- `WCPLMessageSearchStateStore.xm`
- `WCPLMessageSearchCore.xm` 保留 `%group` 和对外入口

#### 实施要求

- 初期仍通过聚合入口包含这些 shard，不直接把每个 shard 变成单独编译单元。
- 同步更新 `WCPL_INTERNAL_INCLUDE_FILES` 和生成脚本，保证白名单纪律不被破坏。

### 验收

- `WCPLSettingViewController.m` 降到 800 行以内。
- `WCPLRedEnvelopHook.xm` 降到 1200 行以内。
- `WCPLMessageSearchCore.xm` 降到 1500 行以内。

## 阶段 5：Hook 薄壳化与 WeChat 适配层 [已完成]

### 目标

- 隔离微信私有 API 变动对业务逻辑的冲击。

### 当前进展

- 已完成（2026-03-14）
- 已新增 `WCPLServiceCenterAdapter.h/.m`，对 `WCPLGetServiceCenter` / `WCPLGetService` 做薄适配，统一 service lookup 入口。
- 已新增并扩展 `WCPLContactAdapter.h/.m`，统一 `m_nsUsrName` 提取、`selfContact` / `selfUserName` 获取、按用户名查联系人，以及 message/chat contact 匹配入口。
- 已新增 `WCPLNavigationAdapter.h/.m`，统一 `loadedView`、`navigationController`、导航栈深度与“是否仍在导航栈”判断。
- 已新增并扩展 `WCPLMessageAdapter.h/.m`，统一聊天控制器的 `GetContact`、聊天用户名、当前 chatName、logicController、toolView、输入框文本、视图与导航访问，并组合 `ContactAdapter` / `NavigationAdapter`。
- 已新增 `WCPLMessageActionAdapter.h/.m`，统一复读/手势链路中的 `CMessageMgr`、`SendMessageMgr`、`ForwardMessageMgr`、`CEmoticonMgr` 动作入口。
- 已新增 `WCPLRepeatCellAdapter.h/.m`，统一消息 cell 的 anchor/bubble/menuRect 解析，收敛 `showRectForMenuController`、`contentView`、`bgImageView` 等 runtime 访问。
- `WCPLMessageSearchHook.xm` 已改走 `WCPLMessageAdapter`，不再直接调用 `GetContact`、`valueForKey:@"navigationController"`、`valueForKey:@"view"`。
- `WCPLRedEnvelopHook.xm` 已改走 `WCPLServiceCenterAdapter` / `WCPLContactAdapter`，红包自动回复和入口预检不再直接调用 `WCPLGetService` 与 `getSelfContact`。
- `WCPLRedEnvelopSessionResolver.m` 已把用户名提取、联系人查找、自身用户名获取收敛到 `WCPLContactAdapter`，减少私有属性直连散落。
- `WCPLGestureDebugHelpers.xm` 已改走 `WCPLMessageAdapter`，聊天名 / 用户名解析不再直连 `getCurrentChatName`、`GetContact`、`m_nsUsrName`。
- `WCPLGestureHookCommon.xm` 已改走 `WCPLContactAdapter` / `WCPLMessageAdapter` / `WCPLServiceCenterAdapter` / `WCPLMessageActionAdapter`，引用联系人、logicController、toolView、session sync 和消息服务访问已从 Hook 内部直连收敛为 adapter/service 入口。
- `WCPLRepeatActionHook.xm` 已改走 `WCPLMessageActionAdapter`，表情 wrap 解析、删除、撤回、转发不再在 Hook 内直接堆叠 `WCPLGetService` 与多组私有路由探测。
- `WCPLRepeatButtonHook.xm`、`WCPLGestureLayoutHelpers.xm`、`WCPLGestureTapPolicyHelpers.xm` 已改走 `WCPLRepeatCellAdapter`，cell 布局锚点与 menu rect 解析不再散落在 Hook 内。
- 当前验证结果：
  - `./scripts/maintainability_guard.sh` 通过
  - `./scripts/run_unit_tests.sh --cross-platform` 通过
  - `./scripts/local_gate.sh --strict-toolchain --skip-tests` 通过
  - 最新本地打包产物：`packages/com.aple.wechatpepper_1.8.36-84+debug_iphoneos-arm64.deb`

### 变更

- 为高频依赖建立适配器/门面：
  - `WCPLContactAdapter`
  - `WCPLMessageActionAdapter`
  - `WCPLMessageAdapter`
  - `WCPLServiceCenterAdapter`
  - `WCPLNavigationAdapter`
  - `WCPLRepeatCellAdapter`
- Hook 文件不直接做复杂 KVC、selector 猜测、view tree 深搜；改由适配器或服务类承担。

### 优先落点

- 红包
- 消息搜索
- 手势 / 复读

### 验收

- 新增 Hook 逻辑默认走 adapter/service，不直接堆叠在 `*Hook.xm`。

## 阶段 6：收尾与治理固化 [已完成]

### 状态

- 已完成（2026-03-14）
- `legacy/Tweak.m` 已正式移出 `src/`，归档入口不再出现在主源码目录。
- `scripts/maintainability_guard.sh` 已新增“legacy tweak entry 必须保持在 `src/` 之外”的治理检查。
- 已新增架构治理文档：`docs/architecture-governance.md`
- 已新增 ADR：
  - `docs/adr/0001-generated-hook-aggregation.md`
  - `docs/adr/0002-wechat-adapter-boundary.md`
  - `docs/adr/0003-legacy-tweak-entry-archival.md`
  - `docs/adr/README.md`
- 已新增显式 CI 门禁：`.github/workflows/repo-guard.yml`
- 现有 `.github/workflows/build-deb.yml` 已补显式 `maintainability_guard.sh` 步骤，并同步本地 gate 的真实打包语义。
- 已将本轮新增适配层文件头注释统一收口为中文，阶段 6 后的新注释口径以中文为默认。

### 变更

- 清理遗留 `Tweak.m` 到 `legacy/` 或独立归档目录。
- 统一注释语言。
- 为关键重构决策增加 ADR。
- 把 guard 脚本接入 CI。

### 当前验证结果

- `./scripts/maintainability_guard.sh` 通过
- `./scripts/run_unit_tests.sh --cross-platform` 通过
- `./scripts/local_gate.sh --strict-toolchain --skip-tests` 通过
- 最新本地打包产物：`packages/com.aple.wechatpepper_1.8.36-85+debug_iphoneos-arm64.deb`

### 验收

- 新增文档能解释模块边界、Hook 入口、适配层职责和测试入口。

## 7. 不建议先做的事

- 不先全量移除单例。当前成本过高，且会把风险扩散到全项目。
- 不先把所有 `.xm` 改成独立编译文件。现有白名单和聚合脚本是稳定约束，应该最后再调整。
- 不先重写 `WCPLMessageSearchCore.xm`。应该先把日志、状态、残留清理边界拉出来。
- 不先做“抽象而抽象”的基类/宏。先抽真实重复，再抽通用模板。

## 8. 并行执行建议

### 工作流 A：安全网

- 测试契约补齐
- guard 脚本
- CI 接入

### 工作流 B：基础设施

- Logger 协议化
- ErrorReporter
- Config 注入入口

### 工作流 C：热点拆分

- `WCPLSettingViewController.m`
- `WCPLRedEnvelopHook.xm`
- `WCPLMessageSearchCore.xm`

## 9. 里程碑与完成标准

### M1

- 测试和 guard 落地
- 空 inline `@catch` 清零

### M2

- Config/Logger 解耦入口落地
- 不再新增全局直接耦合

### M3

- 设置页、红包、消息搜索三大热点完成首轮拆分

### M4

- 适配层落地
- CI 固化治理规则

## 10. 预期收益

- 回归风险先下降，再谈结构美化。
- 代码变更更容易局部化，降低对 Hook 入口和胖头文件的连锁影响。
- 后续新增功能更容易落在 service/helper 层，而不是继续堆在 `*Hook.xm` 与大控制器里。
