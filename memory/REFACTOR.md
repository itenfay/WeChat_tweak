# wapleodtcorexpc 重复代码与重构清单（长期维护）

目的：在 `WeChatPluginDev/wapleodtcorexpc` 范围内持续记录“重复实现/重复片段/可收口点”，为后续渐进式重构提供依据，降低复杂度与私有 API 扩散。

约束（必须遵守）：

- Hook 层保持薄壳：复杂逻辑下沉到 helper/service/adapter（见 `docs/architecture-governance.md`）。
- WeChat 私有 API 访问必须优先收口到 adapter（见 `docs/adr/0002-wechat-adapter-boundary.md`）。
- 生成产物禁止手改：`src/WCPLMessageHook.xm`、`src/WCPLGestureHook.xm`（见 `docs/adr/0001-generated-hook-aggregation.md`）。
- 本文仅记录“可重构点”；是否执行、如何拆分以实际回归风险为准。

记录规则：

- 新扫描结果一律追加到文件末尾，以日期分节。
- 每条尽量包含：重复点 → 证据（文件/符号）→ 收口建议 → 风险/边界。

---

## 2026-03-16 扫描结果（src 为主，排除 Headers；生成产物仅做参考）

### 1) 用户名解析/联系人识别：多处重复实现（高优先级）

重复点：

- “从 `id`/`CContact`/KVC/selector 解析 `m_nsUsrName`”在多处以不同命名重复出现，且行为细节不一致（返回 `nil` vs `@""`、是否 `WCPLCatchLog`、是否先判 `NSString` 等）。

证据（实现位置）：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLContactAdapter.m`：`WCPLContactAdapterSafeUserName`（selector + KVC）
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLContactLookup.m`：`wcpl_userNameFromObject`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageHookCommon.xm`：`wcpl_safeUserNameFromObject`（include-only；会被拼入生成产物）
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLIgnoreUIHook.xm`：`wcpl_ignoreUI_safeUserNameFromObject`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLDouyinParserHook.xm`：`wcpl_douyin_safeUserNameFromObject`
- `WeChatPluginDev/wapleodtcorexpc/src/WCHookMessageNavigator.m`：依赖 `WCHookStringFieldFromWrap` + KVC 的字段读取（间接重复）

收口建议：

- 以 `WCPLContactAdapterSafeUserName` 作为“唯一入口”，其余模块只调用 adapter；必要时在 adapter 内补齐“返回空串/返回 nil”的明确语义，避免各处自行定义。
- `WCPLContactLookup` 内部的 `wcpl_userNameFromObject` 直接替换为 adapter 调用，减少一份实现与差异面。

风险/边界：

- `WCPLMessageHookCommon.xm` 等 include-only 模块不可直接被编译引用的情况，需要通过新增基础设施层 helper（可编译）或在聚合模块内 include 统一头实现来落地；禁止手改生成产物。

---

### 2) `CContactMgr` 查联系人：重复的 selector 轮询（高优先级）

重复点：

- `getContactByName:` / `getContactByNameFromDB:` / `getContactByNameFromCache:` 多处重复轮询，且某些地方又多一个 `getContactForSearchByName:`，导致同一能力散落。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLFuncService.m`：`wcpl_contactForUserName`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLPush2ChatHook.xm`：`wcpl_push2chat_contactForUserName`
- `WeChatPluginDev/wapleodtcorexpc/src/WCHookMessageNavigator.m`：`WCHookContactForUserName`（同时还重复了 service center 获取）
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLContactLookup.m`：历史上存在更复杂兜底（目前保守化，仅保留轻量查询）

收口建议：

- 在 `WCPLContactLookup` 或 `WCPLContactAdapter` 中提供“统一的按用户名查联系人”函数（包含 selector 优先级与类型校验），其余模块只调用该入口。
- 与 ADR-0002 对齐：业务/Hook 不直接轮询私有 selector。

风险/边界：

- `WCPLContactLookup` 明确写了“稳定性优先”的保守策略；收口时要保证不会把高风险遍历逻辑重新扩散回各处。

---

### 3) 安全访问工具：`valueForKey:` / ivar / `objc_msgSend` 包装重复（高优先级）

重复点：

- 多个文件分别实现 `safeValueForKey`、`safeObjectIvar`、`InvokeNoArg/OneArg` 等工具，逻辑高度一致但命名不同、日志策略不同。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLEntrySafeHelpers.xm`：`wcpl_entry_safeValueForKey` / `wcpl_entry_safeObjectIvar`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLIgnoreUIHook.xm`：`wcpl_ignoreUI_safeValueForKey` / `wcpl_ignoreUI_safeObjectIvar`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLDouyinParserHook.xm`：`wcpl_douyin_safeValueForKey`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageHookCommon.xm`：`wcpl_safeObjectIvar`（以及大量手写 try/catch msgSend）
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageAdapter.m`：`wcpl_messageAdapterInvokeNoArg`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageActionAdapter.m`：`wcpl_messageActionAdapterInvokeNoArg/OneArg/VoidOneArg`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLWebViewOpenAdapter.m`：`wcpl_webViewOpenCallObject` + 多个 `TryXxx` 调用包装

收口建议：

- 新建基础设施层（可编译）统一 helper，例如：
  - `WCPLSafeKVCGet(obj, key)` / `WCPLSafeIvarGetObject(obj, name)`
  - `WCPLObjcCallId0/Id1/Void1/Bool1...`（明确签名，统一 `respondsToSelector` + `@try/@catch` 策略）
- 逐步替换各处私有 `static` 工具，减少“同类工具多份实现”的维护成本。

风险/边界：

- 不能引入“静默吞错”新兜底：既有行为要么保持（返回 nil/NO），要么在 helper 内统一 `WCPLCatchLog`/`WCPLLogWarning`，但必须可追踪。

---

### 4) 本地消息入库：`AddLocalMsg...` 链路选择多处重复（高优先级，且违反私有 API 收口精神）

重复点：

- 兼容不同版本的 `AddLocalMsg:MsgWrap:` / `AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:` / `...Unique:` 等选择逻辑散落在多个模块；日志格式也不统一。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLQuitMonitorMessageAdapter.m`：`wcpl_qm_insertViaPreferredPath`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRevokePersistenceAdapter.m`：`WCPLInsertAnchoredRevokeTipMessage`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopHook.xm`：红包自动回复的 `sendBlock`（含 `AddMsg`→`AddLocalMsg`→`SendMessageMgr` 等降级）
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLVoiceForwardCore.xm`：`wcpl_forwardAddLocalVoiceMsg`
- include-only 侧也存在相同片段（例如 `WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureHookCommon.xm`），且会被拼入生成产物

收口建议：

- 在 adapter 层新增“本地消息入库”统一入口（建议落在 `WCPLMessageActionAdapter` 或新建 `WCPLMessagePersistenceAdapter`）：
  - 输入：`messageMgr/session/msgWrap` + 选项（fixTime、notify、unique、日志 tag）
  - 输出：是否成功 + 命中路径枚举值
- 上层功能模块只关心“我要入库一条本地提示/语音转发落地”，不再自写私有 selector 轮询。

风险/边界：

- 红包链路包含更复杂的发送降级（`AddMsg`、`SendMessageMgr`、`m_bypSendMessageMgr`）；建议分层：入库 helper 只解决 `AddLocalMsg*`，发送策略另做 service 收口，避免 helper 过胖。

---

### 5) “最顶层可见 VC” 查找逻辑重复（高优先级）

重复点：

- 从 `CAppViewControllerManager.topMostController` 或从 `UIWindow` 兜底遍历 `presented/nav/tab` 的逻辑在多个功能中重复出现（用于展示 alert / action sheet / 跳转）。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMarkAllReadService.xm`：`wcpl_markAllRead_topMostViewController`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLWebViewOpenAdapter.m`：`wcpl_webViewOpenTopMostController` + `wcpl_webViewOpenVisibleController`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLPush2ChatHook.xm`：`wcpl_push2chat_findTopViewControllerFallback`

收口建议：

- 在基础设施层或 `WCPLNavigationAdapter` 中提供 `WCPLTopVisibleViewController()`（项目内已出现同名调用点，建议统一实现并替换散落逻辑）。

风险/边界：

- iOS 版本/WeChat 容器层级可能差异较大；收口后要保证保留“最多迭代次数/退出条件”，避免无限循环与卡死。

---

### 6) `MMLoadingView` 创建/启停：重复（中优先级）

重复点：

- 创建 loadingView、设置 `m_label`、调用 `startLoading/stopLoadingAndShowOK/Error` 的流程重复，且对私有 selector 的保护方式不同。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLBaseViewController.m`：`startLoadingBlocked` / `startLoadingNonBlock` / `createDefaultLoadingView`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMarkAllReadService.xm`：`wcpl_markAllRead_createLoadingView` / `wcpl_markAllRead_stopLoadingView`

收口建议：

- 抽到基础设施层 helper：`WCPLLoadingViewCreate(hostView,text,blockInteraction)` + `WCPLLoadingViewStop(view, ok, text)`，并把 BaseViewController 内部的双实现合并为一个带参数的方法。

---

### 7) SVG/系统图标构建：重复模板（中优先级）

重复点：

- 多处存在“内联 SVG → `WAThemeProxy svgImageFromData:` → fallback `systemImageNamed:` → `imageWithRenderingMode:`”的模板代码，只是 SVG 与 symbol 名不同。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageHookCommon.xm`：例如 `wcpl_clownMenuIconImage`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLVoiceForwardCore.xm`：`wcpl_voiceForwardMenuIconImage`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMarkAllReadService.xm`：`wcpl_topRightMenu_markAllReadIconImage`

收口建议：

- 抽取通用 helper：输入（svg 字符串、fallback symbol 列表、renderingMode、pointSize/weight/scale）→ 输出 `UIImage *`。

---

### 8) Picker 容器 VC：`WCPLFriendPickerViewController` 与 `WCPLGroupPickerViewController` 几乎同构（中优先级）

重复点：

- 两个 VC 除了标题与 filter 条件（user vs group）和 delegate 回调方法名外，生命周期/呈现逻辑基本一致（`viewDidAppear` 弹出 picker、二次进入时 dismiss 并通知结果）。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLFriendPickerViewController.m`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLGroupPickerViewController.m`

收口建议：

- 合并为一个可配置的 presenter（参数：`titleText` 默认值、`itemFilter`、完成/取消回调），或抽出共同父类/内部私有函数，避免两份几乎相同的状态机。

---

### 9) 日志/崩溃的“App 上下文信息”字符串：完全重复（中优先级）

重复点：

- `进程/设备/系统/App 版本` 拼装逻辑在日志与崩溃模块完全一致。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLLogger.m`：`startupContextInfo`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLCrashReporter.m`：`appContextInfo`

收口建议：

- 抽到基础设施层纯函数：`WCPLBuildAppContextInfoString()`，两处复用，避免未来字段/格式漂移。

---

### 10) `WCHook*` 与 `WCPL*` 并存：存在“历史实现重复”迹象（待逐项治理）

观察：

- `WCHookMessageNavigator.m` 自带一套 trim/xml/tag 解析/联系人查找/service center 获取/objc_msgSend 包装，与现有 `WCPLPureHelpers`/`WCPLContactLookup`/`WCPLServiceCenter(Adapter)`/`WCPLTypeGuard` 等高度重叠。
- `WCHookSettingsManager.m` 在 `wapleodtcorexpc` 范围内未发现引用点（`rg` 仅命中自身），但仍在 `Makefile` 的 `WCPL_COMPILE_FILES` 白名单中编译。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCHookMessageNavigator.m`：`WCHookTrimString`/`WCHookExtractTagValue`/`WCHookContactForUserName`/`WCHookInvokeObject` 等
- `WeChatPluginDev/wapleodtcorexpc/src/WCHookSettingsManager.m`：仅自身定义；无外部引用命中

收口建议：

- 将 `WCHookMessageNavigator` 中可复用的纯逻辑逐步迁移到 `WCPLPureHelpers`/adapter，并在 navigator 内改为调用（减少一份“自带工具链”）。
- 对 `WCHookSettingsManager` 做一次“是否仍需编译进产物”的确认；若确认为死代码，移出白名单或归档（遵守白名单/blocked files 纪律）。

---

## 2026-03-16 补充扫描结果（第二轮）

### 11) 内联文本清理（去换行/截断/省略号）重复：已存在公共函数但仍多处自建（高优先级）

重复点：

- 项目已提供公共函数 `WCPLSanitizeInlineText(text,maxLen)`，但红包链路仍存在多份私有 `SanitizeInlineText` 变体，逻辑一致（trim → 替换 `\r/\n` → 超长截断加 `…`）。

证据：

- 公共实现：`WeChatPluginDev/wapleodtcorexpc/src/WCPLAlertTextHelpers.m`：`WCPLSanitizeInlineText`
- 重复实现：
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopEntryCoordinator.m`：`wcpl_redEnvelopEntrySanitizeInlineText`
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopRequestParser.m`：`wcpl_redEnvelopParserSanitizeInlineText`

收口建议：

- 删除红包链路内的私有重复实现，统一调用 `WCPLSanitizeInlineText`；并把 `WCPLSanitizeInlineText` 的位置/命名视为“基础设施层通用能力”（必要时可迁移到更通用的 helper 文件，但需避免破坏现有 include-only 聚合边界）。

---

### 12) 红包 `sessionUserName` 归一化（percent decode + trim）重复（高优先级）

重复点：

- 对 `sessionUserName` 做 `%` 解码 + trim 的循环逻辑重复存在，且两份实现行为基本一致。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopSessionResolver.m`：`WCPLRedEnvelopNormalizeSessionUserName`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopOpenReplyTracker.m`：`wcpl_openReplyNormalizeSessionUserName`

收口建议：

- `OpenReplyTracker` 直接调用 `WCPLRedEnvelopNormalizeSessionUserName`，移除本地重复实现，避免未来归一化规则漂移。

---

### 13) “队列重入检测 + dispatch_sync 安全封装”重复（高优先级）

重复点：

- 多个模块都在用 `dispatch_queue_set_specific` + `dispatch_get_specific` 实现“同队列重入时直接执行，否则 dispatch_sync”以避免死锁；但每个文件都自带一套 `DispatchSyncSafe`/`isOnQueue`/`sync`，难以统一治理（尤其是修复死锁/性能时需要全局改）。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLThreadSafeMutableDictionary.m`：`wcpl_isOnOwnQueue` + `wcpl_readSync/wcpl_writeSync`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopParamQueue.m`：`wcpl_isOnSyncQueue` + `wcpl_sync`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopBackgroundTaskTracker.m`：`wcpl_bg_dispatch_sync_safe`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopOpenReplyTracker.m`：`wcpl_openReplyDispatchSyncSafe`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopReceiverQueryTracker.m`：`wcpl_receiverDispatchSyncSafe`

收口建议：

- 抽到基础设施层一个“可复用的同步封装”（建议 C 函数/宏，参数显式带 `queue` + `specificKey`），让各业务模块只维护自己的 `specificKey`，不重复维护同步策略。
- 对于需要 barrier 的（`WCPLThreadSafeMutableDictionary`），可在统一封装上再提供 `sync`/`barrier_sync` 两套入口，避免业务方自行拼装。

---

### 14) 红包 `sendId/sign` 追踪 token 生成重复（中优先级）

重复点：

- “优先 sendId，其次 sign”的 token 生成逻辑在多个 tracker 中重复出现，且字符串格式一致。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopBackgroundTaskTracker.m`：`wcpl_backgroundTaskTrackToken`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopReceiverQueryTracker.m`：`wcpl_receiverQueryTrackToken`

收口建议：

- 抽到红包领域 helper（例如 `WCPLRedEnvelopTrackToken(sendId,sign)`），统一 token 语义；各 tracker 仅负责 map/队列/生命周期。

---

### 15) 文件大小读取（attributesOfItemAtPath → NSFileSize）重复（中优先级）

重复点：

- 多处存在“给路径 → 读 attributes → 取 fileSize/NSFileSize”的工具函数或内联实现。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLVoiceForwardCore.xm`：`wcpl_fileSizeAtPath`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRepeatButtonAssetManager.m`：多处 `attributesOfItemAtPath` + `[attrs fileSize]`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRealtimeLogUploader.m`：`attributesOfItemAtPath` + `[attributes fileSize]`

收口建议：

- 抽到基础设施层纯函数 `WCPLFileSizeAtPath(path)`，统一对路径类型校验与返回语义（0 表示不可用/不存在/为空）。

---

### 16) 设置页选择结果过滤：chatroom / friend 的对称逻辑重复（中优先级）

重复点：

- `WCPLSettingsSelectionStore` 内存在“过滤群聊 / 过滤好友”的对称实现（同一套 sanitize + for 循环 + dropped 统计 + warning log），可收敛为一个可配置过滤器。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLSettingsSelectionStore.m`：
  - `wcpl_chatroomUserNamesFromArray:scene:`
  - `wcpl_friendUserNamesFromArray:scene:`

收口建议：

- 抽取一个内部 helper：输入 `NSArray` + `BOOL (^)(NSString *) predicate` + `scene/logTag`，输出过滤后的数组与 dropped 统计；避免双份实现未来漂移。

---

### 17) 设置页 `WCTableViewManager` frame 初始化重复（中优先级）

重复点：

- `WCPLSettingViewController` 与 `WCPLLogSettingsViewController` 使用相同的 `tabY/tabW/tabH` 计算和 `WCTableViewManager initWithFrame:style:` 初始化逻辑。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLSettingViewController.m`：`wcpl_setupTableViewManager`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLLogSettingsViewController.m`：`initWithNibName:bundle:`

收口建议：

- 抽到一个小型 factory（可复用现有 `WCHookTableViewFactory.tableManagerWithFrame:style:` 思路，或新增 `WCPLTableViewManagerFactory`），统一 frame 计算与创建；避免未来 UI 适配（safe area/横屏）只修一处导致另一处不一致。

---

### 18) 红包场景的展示名解析：与 `WCPLContactAdapterDisplayNameForUserName` 逻辑重叠（中优先级）

重复点：

- 红包通知场景为了显示“群聊(名称)/私聊(名称)”实现了一套较复杂的 displayName 解析，包含 selector/KVC/bizUtil 多路径；与 `WCPLContactAdapterDisplayNameForUserName` 的职责与实现明显重叠。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLContactAdapter.m`：`WCPLContactAdapterDisplayNameForUserName`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopSessionResolver.m`：`wcpl_redEnvelopContactDisplayName` / `wcpl_redEnvelopDisplayNameForUserName`

收口建议：

- 明确 adapter 的“展示名解析”边界：把红包通知所需的补充规则（群聊 rawName 判定、filehelper 特例等）收口到 adapter/专用 adapter 中，红包模块仅调用一个入口，避免两套展示名解析长期并行。

---

### 19) Picker 数据源再次手写 `m_nsUsrName`/displayName 读取：与 adapter 重复（高优先级）

重复点：

- `WCPLPickerDataProvider` 在遍历联系人时，直接 KVC 读取 `m_nsUsrName`，并用 selector 读取 `getContactDisplayName/m_nsNickName` 生成展示名；这与已存在的 `WCPLContactAdapterSafeUserName` / `WCPLContactAdapterDisplayNameForUserName` 的职责重叠，且会把私有字段访问再次扩散到非 adapter 层。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLPickerDataProvider.m`：
  - `wcpl_userNameFromContact:`（KVC `m_nsUsrName`）
  - `wcpl_displayNameFromContact:fallback:`（selector 读取 displayName）

收口建议：

- `WCPLPickerDataProvider` 改为只做“联系人列表聚合 + 排序”，用户名/展示名解析收口到 `WCPLContactAdapter`（或新增 `WCPLPickerContactAdapter` 但仍属于 adapter 层），避免 picker 链路成为新的私有 API 扩散点。

---

### 20) 退群监控成员列表去重/trim：与 `WCPLQuitMonitorHelpers` 内部实现重复（中优先级）

重复点：

- `WCPLQuitMonitorService` 与 `WCPLQuitMonitorHelpers` 都实现了“遍历成员 → `WCPLTrimText` → `NSMutableOrderedSet` 去重”的逻辑，函数行为基本一致但各自维护。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLQuitMonitorService.m`：`wcpl_qm_uniqueMembersFromArray`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLQuitMonitorHelpers.m`：`wcpl_qm_normalizedMembersFromArray`

收口建议：

- 统一到 `WCPLQuitMonitorHelpers`（可考虑新增一个 `FOUNDATION_EXPORT` 的“成员归一化”函数），`Service` 侧只调用公共入口，减少一份实现。

---

### 21) “回调只触发一次”的 `didNotifyResult` 状态机重复（中优先级）

重复点：

- 多处需要确保回调/结果只触发一次，分别自建 `didNotifyResult + synchronized` 或类似状态机；实现细节相似但分散。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLFriendPickerViewController.m`：`didNotifyResult`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLGroupPickerViewController.m`：`didNotifyResult`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLReceiveRedEnvelopOperation.m`：`didNotifyResult` + `wcpl_notifyResultSuccess:`

收口建议：

- 抽一个小的“只触发一次”工具（例如 `WCPLOnceCallback` 或 `WCPLAtomicFlag` 风格）供 UI/Operation 共用，统一并简化状态机，降低竞态/重复回调风险。

---

## 2026-03-16 补充扫描结果（第三轮）

### 22) `trimString`/去空白：多处重复实现，且与 `WCPLTrimText` 等价（高优先级）

重复点：

- 多个模块各自实现 `wcpl_trimString` / `wcpl_xxx_trimString`，逻辑一致：`NSString` → `stringByTrimmingCharactersInSet` → 空串转 `nil`。
- 部分文件甚至仅把 `wcpl_trimString` 作为 `WCPLTrimText` 的薄包装（完全冗余）。

证据：

- 公共实现：`WeChatPluginDev/wapleodtcorexpc/src/WCPLPureHelpers.m`：`WCPLTrimText`
- 重复/包装：
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopHook.xm`：`wcpl_trimString`
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLPush2ChatHook.xm`：`wcpl_trimString`
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageHookCommon.xm`：`wcpl_trimString`
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLIgnoreUIHook.xm`：`wcpl_ignoreUI_trimString`
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLDouyinParserHook.xm`：`wcpl_douyin_trimString`
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLRevokeHook.xm`：`wcpl_trimString`（直接 `return WCPLTrimText(text)`）

收口建议：

- 逐步删除各模块本地 `trimString`，统一调用 `WCPLTrimText`，避免出现“同名不同语义/空串处理不同”的漂移风险。

风险/边界：

- 个别调用点如果依赖“保留空串”语义，需要先确认；但当前扫描到的实现均与 `WCPLTrimText` 一致（空串→nil）。

---

### 23) ServiceCenter/service lookup：多处自建 `MMServiceCenter.defaultCenter + getService:`（高优先级）

重复点：

- 多个功能模块直接 `objc_getClass("MMServiceCenter")` → `defaultCenter` → `getService:` 获取服务实例；与项目已有 `WCPLServiceCenter`/`WCPLServiceCenterAdapter` 重复，且容易绕过其“多版本兼容策略”（例如 `MMContext.currentContext` 等）。

证据：

- 统一入口已存在：
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLServiceCenter.m`：`WCPLGetServiceCenter` / `WCPLGetService`
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLServiceCenterAdapter.m`：`WCPLServiceCenterAdapterGetService*`
- 仍在各处自建/直连：
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLVoiceForwardCore.xm`：`wcpl_serviceByClass`
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageSearchPresentationBridge.xm`：`wcpl_pushSearchSceneFallback`（直接取 `MMMsgLogicManager`）
  - `WeChatPluginDev/wapleodtcorexpc/src/WCHookMessageNavigator.m`：存在同类中心获取（见第 10 条）

收口建议：

- 统一改为调用 `WCPLServiceCenterAdapterGetService(...)`（或 `WCPLGetService(...)`），并把“需要的 serviceClassName”收口在 adapter 层，业务/Hook 层不再扩散 `MMServiceCenter` 访问（对齐 ADR-0002）。

风险/边界：

- 少数服务可能在不同中心返回不同实例；收口时需要通过日志对比验证“旧中心 vs 新入口”拿到的对象类型/关键行为一致。

---

### 24) 状态栏高度/安全区 top inset：多套实现（中优先级）

重复点：

- 不同模块各自实现“状态栏高度/顶部安全区”计算：有的走 WeChat 私有工具类，有的走 `UIStatusBarManager`，fallback 策略不一致。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageSearchPresentationBridge.xm`：`wcpl_miyouStatusBarHeight`（`MMUICommonUtility.normalStatusBarHeight` → keyWindow.safeAreaInsets.top → 20）
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopSummaryPresenter.m`：`wcpl_redEnvelopSummaryStatusBarHeight`（iOS 13 `UIStatusBarManager.statusBarFrame` → 0）

收口建议：

- 抽到基础设施层 `WCPLStatusBarHeight()`（或同名），在内部统一“优先级与 fallback”：
  - iOS 13+：优先 `UIStatusBarManager.statusBarFrame`
  - 其次：keyWindow.safeAreaInsets.top（iOS 11+）
  - 可选：若确需对齐 WeChat 行为，再尝试 `MMUICommonUtility.normalStatusBarHeight`
- 上层业务只调用一个入口，避免两套逻辑长期漂移。

---

### 25) 对第 13 条补充：Logger 也实现“队列重入检测 + sync 安全写盘”（中优先级）

重复点：

- `dispatch_queue_set_specific` + `dispatch_get_specific` 的“同队列内直接执行，否则 dispatch_sync”模式不仅存在于红包/线程安全容器，也存在于日志系统。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLLogger.m`：`dispatch_queue_set_specific` + `dispatch_get_specific` + `dispatch_sync(_logQueue, ...)`（`writeToFileUrgent:`）

收口建议：

- 若后续落地第 13 条的统一封装，应把 Logger 也纳入复用范围，避免出现“修复死锁/性能问题要改多处”的治理成本。

---

### 26) 对第 5 条补充：Top visible VC 查找逻辑在更多模块重复（中优先级）

重复点：

- “找 keyWindow → rootVC → presented/nav/tab” 的逻辑在更多模块再次出现，且实现细节不同（connectedScenes 支持、fallback window 选择等）。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLIPadLoginHook.xm`：`wcpl_topViewController`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLCrashReporter.m`：`WCPLTopVisibleViewController`（CrashReporter 内部静态实现）

收口建议：

- 以 CrashReporter 的实现为基础（已覆盖 connectedScenes/window 选择），迁移到可复用的 adapter/helper（例如 `WCPLNavigationAdapter` 或新建 UIKit helper），并替换各处散落实现（含第 5 条列举的其它模块）。

---

### 27) Perf 时钟/常驻内存采样：多处重复实现（中优先级）

重复点：

- `systemUptime * 1000` 的毫秒时钟与 `mach_task_basic_info resident_size` 的 RSS 采样在不同入口链路重复实现，命名不同但逻辑一致。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/Tweak.xm`：`wcpl_perf_uptimeMillis` / `wcpl_perf_residentKB`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLEntryPerfHelpers.xm`：`wcpl_entry_perf_uptimeMillis` / `wcpl_entry_perf_residentKB`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageHookCommon.xm`：`wcpl_message_perf_uptimeMillis`

收口建议：

- 抽到一个单点实现（例如 `WCPLPerfClock.{h,m}` 或类似命名）导出：
  - `WCPLUptimeMillis()` / `WCPLResidentKB()`
- Tweak/Entry/Message 链路统一调用，避免未来修复（例如溢出/单位/异常处理）要改多份。

---

### 28) MenuItem 图标应用（tint/renderingMode/KVC）：重复模板（中优先级）

重复点：

- 多处存在“对 icon 做 tintColor + renderingMode → 优先 setIconImage: → fallback KVC 设置 iconImage”的模板代码，仅 tintColor 策略不同。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageHookCommon.xm`：`wcpl_applyMenuItemIconWithTint`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLDouyinParserHook.xm`：`wcpl_douyin_applyMenuItemIcon`

收口建议：

- 抽出通用 helper：`WCPLApplyMenuItemIcon(menuItem, icon, tintColorOrNil)`（或类似），并将 tintColor 策略作为参数/回调，避免各处复制粘贴同一套 KVC/selector 兼容逻辑。

---

### 29) `WCPLMessageLongPressMenuHook.xm`：对多种 Cell 的 Hook 方法完全重复（中优先级）

重复点：

- `AppEmoticonMessageCellView` / `EmoticonMessageCellView` / `ImageMessageCellView` / `VideoMessageCellView` 的 `didMoveToWindow`、`operationMenuItems`、`canPerformAction:withSender:`、`wcpl_handleRepeatMenuItem:` 方法体基本一致，仅 hook 目标类不同。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageLongPressMenuHook.xm`：上述 4 个 `%hook` block 结构重复。

收口建议：

- 以“少量辅助函数 + 极薄方法体”的方式去重（避免复杂宏）：
  - 例如 `wcpl_messageCellDidMoveToWindow(id self)` / `wcpl_messageCellOperationMenuItems(id self, NSArray *orig)` / `wcpl_messageCellCanPerformRepeat(id self, SEL action, id sender)` 等
- 保持 Hook 层薄壳，重复逻辑集中到 helper，降低维护成本与出错面。

---

### 30) `UIApplicationState` → 文本描述：重复实现（低-中优先级）

重复点：

- 多处将 `UIApplicationState` 映射到 `active/inactive/background/unknown(...)` 字符串，逻辑一致但函数名不同。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLCrashReporter.m`：`WCPLApplicationStateDescription`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLPush2ChatHook.xm`：`wcpl_push2chat_applicationStateDescription`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageSearchHook.xm`：`wcpl_messageSearchAppStateDescription`

收口建议：

- 抽到一个可复用的 UIKit helper（例如 `WCPLApplicationStateDescription(state)` 作为公开函数），统一复用，避免日志/诊断文本口径漂移。

---

## 2026-03-16 补充扫描结果（第四轮：补完未覆盖文件）

### 31) 多个 `*Config` 的 `NSUserDefaults` 持久化模板重复（中优先级）

重复点：

- 大量配置类重复实现同一套模板：`+sharedConfig(dispatch_once)` + `+configWithDefaults:` + `-initWithDefaults:` + `defaults` 属性注入 + setter 写回 defaults。
- 这类样板代码分散在多个 config 文件，后续一旦要做“灰度迁移/默认值写回/键重命名/埋点”，需要多点修改。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLAVConfig.m`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLLocationConfig.m`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLLoginConfig.m`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRevokeConfig.m`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLTimelineConfig.m`
- 同类但更复杂：`WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureConfig.m`、`WeChatPluginDev/wapleodtcorexpc/src/WCPLPush2ChatConfig.m`、`WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopConfig.m`、`WeChatPluginDev/wapleodtcorexpc/src/WCPLIgnoreConfig.m`

收口建议：

- 抽一个轻量基础类或 helper（例如 `WCPLUserDefaultsBackedConfig` 或一组 C 函数）统一：
  - “读取（带默认值）/归一化/可选写回默认值”
  - “setter 写回 + removeObjectForKey 规则”
  - “defaults 注入（便于单测/host suite）”

风险/边界：

- 需要避免为了抽象而抽象：建议只收口“最重复、最稳定”的读写模板，不要把每个 config 的领域归一化逻辑强行塞到基类里。

---

### 32) 设置页 TableView 组件创建/Cell 生成：已有工厂但仍到处直写 selector（中优先级）

重复点：

- 项目内已存在 `WCHookTableViewFactory` 封装 `WCTableViewManager/WCTableViewSectionManager/...` 的创建与 selector fallback，但 WCPL 设置链路仍大量直接调用 `objc_getClass("WCTableViewNormalCellManager") ...`，导致“兼容 selector 变化”的逻辑在多处重复出现/难以统一治理。

证据：

- 工厂存在：`WeChatPluginDev/wapleodtcorexpc/src/WCHookTableViewFactory.m`
- 仍在直写：
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLSettingsPageRouter.m`：`wcpl_topLevelEntryCell`
  - `WeChatPluginDev/wapleodtcorexpc/src/WCPLSettingsSectionFactory.m`：大量 `switchCellForSel` / `normalCellForSel`

收口建议：

- 明确“设置页 UI 组件创建”的唯一入口：
  - 要么复用 `WCHookTableViewFactory`（并逐步收口 WCHook/WCPL 并行，呼应第 10 条）
  - 要么新建 `WCPLTableViewFactory` 并把旧工厂归档为 legacy
- 统一 selector 兼容策略，减少散落 `objc_getClass/objc_msgSend` 的维护成本。

---

### 33) 防撤回：XML/CDATA 解析与消息摘要生成在 Hook 与 Adapter 内重复（高优先级）

重复点：

- 防撤回链路存在两套几乎同构的 XML 提取/CDATA strip/摘要生成逻辑（trim → 提取 tag → 180 字摘要等），分别散落在 Hook 与 adapter。
- 同类逻辑重复会导致“摘要口径/匹配规则”漂移，增加误判/漏判概率。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRevokeHook.xm`：
  - `wcpl_extractBetweenTokens` / `wcpl_extractXmlTagValue` / `wcpl_stripCDATAIfNeeded`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRevokeMessageLookupAdapter.m`：
  - `wcpl_revokeLookupExtractBetween` / `wcpl_revokeLookupXMLValue` / `wcpl_revokeLookupStripCDATA`
  - `wcpl_revokeLookupDigest`（对 type=49 的 title/des 提取与摘要）

收口建议：

- 将“XML/CDATA/摘要”收口到一个可编译的纯 helper（例如 `WCPLRevokeTextHelpers` 或扩展 `WCPLPureHelpers`），Hook 与 adapter 只调用，不再各自维护。
- `wcpl_revokeLookupNormalizedSessions` 可直接替换为 `WCPLSanitizeIdentifierArray`，避免再次自写 trim+dedupe。

风险/边界：

- 防撤回匹配属于高敏感逻辑：收口时要确保 maxLen、tag 优先级与 fallback 行为保持一致；避免引入“静默吞错”。

---

### 34) “单行化 + 截断”的文本归一化在多模块重复（中优先级）

重复点：

- 多处都在做：`trim` → `\r/\n` 替换为空格 → 截断（有时加 `…`）的单行化逻辑；与 `WCPLSanitizeInlineText` 的职责高度重叠（见第 11 条），但仍分散存在不同变体。

证据（出现 `stringByReplacingOccurrencesOfString:@"\r"`/`\n` 的多处实现/调用）：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLAlertTextHelpers.m`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLLogUploader.m`：`WCPLResponseTextSnippet`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLCrashReporter.m`：`WCPLNormalizeCrashText`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRevokeAnchor.m`：`wcpl_revokeDedupSuffix`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopRequestParser.m` / `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopEntryCoordinator.m`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopHook.xm` / `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopSessionResolver.m`

收口建议：

- 明确一个“单行摘要”公共入口（优先复用 `WCPLSanitizeInlineText`；必要时补一个支持自定义 maxLen/是否加省略号的 helper）。
- `WCPLLogUploader` 的 NSData→string→snippet 也可复用同一套“单行摘要”逻辑，避免摘要口径漂移。

风险/边界：

- `WCPLCrashReporter` 同时包含 signal handler：必须确认归一化函数只在非 signal 上下文调用，避免把 Objective‑C 分配带入信号处理路径。

---

### 35) `filehelper` 特例判断重复（中优先级）

重复点：

- 多个功能模块都需要对 `filehelper` 做跳过/特殊处理，但各自实现 `caseInsensitiveCompare:@"filehelper"` 或常量，易出现口径漂移（大小写、trim、nil/空串处理）。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageSearchNavButtonHelpers.xm`：`wcpl_shouldSkipChatSearchButtonInjection`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureDebugHelpers.xm`：`wcpl_shouldSkipCellGestureEnhancements`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopHook.xm`：`kWCPLFileHelperUserName` + 相关分支
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopSessionResolver.m`：对 `filehelper` 的 target 分支

收口建议：

- 抽一个纯 helper：`WCPLIsFileHelperUserName(name)`（内部做 trim + case-insensitive），并作为“唯一口径”复用到各模块。

---

### 36) 选择器/Picker 控制器实现分裂：存在三套并行 UI（中优先级）

重复点：

- 当前同时存在：
  1) `WCPLFriendPickerViewController` / `WCPLGroupPickerViewController`（见第 8 条）
  2) `WCPLUnifiedMultiSelectViewController`（WeChat 原生 ContactSelectView 封装）
  3) `WCPLContactGroupPickerViewController`（基于 `WCPLPickerItem` 的通用 UITableView picker）
- 三套实现都包含“搜索过滤、预选回显、完成/取消、选择计数展示”等高度重叠的 UI 状态机与行为。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLUnifiedMultiSelectViewController.m`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLContactGroupPickerViewController.m`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLFriendPickerViewController.m` / `WeChatPluginDev/wapleodtcorexpc/src/WCPLGroupPickerViewController.m`（已在第 8 条记录）

收口建议：

- 明确“唯一主 picker”方向：
  - 若能依赖 WeChat 原生联系人选择：以 `WCPLUnifiedMultiSelectViewController` 为主，逐步替换 friend/group picker
  - 若需支持自定义 item：抽一个共享的 picker base（搜索/分段/计数/回调）供两类 picker 复用

---

### 37) `WCPLUnifiedMultiSelectViewController` 再次扩散用户名解析/KVC 访问（高优先级，补充第 1/19 条）

重复点：

- `WCPLUnifiedMultiSelectViewController` 内部自建 `wcpl_userNameFromObject:`，用多 key KVC 读取 `m_nsUsrName/m_nsUserName/...`；这与 `WCPLContactAdapterSafeUserName`（第 1 条）/`WCPLPickerDataProvider`（第 19 条）同类重复，且把私有字段访问再次扩散到非 adapter 层。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLUnifiedMultiSelectViewController.m`：`wcpl_userNameFromObject:`（KVC keys 列表）

收口建议：

- 统一改为调用 `WCPLContactAdapterSafeUserName`（或 `WCPLContactLookup`/adapter 提供的统一入口），并在 adapter 内维护“字段/selector/兼容策略”。

---

### 38) 手势动作值归一化：同一套规则在 config 与 include 模块重复（中优先级）

重复点：

- 归一化规则（0..5，撤回仅 self 可用）在多个位置重复实现，未来扩展动作枚举时需要多处同步修改。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureConfig.m`：`wcpl_normalizeSwipeActionValue`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLGesturePureHelpers.xm`：`wcpl_normalizeSwipeActionValueLegacyAware`

收口建议：

- 抽成单点公共函数（例如 `WCPLNormalizeGestureAction(action,isSelf)`），config 与运行时逻辑统一复用。

---

### 39) View 层级遍历/容器查找：两套几乎相同的“找表格/收集 cell”工具并存（中优先级）

重复点：

- “沿 superview 向上找 UITableView/UITableViewCell”与“递归收集 message cell views”的工具在不同模块各自实现，逻辑高度一致但命名不同。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCHookSwipeUtilities.m`：
  - `WCHookFindContainingTableViewCell` / `WCHookFindContainingTableView`
  - `WCHookCollectMessageCellViewsFromView`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureHookCommon.xm`：
  - `wcpl_findContainingTableView`
  - `wcpl_collectMessageCellViewsInView`

收口建议：

- 选择一个“公共遍历工具”作为唯一实现（建议放在可编译 helper/adapter 内），其余仅调用；并明确“收集目标类”（`BaseMessageCellView` vs `CommonMessageCellView`）作为参数/策略，避免再复制一份递归。

---

### 40) `CGRect` 合法性判定/最小尺寸/相交判断：大量重复片段（中优先级）

重复点：

- 多个 UI/手势模块反复出现同类判定：`CGRectIsEmpty/Null/Infinite + width/height>阈值 + intersectsRect(bounds)`，阈值与口径略有差异，维护成本高且易引入边界 bug。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRepeatButtonHook.xm`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureLayoutHelpers.xm`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureTapPolicyHelpers.xm`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureCellContextHelpers.xm`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageTimeHook.xm`（同类 headRect/bodyRect 判定）

收口建议：

- 抽取一组小型几何 helper（纯函数/inline），例如：
  - `WCPLCGRectIsUsableInBounds(rect, bounds, minSide)`
  - `WCPLCGRectClampToBounds(rect, bounds)`
- 统一“阈值来源”（常量集中），减少多处魔数散落。

---

## 2026-03-16 补扫：此前未在本文出现过的实现文件

说明：

- 本节来自对“尚未在本文出现过的 `.m/.mm/.xm`（排除 Headers）”的补扫。
- 新发现仍以“重复实现/重复片段/可收口点”为主；若某文件未触发新条目，会在本节末尾的“覆盖清单”中记录已扫描。

### 41) “一键已读”右上角菜单 Hook glue：存在双份实现且疑似残留文件（高优先级）

重复点：

- 同一套 top-right-menu 的 icon/title/tint 注入逻辑在两处实现，且 `WCPLMarkAllReadMenuHooks.xm` 看起来已不再被 `WCPLPluginEntryHook.xm` include（容易形成“改了 A 但 B 仍在”的漂移）。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLPluginEntryHook.xm`：`%hook RightTopMenuItemBtn -initWithBtnData:showNew:` + `CAppViewControllerManager`/`NewMainFrameViewController`/`NewMainFrameRightTopMenuBtn`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMarkAllReadMenuHooks.xm`：同名 hook 逻辑（注释宣称“for WCPLPluginEntryHook.xm”，但当前未见 include）

收口建议：

- 只保留一份 hook glue：
  - 若以 `WCPLPluginEntryHook.xm` 作为唯一入口：删除或明确加入 `WCPL_BLOCKED_FILES`，避免将来误编译 `WCPLMarkAllReadMenuHooks.xm`。
  - 若希望独立 include-only：让 `WCPLPluginEntryHook.xm` 只 include 一处实现，禁止复制粘贴二次实现。

风险/边界：

- 若两份代码未来被同时编译/初始化，极易产生“重复 Hook / 逻辑执行两次”的隐性问题；应先核对 `Makefile` 白名单/blocked files 再动刀。

---

### 42) `isViewLoaded`/safe view 获取：adapter 与 include 模块各写一份（中优先级）

重复点：

- “如果 VC 未 load view 则返回 nil，否则取 `controller.view`”的逻辑在多个地方重复出现（命名/调用方式不同），且有的实现还顺便做了 navigationController 的 view/window 推断。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLNavigationAdapter.m`：`WCPLNavigationAdapterLoadedView`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageSearchResidualCleanup.xm`：`wcpl_safeViewIfLoaded`（被 `WCPLMessageSearchStateStore.xm`/ResidualCleanup 多处使用，并会被拼入生成产物 `src/WCPLMessageHook.xm`）

收口建议：

- 以 `WCPLNavigationAdapter` 作为唯一实现位置，提供：
  - `WCPLNavigationAdapterLoadedView(viewController)`
  - （可选）`WCPLNavigationAdapterWindowForController(viewController)`（若确需“从 VC 推断 window”）
- include-only 模块只调用 adapter，避免同类 helper 在生成产物里继续增长。

---

### 43) `@chatroom` 判断口径不统一：重复且大小写策略不一致（中优先级）

重复点：

- 多处通过 `rangeOfString:@"@chatroom"` 判断群聊；有的大小写敏感、有的 case-insensitive、有的还做 trim（口径漂移会导致“特殊用户名/大小写”边界行为不一致）。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLSafeStringContact.m`：`-isChatroom`（case-insensitive）
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRepeatActionHook.xm`：`[chatName rangeOfString:@"@chatroom"]...`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLSettingsSelectionStore.m`：多处 `rangeOfString:@"@chatroom"`（用于筛选 chatroom/user）
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLPureHelpers.m` / `WeChatPluginDev/wapleodtcorexpc/src/WCPLContactAdapter.m`：已存在/接近“统一口径”的实现

收口建议：

- 统一使用 `WCPLIsChatRoomName(name)`（或在 `WCPLContactAdapter` 暴露等价入口），其余地方禁用裸 `rangeOfString:@"@chatroom"` 判断。

风险/边界：

- 某些链路依赖“未 trim 的原始 sessionUserName”，收口时要明确：helper 是否 trim、是否允许大小写混用、返回值对 nil/空串的语义。

---

### 44) 手势动作枚举值（0..5）在 UI 与运行时各写一份映射（中优先级）

重复点：

- 动作值（引用/关闭/删除/撤回/复读/转发）在设置页 picker 与手势执行 switch 中重复硬编码，且第 38 条已指出“归一化规则”也有多处实现；三处一旦不同步就会产生行为错配。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLSettingsPickerCoordinator.m`：`showActionPickerWithTitle:isSelf:completion:`（直接使用 0/1/2/3/4/5）
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLSwipeQuoteHook.xm`：`// 0=引用, 1=关闭, 2=删除...` + `switch (action)`

收口建议：

- 定义单一枚举/常量源（例如 `typedef NS_ENUM(NSInteger, WCPLGestureAction)`）并提供：
  - `WCPLGestureActionNormalize(action,isSelf)`（替代多处 normalize）
  - `WCPLGestureActionTitle(action)`（供 UI）
- UI picker 与运行时逻辑统一依赖该枚举，禁止裸数字散落。

---

### 45) “可选 selector 调用 + @try/@catch + objc_msgSend”模板在多个 Hook 反复复制（中优先级）

重复点：

- 多个 hook 为了调用可选 selector（例如 `wchook_tryHandleDoubleTapFromTouches:event:`、`hideMenuFromView:`、`inputPresenter`/`replyMessage...`）重复写：`respondsToSelector` + `objc_msgSend` + `@try/@catch` + 默认返回值。
- 这与第 3 条“安全访问工具重复”同类，但在补扫文件中仍出现新的“私有版本”。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLDoubleTapHook.xm`：多处调用 `wchook_tryHandleDoubleTapFromTouches:event:` 的 try/catch 模板
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLSwipeQuoteHook.xm`：`wchook_tryHandleDoubleTapFromTouches:event:` 内对 `anyObject` 的 msgSend try/catch；以及引用回复链路里对 `hideMenuFromView:`、`inputPresenter`、`replyMessage...` 的 msgSend try/catch
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLTimelineAdHook.xm`：`wcpl_timeline_safeGetProperty`（通用 safe-call 的局部再实现）
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRepeatCellAdapter.m`：selector/KVC 轮询 + try/catch

收口建议：

- 以第 3 条建议的“统一 safe objc call helper”落地为主，把这些局部实现逐步替换为统一入口（并统一日志/默认返回语义）。

风险/边界：

- 不能引入静默吞错：helper 内必须保留现有可追踪性（例如统一 `WCPLCatchLog`/warning），并保持返回值语义一致（nil/NO/CGRectZero）。

---

### 46) AppMsg(XML) 解析/判定规则重复：引用回复/合并转发/文件/表情（中优先级）

重复点：

- 多处通过 “AppMsg(type=49) + XML markers” 来判断：
  - 是否引用回复（`<refermsg...` / `<type>57</type>` 等）
  - 是否合并转发（type=19 + `<recorditem>`/`<datalist>`/`<recordxml>`）
  - 是否文件（type=6 + `<appattach>`/`<fileext>`）
  - 是否表情（`<emoji>`/`<emoticon>` 或 md5）
- 这些规则当前散落在不同功能模块里，marker 列表与解码策略不统一，且部分逻辑已在 `WCPLPureHelpers.m` 有更可靠的实现（regex/解码等）。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureRepeatEligibilityHelpers.xm`：`wcpl_isQuoteReplyAppMessage` / `wcpl_isFileAppMessage` / `wcpl_isAppEmoticonMessage` / `wcpl_isMergedForwardAppMessage` / `wcpl_appMessageInnerTypeFast`
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLRevokeHook.xm`、`WeChatPluginDev/wapleodtcorexpc/src/WCPLRevokeMessageLookupAdapter.m`、`WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageHookCommon.xm`：各自对 `<refermsg`/`<type>57</type>` 的判定与提取
- `WeChatPluginDev/wapleodtcorexpc/src/WCPLPureHelpers.m`：`WCPLQuoteReferServerIDFromContent` / `WCPLExtractXMLValue`（含解码+regex 策略）

收口建议：

- 新建“AppMsg 解析”纯 helper（可编译），统一维护 marker 列表与解码策略，并优先复用 `WCPLPureHelpers.m` 已有的引用回复提取能力：
  - `WCPLIsQuoteReplyAppMessageContent(content)` / `WCPLQuoteReferServerIDFromContent(content)`
  - `WCPLAppMessageInnerType(wrap)`（统一 selector/KVC 优先级）
  - `WCPLIsMergedForwardAppMessage(content/innerType)`、`WCPLIsFileAppMessage(content/innerType)` 等
- 手势 eligibility / 撤回提示 / 消息本地替换等模块统一调用该 helper，禁止再次复制 marker 数组。

---

### 47) 设置入口版本/标题等“多份真相”：硬编码字符串会与包版本漂移（中优先级）

重复点：

- 插件版本在设置入口 include-only 里硬编码为字符串常量，属于“与打包元数据重复的一份真相”，易出现显示版本与实际 deb/info 不一致。

证据：

- `WeChatPluginDev/wapleodtcorexpc/src/WCPLEntrySettingsUIHelpers.xm`：`static NSString *const kWCPLEntryPluginVersion = @"1.8.36";`

收口建议：

- 版本号改为从单一来源读取（例如 bundle 的 `CFBundleShortVersionString`/`CFBundleVersion`，或 Theos 打包时注入的版本常量），并避免在多个入口重复维护。

---

### 覆盖清单（本节补扫对象；排除 Headers）

以下实现文件在本轮补扫前未在本文出现过，现已完成扫描（未触发新条目的文件仅在此处留痕）：

```
WeChatPluginDev/wapleodtcorexpc/legacy/Tweak.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLAVManager.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLClownFeatureHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLConfigCenter.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLConfigSanitizer.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLDoubleTapHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLEntrySettingsControllerHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLEntrySettingsUIHelpers.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLGestureRepeatEligibilityHelpers.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLLegacyUIKitCompat.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLMarkAllReadMenuHooks.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageLocalReplaceHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageSearchCore.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageSearchResidualCleanup.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLMessageSearchStateStore.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLNavigationAdapter.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLPickerItem.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLPluginEntryHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLQuitMonitorHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLRedEnvelopTaskManager.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLRepeatActionHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLRepeatButtonEngine.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLRepeatCellAdapter.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLSafariOpenHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLSafeStringContact.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLSettingsPageContext.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLSettingsPickerCoordinator.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLSettingsSelectionCoordinator.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLSharedConfigHelpers.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLSwipeQuoteHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLSystemHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLTimelineAdHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WCPLTypeGuard.m
WeChatPluginDev/wapleodtcorexpc/src/WCPLVoiceForwardHook.xm
WeChatPluginDev/wapleodtcorexpc/src/WeChatRedEnvelopParam.m
WeChatPluginDev/wapleodtcorexpc/tests/WCPLUnitTests.m
```

---

## 2026-03-16 落地记录

- [x] 9) 日志/崩溃的“App 上下文信息”字符串：新增 `WCPLBuildAppContextInfoString()`，`WCPLLogger`/`WCPLCrashReporter` 复用（`src/WCPLAppContextInfo.*`）。
- [x] 11) 内联文本清理（去换行/截断/省略号）重复：删除红包链路内 `wcpl_redEnvelop*SanitizeInlineText` 变体，统一调用 `WCPLSanitizeInlineText`。
- [x] 12) 红包 `sessionUserName` 归一化重复：`WCPLRedEnvelopOpenReplyTracker` 复用 `WCPLRedEnvelopNormalizeSessionUserName`。
- [x] 20) 退群监控成员列表去重/trim：删除 `QuitMonitorService` 内重复实现，`QuitMonitorHelpers/Service` 统一复用 `WCPLSanitizeIdentifierArray`。
- [x] 16) 设置页选择结果过滤：收敛 chatroom/friend 的对称过滤逻辑为单一实现（`WCPLSettingsSelectionStore`）。
- [x] 14) 红包 `sendId/sign` 追踪 token 生成重复：抽为 `WCPLRedEnvelopTrackToken(sendId,sign)`，多个 tracker 复用。
- [x] 42) `isViewLoaded`/safe view 获取重复：`WCPLMessageSearchResidualCleanup` 复用 `WCPLNavigationAdapterLoadedView`，移除本地 `wcpl_safeViewIfLoaded`。
- [x] 43) `@chatroom` 判断口径不统一：替换裸 `rangeOfString:@"@chatroom"` 为 `WCPLIsChatRoomName`（设置筛选/红包/复读等链路）。
- [x] 47) 设置入口版本硬编码：通过 Makefile 从 `control` 注入 `WCPL_PACKAGE_VERSION`，设置入口 UI 复用该单一来源。
- [x] 1) 用户名解析/联系人识别重复：统一调用 `WCPLContactAdapterSafeUserName`，并在 picker/推送跳转等链路替换散落实现（`src/WCPLContactAdapter.*` 等）。
- [x] 2) `CContactMgr` 查联系人 selector 轮询重复：收口到统一入口（`src/WCPLContactAdapter.*` / `src/WCPLContactLookup.m` / `src/WCPLFuncService.m` 等）。
- [x] 3) 安全访问工具重复：新增 `WCPLObjcSafeCall`，并逐步替换 KVC/ivar/`objc_msgSend` 的私有包装（`src/WCPLObjcSafeCall.*`）。
- [x] 4) 本地消息入库重复：新增 `WCPLMessagePersistenceAdapter`，统一 `AddLocalMsg*` 多版本选择（`src/WCPLMessagePersistenceAdapter.*`）。
- [x] 5) “最顶层可见 VC” 查找重复：抽到 `WCPLUIKitHelpers` 并复用（`src/WCPLUIKitHelpers.*`）。
- [x] 6) `MMLoadingView` 创建/启停重复：抽到 `WCPLLoadingViewHelpers` 并复用（`src/WCPLLoadingViewHelpers.*`）。
- [x] 7) SVG/系统图标构建与应用模板重复：抽到 `WCPLIconImageHelpers`/`WCPLMenuItemIconHelpers` 并复用（`src/WCPLIconImageHelpers.*` / `src/WCPLMenuItemIconHelpers.*`）。
- [x] 8) Picker presenter 重复：抽 `WCPLPickerPresenterBaseViewController` + `WCPLOnceFlag`，friend/group picker 变薄（`src/WCPLPickerPresenterBaseViewController.*` / `src/WCPLOnceFlag.h`）。
- [x] 10) `WCHook*` 与 `WCPL*` 并存的历史重复：逐步让 `WCHook*` 复用新 helper；将无引用的 `WCHookSettingsManager` 归档为 blocked（`WeChatPluginDev/wapleodtcorexpc/Makefile`）。
- [x] 13) “队列重入检测 + dispatch_sync 安全封装”重复：抽到 `WCPLDispatchSyncSafe/Barrier*` 并复用（`src/WCPLDispatchUtils.h`）。
- [x] 15) 文件大小读取重复：抽为 `WCPLFileSizeAtPath` 并复用（`src/WCPLFileHelpers.*`）。
- [x] 17) 设置页 `WCTableViewManager` frame 初始化重复：抽为 factory 并复用（`src/WCPLSettingsTableViewManagerFactory.*`）。
- [x] 18) 红包展示名解析重复：红包链路优先复用 `WCPLContactAdapterDisplayNameForContact/ForUserName`，再做场景补充（`src/WCPLRedEnvelopSessionResolver.m`）。
- [x] 19) Picker 数据源用户名/展示名解析重复：改为调用 `WCPLContactAdapter`，避免私有字段访问外溢（`src/WCPLPickerDataProvider.m`）。
- [x] 21) “回调只触发一次”状态机重复：抽为 `WCPLOnceFlag` 并复用到 UI 与 Operation（`src/WCPLOnceFlag.h` / `src/WCPLReceiveRedEnvelopOperation.m`）。
- [x] 22) `trimString`/去空白重复：主链路删除本地 `trimString` 实现，统一复用 `WCPLTrimText`（`src/WCPLPureHelpers.m` 等）。
- [x] 23) ServiceCenter/service lookup 重复：统一改为调用 `WCPLGetService(...)` / `WCPLServiceCenterAdapterGetService(...)`（`src/WCPLServiceCenter.*`）。
- [x] 24) 状态栏高度/安全区 top inset 重复：抽为 `WCPLStatusBarHeight()` 并复用（`src/WCPLUIKitHelpers.*`）。
- [x] 25) Logger 的“队列重入检测 + sync 安全写盘”：纳入 `WCPLDispatchSyncSafe` 复用范围（`src/WCPLLogger.m`）。
- [x] 26) Top visible VC 查找补充重复：统一改用 `WCPLTopVisibleViewController()`（`src/WCPLCrashReporter.m` / `src/WCPLIPadLoginHook.xm` 等）。
- [x] 27) Perf 时钟/RSS 采样重复：抽为 `WCPLPerfClock` 并复用（`src/WCPLPerfClock.*`）。
- [x] 28) MenuItem 图标应用模板重复：抽为通用 helper 并复用（`src/WCPLMenuItemIconHelpers.*`）。
- [x] 29) `WCPLMessageLongPressMenuHook.xm` 多 Cell hook 方法重复：抽公共 helper 降低重复方法体（`src/WCPLMessageLongPressMenuHook.xm`）。
- [x] 30) `UIApplicationState` → 文本描述重复：抽到 `WCPLApplicationStateDescription` 并复用（`src/WCPLUIKitHelpers.*`）。
- [x] 31) 多个 `*Config` 的 `NSUserDefaults` 持久化模板重复：抽为 `WCPLUserDefaultsBackedConfig` 并复用（`src/WCPLUserDefaultsBackedConfig.*`）。
- [x] 32) 设置页 TableView 组件创建/Cell 生成重复：增强/复用 `WCHookTableViewFactory` 并收口 selector 兼容策略（`src/WCHookTableViewFactory.*` 等）。
- [x] 33) 防撤回 XML/CDATA 解析与摘要生成重复：抽到可编译 helper/adapter 并复用（`src/WCPLRevokeMessageLookupAdapter.*` 等）。
- [x] 34) “单行化 + 截断”文本归一化重复：统一复用 `WCPLSanitizeInlineText`（`src/WCPLAlertTextHelpers.*` + 多处调用点）。
- [x] 35) `filehelper` 特例判断重复：抽为 `WCPLIsFileHelperUserName` 并复用（`src/WCPLUserNameHelpers.*`）。
- [x] 37) `WCPLUnifiedMultiSelectViewController` 用户名解析重复：改用 `WCPLContactAdapterSafeUserName` 收口（`src/WCPLUnifiedMultiSelectViewController.m`）。
- [x] 38) 手势动作值归一化重复：抽为 `WCPLNormalizeGestureActionValue`（`src/WCPLGestureActionHelpers.*`）。
- [x] 39) View 层级遍历/容器查找重复：抽为 `WCPLViewTraversalHelpers` 并复用（`src/WCPLViewTraversalHelpers.*` 等）。
- [x] 40) `CGRect` 合法性判定/最小尺寸/相交判断重复：抽为 `WCPLGeometryHelpers` 并逐步替换（`src/WCPLGeometryHelpers.h` + 多处调用点）。
- [x] 41) “一键已读”右上角菜单 Hook glue 双份实现：拆分为独立编译并收口对外头（`src/WCPLMarkAllReadService.h` 等）。
- [x] 44) 手势动作枚举值映射重复：统一枚举/显示名（`src/WCPLGestureActionHelpers.*`）。
- [x] 45) “可选 selector 调用 + @try/@catch + objc_msgSend”模板重复：扩展/复用 `WCPLObjcSafeCall` 并替换多处实现（`src/WCPLObjcSafeCall.*`）。
- [x] 46) AppMsg(XML) 解析/判定规则重复：新增 `WCPLAppMessageHelpers` 并替换散落 marker 实现（`src/WCPLAppMessageHelpers.*`）。
- [x] 36) 选择器/Picker 控制器实现分裂：设置页多选入口改用 `WCPLContactGroupPickerViewController`，统一收口到同一套 picker UI（`src/WCPLSettingsPickerCoordinator.m`）。
