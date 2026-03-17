# WeChat 聊天搜索链路 Frida 抓取实战记录（完整过程）

> 目标：定位“新增搜索按钮”与“聊天设置里的查找聊天内容”是否走同一条真实链路，并据此修复到正确页面（可搜索群成员/图片/视频等）。

## 1. 问题背景

用户反馈：
- 新增搜索按钮点开后进入了错误页面（仅按日期）或无反应。
- 期望页面是“查找聊天内容”完整搜索页（支持群成员/图片/视频等分类）。

核心判断思路：
- 不能靠猜 selector 名称；
- 必须用 Frida 抓“真实调用链”，对比两种点击路径。

---

## 2. 设备与环境信息（实测）

- 设备：`iPhone9,1`，`arm64`
- 越狱环境：rootless（Dopamine/roothide 路径）
- 注入目录：`/var/jb/usr/lib/TweakInject`
- SSH 主机别名：`iphone-root`
- 连接地址：`100.105.144.79`

Frida 版本对齐：
- 本机：`frida==17.6.2`、`frida-python==17.6.2`
- 手机：`frida-server 17.6.2`

---

## 3. 关键前置：Frida 可用性与稳定隧道

### 3.1 检查手机端 frida-server

```bash
ssh iphone-root 'ps -ef | grep -i frida | grep -v grep'
```

### 3.2 建立稳定隧道（推荐 `ssh -f -N`）

```bash
ssh -f -N \
  -o BatchMode=yes \
  -o ExitOnForwardFailure=yes \
  -o ServerAliveInterval=10 \
  -o ServerAliveCountMax=3 \
  -L 37043:127.0.0.1:27043 iphone-root
```

### 3.3 连通性验证

```bash
frida-ps -H 127.0.0.1:37043 | head
```

> 经验：`nohup ssh -L ...` 在当前网络环境下偶发“看似启动但端口未监听”，`ssh -f -N` 更稳定。

---

## 4. 抓链路方法

## 4.1 方法 A：ApiResolver + Interceptor（轻量脚本）

适用：
- 先快速验证关键 selector 是否能命中；
- 避免全量 hook 导致微信卡死。

关键点：
- 当前环境出现过 `ObjC` 全局不可用；
- 改用 `ApiResolver('objc')` + 地址 attach；
- 用 `object_getClass/class_getName` 打印参数对象类型。

重点 hook：
- `-[BaseMsgContentViewController wcpl_onTapChatSearchButton:]`
- `-[BaseMsgContentViewController onSearchButton:]`
- `-[MMBaseSessionViewController startCustomizationSearchForSpecialMsg:]`
- `-[ChatRoomInfoViewController onEditAndSearch]`
- `-[ChatRoomInfoViewController initMsgSearchHelper:]`
- `-[ChatRoomInfoViewController msgSearchDidPresent]`
- `-[UINavigationController pushViewController:animated:]`

---

## 4.2 方法 B：frida-trace（A/B 对比最稳定）

适用：
- 需要“同一会话内”对比两种用户操作；
- 自动生成 handler，输出调用时序直观。

启动示例：

```bash
frida-trace -H 127.0.0.1:37043 -p <WeChatPID> \
  -m "-[BaseMsgContentViewController wcpl_onTapChatSearchButton:]" \
  -m "-[BaseMsgContentViewController onSearchButton:]" \
  -m "-[BaseMsgContentViewController openChatInfo:]" \
  -m "-[MMBaseSessionViewController startCustomizationSearchForSpecialMsg:]" \
  -m "-[ChatRoomInfoViewController onEditAndSearch]" \
  -m "-[ChatRoomInfoViewController initMsgSearchHelper:]" \
  -m "-[ChatRoomInfoViewController msgSearchDidPresent]" \
  -m "-[BaseMsgContentViewController handleMsgSearchViewDidAppear]" \
  -m "-[UINavigationController pushViewController:animated:]"
```

然后让用户按顺序点击：
1. 新增搜索按钮（A）
2. 聊天设置里的“查找聊天内容”（B）

---

## 5. A/B 实测结论（本次关键结果）

### A（新增按钮）命中链路

```text
wcpl_onTapChatSearchButton:
  -> onSearchButton:
  -> pushViewController(...)
```

### B（聊天设置-查找聊天内容）命中链路

```text
onEditAndSearch
  -> initMsgSearchHelper:
  -> msgSearchDidPresent
```

### 结论

A 与 B **不是同一路径**：
- A 更接近“日期/普通搜索入口”；
- B 是“完整聊天搜索入口”（目标页面）。

这就是“为什么看起来跳错页/无反应”的根本原因。

---

## 6. 代码修复策略演进

### v1（失败）
- 只调用 `onEditAndSearch`。
- 问题：部分上下文找不到目标控制器，出现“点击没反应”。

### v2（最终）
- 优先：直接找目标并触发 `onEditAndSearch`。
- 回退：若目标不存在，则静默执行 `openChatInfo:nil`，在短轮询里再次查找并触发 `onEditAndSearch`。
- 为避免视觉中间态：
  - 关闭动画；
  - 临时隐藏导航容器（alpha），命中后恢复。

最终效果：
- 解决“无反应”；
- 尽量稳定落到 B 所在真实搜索链路。

---

## 7. rootless 注入排障（本次踩坑）

## 7.1 架构坑（最关键）

现象：
```text
mach-o file, but is an incompatible architecture (have 'arm64e', need 'arm64')
```

原因：
- 目标 WeChat 进程是 `arm64`；
- 注入了 `arm64e` dylib 会直接加载失败。

处理：
- 构建后必须验证包内 dylib 实际架构：

```bash
file wapleodtcorexpc.dylib
```

---

## 7.2 rootless 依赖路径坑

现象：
```text
Library not loaded: @loader_path/.jbroot/usr/lib/libsubstrate.dylib
```

处理：

```bash
ln -s /var/jb /var/jb/usr/lib/TweakInject/.jbroot
```

---

## 7.3 plist 格式坑

旧格式（有外层 `{}`）在当前注入器环境下可能不工作：

```plist
{ Filter = { Bundles = ( "com.tencent.xin" ); }; }
```

改为 legacy 顶层格式：

```plist
Filter = {
    Bundles = ( "com.tencent.xin" );
};
```

---

## 8. 当前可复用的完整操作模板

### 8.1 抓链路

1) 建隧道
```bash
ssh -f -N -L 37043:127.0.0.1:27043 iphone-root
```

2) 找进程
```bash
frida-ps -H 127.0.0.1:37043 | grep WeChat
```

3) frida-trace 对比 A/B

4) 读取 `trace.log` 中运行时序列，确认 selector 链路差异

---

### 8.2 rootless dylib 注入（不走 dpkg）

```bash
scp wapleodtcorexpc.dylib iphone-root:/var/jb/usr/lib/TweakInject/wapleodtcorexpc.dylib
scp wapleodtcorexpc.plist iphone-root:/var/jb/usr/lib/TweakInject/wapleodtcorexpc.plist
ssh iphone-root "chmod 755 /var/jb/usr/lib/TweakInject/wapleodtcorexpc.dylib"
ssh iphone-root "chmod 644 /var/jb/usr/lib/TweakInject/wapleodtcorexpc.plist"
ssh iphone-root "[ -e /var/jb/usr/lib/TweakInject/.jbroot ] || ln -s /var/jb /var/jb/usr/lib/TweakInject/.jbroot"
ssh iphone-root "ldid -S /var/jb/usr/lib/TweakInject/wapleodtcorexpc.dylib"
ssh iphone-root "killall WeChat 2>/dev/null || true; uiopen 'weixin://'"
```

---

## 9. 最终状态

- 已完成 A/B 实测链路归因；
- 已基于真实链路修正新增按钮行为；
- 已完成 rootless 直注入部署；
- 已验证微信进程加载 `wapleodtcorexpc.dylib`。

---

## 10. 建议（后续迭代）

- 保留 A/B 对比脚本为回归工具，每次改入口都跑一遍；
- 将“目标链路 selector”做成配置项，避免每次硬编码改逻辑；
- 增加一条运行时日志开关，仅在调试时打开，避免日常噪音。

