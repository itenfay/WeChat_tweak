# 同类 Hook 冲突治理顺序

更新时间：2026-02-24

## 统一执行骨架

所有冲突治理入口统一按以下语义执行：

1. `pre_filter`：前置过滤，判断是否启用插件能力或跳过功能。
2. `feature`：功能处理，执行业务逻辑。
3. `fallback`：兜底放行，确保原生链路可达。

## `%orig` 策略定义

- `pre`：先 `%orig`，再执行 `feature`。用于“主流程优先”的链路。
- `post`：先执行 `feature`，再 `%orig`。用于“先拦截/记录再放行”的链路。
- `conditional_short_circuit`：命中特定处理时短路，不再 `%orig`；未命中则 `%orig`。

## 冲突点与顺序定义

### `CMessageMgr`

- `AsyncOnAddMsg:MsgWrap:`
  - `WCPLRedEnvelopHook.xm`：策略 `pre`（已消除“message_ignored 直接 return”短路，改为先 `%orig` 再退出功能）。
  - `WCPLQuitMonitorHook.xm`：策略 `pre`。
  - 治理结果：两侧都不再短路原生链路，冲突从“链路可被截断”收敛为“功能后处理顺序差异”，线上行为可预测。

- `AddMsg:MsgWrap:` / `AsyncOnPreAddMsg:MsgWrap:`
  - `WCPLQuitMonitorHook.xm`：策略 `pre`。

- `onRevokeMsg:`
  - `WCPLRevokeHook.xm`：策略 `conditional_short_circuit`。
  - 语义：仅当防撤回逻辑成功接管时短路；异常或未命中一律放行 `%orig`。

### `TextMessageCellView`

- `updateStatus`
  - `WCPLMessageHook.xm`（来自 `WCPLMessageLocalReplaceHook.xm`）：策略 `pre`，本地替换为后置处理。
  - `WCPLRevokeHook.xm`：策略 `pre`，防撤回时间着色为后置处理。
  - 治理结果：两侧均不短路 `%orig`，都以“原生完成后补充渲染”为原则。

- `layoutContentView`
  - `WCPLRevokeHook.xm`：策略 `pre`。

### `CommonMessageCellView`

- `updateStatus` / `layoutContentView`
  - `WCPLRevokeHook.xm`：策略 `pre`。

### `MicroMessengerAppDelegate`（通过入口分发）

- `application:didFinishLaunchingWithOptions:`
  - `WCPLPluginEntryHook.xm` 主入口中分发 `wcpl_push2chat_handleLaunchOptions`。
  - 推送直达治理语义记录在 `WCPLPush2ChatHook.xm`，策略视为 `pre`（主入口 `%orig` 后分发）。

- `userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:`
  - `WCPLPluginEntryHook.xm` 分发前台通知到 `WCPLPush2ChatHook.xm`。
  - `WCPLPush2ChatHook.xm` 中 `NotificationActionsMgr` 同 selector 入口为 `post`（先分发，再 `%orig`）。

## 统一日志结构

统一使用 `WCPLHookGovernance.h` 的日志格式：

`[Hook治理][<feature>][<Class>::<selector>] stage=<stage> decision=<decision> orig=<policy> detail=<detail>`

已接入文件：

- `WCPLMessageHook.xm`（由模块生成）
- `WCPLQuitMonitorHook.xm`
- `WCPLRedEnvelopHook.xm`
- `WCPLRevokeHook.xm`
- `WCPLPush2ChatHook.xm`
