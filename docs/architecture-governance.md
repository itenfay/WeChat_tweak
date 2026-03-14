# WeChat_tweak 架构与治理说明

> 更新日期：2026-03-14
> 适用范围：`WeChatPluginDev/wapleodtcorexpc`

## 1. 模块边界

当前工程按“入口 Hook -> 功能模块 -> 适配层 / 基础设施”组织：

| 层级 | 主要文件 | 职责边界 |
|---|---|---|
| Hook 入口层 | `src/Tweak.xm`、`src/WCPLPluginEntryHook.xm` | 只负责启动探针、崩溃上报、实时日志上传、设置入口注入、插件注册 |
| 生成式 Hook 聚合层 | `src/WCPLMessageHook.xm`、`src/WCPLGestureHook.xm` | 由脚本生成，聚合内部 include-only 模块，不允许手工直接编辑 |
| 功能模块层 | `src/WCPLRedEnvelopHook.xm`、`src/WCPLMessageSearchHook.xm`、`src/WCPLGestureHookCommon.xm`、`src/WCPLRepeatActionHook.xm` 等 | 保持 Hook 薄壳，复杂逻辑下沉到 helper / service / adapter |
| WeChat 适配层 | `src/WCPLServiceCenterAdapter.*`、`src/WCPLContactAdapter.*`、`src/WCPLMessageAdapter.*`、`src/WCPLMessageActionAdapter.*`、`src/WCPLNavigationAdapter.*`、`src/WCPLRepeatCellAdapter.*` | 统一封装 WeChat 私有类、selector、KVC、service lookup、Cell 运行时探测 |
| 基础设施层 | `src/WCPLLogger.*`、`src/WCPLCrashReporter.*`、`src/WCPLConfigCenter.*`、`src/WCPLTypeGuard.*`、`src/WCPLPureHelpers.*` | 提供日志、错误记录、配置装配、通用类型保护和纯函数能力 |
| 遗留归档层 | `legacy/Tweak.m` | 历史入口，仅用于对照，禁止回到编译主链 |

## 2. Hook 入口链路

### 2.1 启动入口

当前入口主链固定为：

1. `src/Tweak.xm`
   - 启动探针
   - `WCPLCrashReporter` 安装
   - `WCPLRealtimeLogUploader` 启动
2. `src/WCPLPluginEntryHook.xm`
   - 设置入口注入
   - 插件注册

`legacy/Tweak.m` 已归档，不得重新加入编译白名单。

### 2.2 生成式 Hook

下列文件是生成产物：

| 生成产物 | 生成脚本 | 真实修改入口 |
|---|---|---|
| `src/WCPLMessageHook.xm` | `scripts/generate_wcpl_message_hook.sh` | `src/WCPLMessageHookCommon.xm`、`src/WCPLMessageSearch*.xm` 等 |
| `src/WCPLGestureHook.xm` | `scripts/generate_wcpl_gesture_hook.sh` | `src/WCPLGesture*.xm`、`src/WCPLRepeat*.xm`、`src/WCPLSwipeQuoteHook.xm` 等 |

规则：

- 不手改生成产物。
- 修改内部 include-only 模块后，必须重新运行对应生成脚本。
- `Makefile` 中 `WCPL_INTERNAL_INCLUDE_FILES` 列表只允许聚合，不允许直接编译。

## 3. 适配层职责

### 3.1 已落地的适配器

| 适配器 | 职责 |
|---|---|
| `WCPLServiceCenterAdapter` | 统一 `MMServiceCenter` / `WCPLGetService` 访问 |
| `WCPLContactAdapter` | 统一用户名提取、自身联系人、按用户名查联系人、message/chat contact 解析 |
| `WCPLMessageAdapter` | 统一聊天控制器的 contact、chatName、logicController、toolView、输入框文本、导航访问 |
| `WCPLMessageActionAdapter` | 统一 `CMessageMgr`、`SendMessageMgr`、`ForwardMessageMgr`、`CEmoticonMgr` 动作入口 |
| `WCPLNavigationAdapter` | 统一 `view` / `navigationController` / 导航栈判断 |
| `WCPLRepeatCellAdapter` | 统一消息 Cell 的 bubble anchor、display anchor、menu rect 探测 |

### 3.2 适配层使用规则

1. Hook 文件中不再直接堆叠 `WCPLGetService(objc_getClass(...))`。
2. Hook 文件中不再直接猜测 `GetContact`、`m_nsUsrName`、`toolView`、`showRectForMenuController` 这类热点访问。
3. 新增 WeChat 私有 API 接入时，优先先补 adapter，再让业务代码调用。

## 4. 构建与验证入口

### 4.1 本地验证

| 命令 | 用途 |
|---|---|
| `./scripts/maintainability_guard.sh` | 检查空 `@catch`、大文件阈值、胖头文件直接导入、遗留入口回流 |
| `./scripts/run_unit_tests.sh --cross-platform` | 执行纯函数 / 配置 / 队列等跨平台测试 |
| `./scripts/run_unit_tests.sh --auto` | 在 Darwin 主机执行 host + cross-platform 测试 |
| `./scripts/local_gate.sh --strict-toolchain --skip-tests` | 执行生成、guard、doctor、真实打包门禁 |

### 4.2 CI 入口

| 工作流 | 位置 | 用途 |
|---|---|---|
| `Repository Guard` | `.github/workflows/repo-guard.yml` | Linux 上快速执行生成一致性、guard、cross-platform 测试 |
| `Build DEB Packages` | `.github/workflows/build-deb.yml` | macOS 上执行严格门禁并构建 deb |

## 5. 治理约束

### 5.1 注释语言

- 新增和重构后的内联注释统一使用中文。
- 文件头注释、结构说明、关键块注释优先使用简短中文，不写双语混排。
- CLI 输出和第三方工具日志可保持原语言，不作为内联注释规范的一部分。

### 5.2 遗留文件

- `legacy/Tweak.m` 为历史档案。
- 允许阅读，不允许编译。
- 若未来需要彻底移出主仓主路径，应通过单独 ADR 或路线图阶段处理。

### 5.3 白名单纪律

- 所有新增源码必须在 `WCPL_COMPILE_FILES` 或 `WCPL_BLOCKED_FILES` 中明确归类。
- 任何 `src/` 漏分类文件都会触发 `Makefile` 的 source drift 检查失败。

## 6. 关联决策

- [ADR-0001 生成式 Hook 聚合保持为编译边界](/root/WeChat_tweak/docs/adr/0001-generated-hook-aggregation.md)
- [ADR-0002 WeChat 私有 API 通过适配层收口](/root/WeChat_tweak/docs/adr/0002-wechat-adapter-boundary.md)
- [ADR-0003 遗留入口 Tweak.m 归档到 legacy 目录](/root/WeChat_tweak/docs/adr/0003-legacy-tweak-entry-archival.md)
