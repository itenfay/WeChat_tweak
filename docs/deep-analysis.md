# 微信辣椒（wapleodtcorexpc）— 项目深度分析

> 生成时间：2026-02-11 | 基于 master 分支最新代码

---

## 一、项目概览

| 项 | 值 |
|---|---|
| **项目名** | 微信辣椒 (WeChat Pepper / wapleodtcorexpc) |
| **包名** | `com.aple.wapleodtcorexpc` |
| **版本** | 1.8.22 |
| **目标应用** | `com.tencent.xin`（微信） |
| **类型** | iOS Tweak（MobileSubstrate / ElleKit / libhooker 动态注入） |
| **构建系统** | Theos（支持 rootless / roothide） |
| **目标架构** | arm64 / arm64e |
| **最低 iOS** | 14.0 |
| **总代码量** | **~22,301 行**（82 个源文件：`.xm` + `.m` + `.h`） |
| **依赖** | `mobilesubstrate \| ellekit \| libhooker` |
| **框架引用** | UIKit, AVFoundation, CoreLocation |

---

## 二、目录结构

```
WeChat_tweak/
├── WeChatPluginDev/wapleodtcorexpc/   ← 核心插件源码
│   ├── src/                           ← 所有 .xm/.m/.h 源文件（82个）
│   ├── Headers/                       ← 微信逆向头文件（WeChat 8.0.54/55）
│   ├── Makefile                       ← Theos 构建配置
│   ├── control                        ← Debian 包描述
│   ├── wapleodtcorexpc.plist          ← MobileSubstrate filter
│   ├── scripts/                       ← 构建辅助脚本
│   ├── tests/                         ← 测试目录
│   └── packages/                      ← 构建产物 .deb
├── .claude/ .autoflow/                ← AI 辅助工作流配置
├── artifacts/                         ← 构建归档
├── plugin_source/                     ← 插件原始资源
├── scripts/                           ← 全局构建/部署脚本
├── Dynamic library/                   ← 动态库相关
├── Hook-Tools/                        ← Hook 工具集
├── Resources/                         ← 资源文件
└── images/                            ← README 图片
```

---

## 三、构建系统分析

**`Makefile` 关键点：**

- **双架构**：默认 `arm64 arm64e`，Linux 下根据 `THEOS_PACKAGE_SCHEME` 自适应
- **排除文件**：Makefile 显式排除了 6 个 Picker 相关的 `.m` 文件（已废弃的联系人选择器）
- **ARC 启用**：全局 `-fobjc-arc`，部分文件额外单独声明
- **部署方式**：`after-install:: killall -9 WeChat`（安装后强杀微信重载）
- **SSH 部署**：`THEOS_DEVICE_IP=localhost THEOS_DEVICE_PORT=2222`（USB 隧道）

---

## 四、架构设计（模块拆分）

项目采用 **双层架构**：新版 `WCPLConfigCenter` 配置中心 + 旧版 `WCPLRedEnvelopConfig` 单例并存。

### 4.1 Hook 层（`.xm` 文件） — 运行时注入点

| 文件 | 行数 | 职责 |
|---|---|---|
| **`WCPLGestureHook.xm`** | 5,539 | 复读机按钮、滑动手势（左滑引用/右滑操作）、复读消息转发 |
| **`WCPLRedEnvelopHook.xm`** | 2,454 | 红包自动抢、红包详情页摘要、红包通知 |
| **`Tweak.m`** | 2,092 | 主 Hook 入口：插件注册、防撤回、红包核心、复读、消息屏蔽、越狱隐藏、虚拟定位 |
| **`WCPLMessageHook.xm`** | 1,731 | 消息管道 Hook：搜索桥接、"小丑"本地替换、消息屏蔽过滤、长按菜单注入 |
| **`WCPLSendGuard.xm`** | 475 | 发送防护：拦截空文本/语音XML误发 |
| **`WCPLUIHook.xm`** | 380 | UI Hook：设置入口注入、群聊/好友页屏蔽开关 |
| **`WCPLRevokeHook.xm`** | 281 | 防撤回专用 Hook（新版 ConfigCenter） |
| **`WCPLSystemHook.xm`** | 37 | 系统级 Hook：虚拟定位、越狱检测绕过 |
| **`Tweak.xm`** | 74 | 启动引导：运行时诊断、Crash Reporter 初始化 |

### 4.2 配置层

| 类 | 职责 |
|---|---|
| **`WCPLConfigCenter`** | 新版配置中心（单例），聚合 6 个子配置 |
| `WCPLRedEnvelopConfig` | 红包 + 旧版综合配置（遗留） |
| `WCPLGestureConfig` | 滑动手势配置 |
| `WCPLLocationConfig` | 虚拟定位配置 |
| `WCPLIgnoreConfig` | 消息屏蔽配置 |
| `WCPLAVConfig` | 音视频/第三方播放配置 |
| `WCPLRevokeConfig` | 防撤回配置 |
| `WCPLConfigSanitizer` | 配置校验/清洗 |

### 4.3 业务服务层

| 类 | 职责 |
|---|---|
| **`WCPLFuncService`** | 消息过滤核心、屏蔽同步系统免打扰 |
| `WCPLServiceCenter` | 微信 `MMServiceCenter` 安全封装 |
| `WCPLContactLookup` | 联系人安全查询 |
| `WCPLReceiveRedEnvelopOperation` | 单个红包抢取操作（NSOperation） |
| `WCPLRedEnvelopTaskManager` | 红包任务队列管理（串行/并行） |
| `WCPLRedEnvelopParamQueue` | 红包参数缓存队列 |
| `WeChatRedEnvelopParam` | 红包参数模型 |

### 4.4 UI 层

| 类 | 职责 |
|---|---|
| **`WCPLSettingViewController`** | 主设置页（1,205 行） |
| `WCPLBaseViewController` | VC 基类 |
| `WCPLLogSettingsViewController` | 日志设置页 |
| `WCPLMultiSelectContactsViewController` | 多选联系人 |
| `WCPLMultiSelectGroupsViewController` | 多选群聊 |
| `WCPLContactGroupPickerViewController` | 联系人/群选择器 |

### 4.5 基础设施层

| 类 | 职责 |
|---|---|
| **`WCPLCrashReporter`** | Crash 捕获与上报（413 行） |
| **`WCPLLogger`** | 多级日志系统 |
| `WCPLLogUploader` | 日志上传 |
| `WCPLRealtimeLogUploader` | 实时日志推送 |
| `WCPLThreadSafeMutableDictionary` | 线程安全字典 |
| `WCPLAVManager` | 音视频捕获管理 |

### 4.6 滑动手势子系统

| 类 | 职责 |
|---|---|
| `WCHookSwipeUtilities` | 滑动物理计算（阈值、方向、弹簧动画） |
| `WCHookMessageNavigator` | 引用消息跳转导航 |
| `WCHookSettingsManager` | Hook 设置管理 |
| `WCHookTableViewFactory` | 设置页 TableView 工厂 |

---

## 五、功能清单（全部功能）

### 1. 自动抢红包

- Hook `WCRedEnvelopesLogicMgr.OnWCToHongbaoCommonResponse:Request:`
- Hook `CMessageMgr.AsyncOnAddMsg:MsgWrap:`（监听红包消息 type=49）
- 支持：延时抢取、串行队列、群聊白名单、抢自己的红包
- 红包打开后自动回复 / 通知文件传输助手
- 红包详情页显示总额摘要

### 2. 防撤回

- 双 Hook 覆盖：`CMessageMgr.onRevokeMsg:` + `MessageRevokeMgr.onRevokeMsg:/replaceRevokedMsg:/deleteLocalProcessRevokeMsgWithToast:`
- 拦截他人撤回，生成本地提示消息："已拦截撤回：xxx 原消息：[图片]"
- 自己的撤回不拦截

### 3. 复读机（+1 按钮）

- 在 7 种消息 Cell 上注入 "+1" 按钮：Text / App / AppEmoticon / Emoticon / Voice / Image / Video
- 支持消息类型：文本、表情包、语音（转发录音）、引用回复、视频
- 按钮带触觉反馈、节流防抖（50ms）

### 4. 滑动手势系统

- **左滑**：引用回复 / 复读 / 删除 / 撤回（可配）
- **右滑**：独立配置另一组操作
- 分级触觉反馈（轻触发 35% / 重触发 85%）
- 双向滑动支持、弹簧回弹动画
- 独立开关：左滑开/右滑开/总开关

### 5. "小丑" 本地临时替换

- 长按消息菜单注入"小丑"选项（带自定义 SVG 图标）
- 支持 3 种消息类型：纯文本 / 引用回复 / 转账消息
- 转账消息可修改显示金额（XML 内 `feedesc/receiverdesc/senderdesc` 全替换）
- 仅本地显示，离开聊天页自动恢复
- 复制操作复制原文而非替换文

### 6. 消息屏蔽

- 群聊屏蔽（在群聊设置页注入开关）
- 好友屏蔽（在好友资料页 + 好友设置页注入开关）
- 消息过滤：`CMessageMgr.GetMsgByCreateTime` + `SyncCmdHandler.BatchAddMsg`
- 屏蔽时同步微信系统免打扰状态

### 7. 虚拟定位

- Hook `MMLocationMgr.locationManager:didUpdateToLocation:fromLocation:`
- 替换为用户设定的经纬度

### 8. 越狱检测绕过

- Hook `JailBreakHelper` 的 4 个方法全部返回 `NO`

### 9. 聊天内搜索直达

- 在聊天页导航栏注入搜索按钮（🔍）
- 搜索桥接：静默 push `ChatRoomInfoViewController` → 触发 `onEditAndSearch` → 搜索关闭自动 pop 回来
- 快照覆盖层遮住中间过渡态

### 10. 第三方视频播放

- `WCPLAVManager` 管理摄像头捕获
- 进入聊天页时启动，离开时停止

### 11. 发送防护（SendGuard）

- 拦截空文本气泡发送
- 拦截语音 XML 文本误发送（`<voicemsg` 标签检测）
- 覆盖 5 个发送管道：
  - `MMInputToolView.sendMsgWithText:`
  - `BypSendMessageMgr.StartSendMsg:`
  - `SendMessageMgr.AddMsgToSendTable:MsgWrap:`
  - `CMessageMgr.AddMsg:MsgWrap:` + `AsyncOnAddMsg` + `AsyncOnPreAddMsg`
  - 多个 `AddLocalMsg` 变体

### 12. 引用消息跳转

- 点击引用消息区域跳转到原消息
- Hook `CommonMessageCellView.handleTapForReferMsg:` / `handleTapReferMessage` / `MMInputToolView.onTapMsgReplyView:`

---

## 六、Hook 点汇总（被 Hook 的微信类）

| 微信类 | Hook 方法数 | 所在文件 |
|---|---|---|
| `MicroMessengerAppDelegate` | 1 | Tweak.m, WCPLUIHook.xm |
| `WCRedEnvelopesLogicMgr` | 2+ | Tweak.m, WCPLRedEnvelopHook.xm |
| `CMessageMgr` | 8+ | Tweak.m, WCPLMessageHook.xm, WCPLSendGuard.xm, WCPLRevokeHook.xm |
| `MessageRevokeMgr` | 3 | Tweak.m, WCPLRevokeHook.xm |
| `NewSettingViewController` | 1 | Tweak.m, WCPLUIHook.xm |
| `BaseMsgContentViewController` | 8+ | Tweak.m, WCPLMessageHook.xm |
| `TextMessageCellView` | 7+ | Tweak.m, WCPLMessageHook.xm |
| `AppMessageCellView` | 2 | Tweak.m |
| `AppEmoticonMessageCellView` | 3 | Tweak.m, WCPLMessageHook.xm |
| `EmoticonMessageCellView` | 3 | Tweak.m, WCPLMessageHook.xm |
| `VoiceMessageCellView` | 2 | Tweak.m |
| `ImageMessageCellView` | 3 | Tweak.m, WCPLMessageHook.xm |
| `VideoMessageCellView` | 2 | Tweak.m, WCPLMessageHook.xm |
| `CommonMessageCellView` | 15+ | Tweak.m |
| `MMInputToolView` | 2 | Tweak.m, WCPLSendGuard.xm |
| `ChatRoomInfoViewController` | 3+ | Tweak.m, WCPLUIHook.xm, WCPLMessageHook.xm |
| `ContactInfoViewController` | 2 | Tweak.m, WCPLUIHook.xm |
| `ContactSettingViewController` | 2 | Tweak.m, WCPLUIHook.xm |
| `SyncCmdHandler` | 1 | Tweak.m, WCPLMessageHook.xm |
| `MMLocationMgr` | 1 | Tweak.m, WCPLSystemHook.xm |
| `JailBreakHelper` | 4 | Tweak.m, WCPLSystemHook.xm |
| `BypSendMessageMgr` | 1 | WCPLSendGuard.xm |
| `SendMessageMgr` | 1 | WCPLSendGuard.xm |
| `WCPayTransferMessageCellView` | 3 | WCPLMessageHook.xm |

---

## 七、设计模式与技术特点

### 7.1 正面设计

- **防御式编程**：几乎每个 `objc_msgSend` / KVC 调用都包裹在 `@try/@catch` 中，防止微信版本变化导致 crash
- **多层 fallback**：获取 `CMessageWrap` 有 5+ 种尝试路径（`getCurrentMessageWrap` → `getMediaWrap` → `viewModel.messageWrap` → `viewModel.msgWrap` → KVC）
- **关联对象（Associated Object）**：大量使用 `objc_setAssociatedObject` 在不修改原类结构的前提下附加状态
- **节流机制**：复读按钮有 50ms 节流，防止 `layoutSubviews` 高频触发
- **Crash 恢复**：`WCPLCrashReporter` + `NSSetUncaughtExceptionHandler` 全局异常捕获
- **启动探针日志**：`wcpl_boot_probe.log` 记录每个启动阶段，便于排查注入失败

### 7.2 架构债务

- **新旧配置并存**：`WCPLConfigCenter`（新）和 `WCPLRedEnvelopConfig.sharedConfig`（旧）同时使用，`Tweak.m` 用旧版，`WCPLMessageHook.xm` / `WCPLUIHook.xm` 用新版
- **代码重复**：`wcpl_trimString` / `wcpl_messageWrapFromCell` / `wcpl_localReplaceMapForController` 等辅助函数在 `Tweak.m` 和 `WCPLMessageHook.xm` 中各有一份近乎相同的实现
- **Tweak.m 过大**：2,092 行，承担了 Hook 入口 + 红包 + 防撤回 + 复读 + 屏蔽 + 定位 + 越狱绕过，应拆分
- **`static` 函数散落**：大量 `static` C 函数定义在 `.xm` 文件顶部，缺乏统一组织

### 7.3 技术栈特色

- **Logos 语法**：`%hook / %end / %orig / %new / %c() / %ctor`
- **运行时内省**：`objc_getClass / class_getInstanceVariable / object_getIvar / MSHookIvar`
- **SVG 图标**：小丑菜单图标通过内联 SVG 字符串 + `WAThemeProxy.svgImageFromData:` 渲染
- **搜索桥接**：一个精巧的"无感跳转"方案 — 快照覆盖 → 无动画 push → 轮询等待 → 触发搜索 → 搜索关闭自动 pop

---

## 八、代码质量指标

| 指标 | 值 | 评价 |
|---|---|---|
| 异常保护覆盖率 | ~95% | ✅ 几乎所有动态调用都有 `@try/@catch` |
| 日志覆盖率 | 高 | ✅ `WCPLLogger` 多级日志 + 启动探针 + 实时上传 |
| 配置统一度 | 中 | ⚠️ 新旧 Config 并存 |
| DRY 合规 | 低 | ❌ 多处工具函数重复定义 |
| SRP 合规 | 低 | ❌ `Tweak.m` 承担过多职责 |
| 测试覆盖 | 低 | ⚠️ `tests/` 目录存在但内容不足 |

---

## 九、数据流关键路径

```
微信启动
  ↓
%ctor (Tweak.xm) → 运行时诊断 → CrashReporter → RealtimeLogUploader
  ↓
%ctor (Tweak.m) → CrashReporter 二次安装
  ↓
MicroMessengerAppDelegate.didFinishLaunching → 注册 "微信辣椒" 插件到 WCPluginsMgr
  ↓
NewSettingViewController.reloadTableData → 注入设置入口
  ↓
用户进入聊天页 (BaseMsgContentViewController)
  ├→ 注入搜索按钮
  ├→ 启动 AV 捕获（如开启）
  ├→ 消息 Cell 渲染时注入 +1 按钮 / 滑动手势
  └→ 消息到达 → 红包检测 → 撤回检测 → 屏蔽过滤

收到红包消息 (AsyncOnAddMsg type=49 wxpay://)
  → 解析 nativeUrl → 缓存参数 → QueryRedEnvelopes → 回调 → 计算延时 → 入队抢取

收到撤回消息 (onRevokeMsg)
  → 检测 XML → 查找原消息 → 生成提示 → AddLocalMsg
```

---

## 十、总结

**微信辣椒** 是一个功能丰富、防御编程做得扎实的微信 iOS Tweak 插件。核心功能涵盖红包自动抢取、防撤回、消息复读、滑动手势操作、消息屏蔽、本地消息伪装（"小丑"）、虚拟定位、越狱隐藏等。

**主要优势**：
- 异常保护覆盖极其充分，适配不同微信版本的 fallback 策略成熟
- 功能模块化已初步建立（ConfigCenter + 独立 Hook 文件）
- 基础设施完善（日志、Crash 上报、实时日志推送）

**主要改进空间**：
1. `Tweak.m`（2,092 行）应进一步拆分，与各功能独立的 `.xm` Hook 文件统一迁移
2. 新旧配置双轨（`WCPLConfigCenter` vs `WCPLRedEnvelopConfig.sharedConfig`）需收敛
3. 工具函数（`wcpl_trimString` / `wcpl_messageWrapFromCell` 等）应抽到共享头文件
4. 测试覆盖率需补充
