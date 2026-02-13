# WeChat Tweak 编译部署热更新流程

## Rootless 更正说明（重要）

本文原先的 rootless 本地编译方法在 Linux 环境下存在误导：  
`make package THEOS_PACKAGE_SCHEME=rootless` 直接产物可能出现 `code signature invalid`，导致安装后不注入。

请优先使用下面这份经过实测的 rootless 正确流程：

- `docs/rootless-local-build.md`

本文其余内容可作为 roothide/通用部署参考。

## 项目结构

```
/root/WeChat_tweak/
├── theos-roothide/                  # Theos 编译工具链 (roothide 版本)
├── WeChatPluginDev/
│   └── wapleodtcorexpc/             # 插件主项目
│       ├── Makefile                  # 编译配置
│       ├── control                   # deb 包元信息
│       ├── wapleodtcorexpc.plist     # Substrate 注入过滤规则
│       ├── src/                      # 源码目录
│       │   ├── Tweak.xm             # 主入口
│       │   ├── WCPLGestureHook.xm   # 手势/复读按钮 hook
│       │   ├── WCPLMessageHook.xm   # 消息处理 hook
│       │   ├── WCPLRedEnvelopHook.xm# 红包 hook
│       │   ├── WCPLRevokeHook.xm    # 撤回拦截 hook
│       │   ├── WCPLSendGuard.xm     # 发送守卫 hook
│       │   ├── WCPLSystemHook.xm    # 系统级 hook
│       │   ├── WCPLUIHook.xm        # UI hook
│       │   └── *.m / *.h            # 辅助类
│       └── packages/                 # 编译产物 (.deb)
```

## 环境要求

| 组件 | 说明 |
|------|------|
| 编译主机 | Linux (x86_64)，已安装 Theos 交叉编译工具链 |
| Theos 版本 | roothide 分支（支持 roothide 越狱方案） |
| 目标设备 | iPhone，iOS 14.0+，已越狱 (roothide/Dopamine) |
| 网络连接 | SSH 可达（本例通过 Tailscale：`100.89.19.102`） |
| SSH 认证 | 已配置公钥免密（`ssh iphone`） |

> 说明：本文默认已在 `~/.ssh/config` 配置 `Host iphone`（`User mobile` + 公钥）。

## 完整流程

### 第一步：编译

```bash
cd /root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc

THEOS=/root/WeChat_tweak/theos-roothide \
THEOS_PACKAGE_SCHEME=roothide \
make package TARGET="iphone:clang:13.7:14.0"
```

#### 编译参数说明

| 参数 | 值 | 说明 |
|------|-----|------|
| `THEOS` | `/root/WeChat_tweak/theos-roothide` | Theos 工具链根目录 |
| `THEOS_PACKAGE_SCHEME` | `roothide` | 使用 roothide 越狱方案的路径布局 |
| `TARGET` | `iphone:clang:13.7:14.0` | 目标平台:编译器:SDK版本:最低部署版本 |
| `make package` | — | 执行编译 + 打包 |

#### 编译内部流程

```
.xm 源文件
    │
    ▼  Logos 预处理器
.mm 文件（%hook/%orig → 标准 ObjC++ runtime 调用）
    │
    ▼  Clang (arm64)
.o 目标文件
    │
    ▼  链接器
wapleodtcorexpc.dylib
    │
    ▼  codesign
已签名 dylib
    │
    ▼  dpkg-deb 打包
com.aple.wapleodtcorexpc_X.Y.Z-N+debug_iphoneos-arm64e.deb
```

#### 产物路径

```
packages/com.aple.wapleodtcorexpc_1.8.22-70+debug_iphoneos-arm64e.deb
```

版本号格式：`主版本.次版本.修订-构建号+debug`

### 第二步：传输到设备

```bash
DEB=$(ls -t packages/*.deb | head -1)

scp "$DEB" iphone:/tmp/tweak.deb
```

- 使用 `ls -t | head -1` 自动选择最新编译产物
- 传输到设备 `/tmp/` 临时目录

### 第三步：设备端安装

```bash
ssh iphone \
  "sudo -n dpkg -i /tmp/tweak.deb && \
   sudo -n ldid -S /Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.dylib && \
   sudo -n killall WeChat"
```

- 以上命令使用 `sudo -n`，要求设备端已配置 `NOPASSWD`；若未配置，请改用 `root` 免密账号执行。

#### 三个子步骤

| 步骤 | 命令 | 说明 |
|------|------|------|
| ① 安装 deb 包 | `dpkg -i /tmp/tweak.deb` | 解包 deb，将 dylib 释放到 `/Library/MobileSubstrate/DynamicLibraries/` |
| ② 重签名 | `ldid -S wapleodtcorexpc.dylib` | ad-hoc 签名，roothide 方案要求 |
| ③ 杀掉 WeChat | `killall WeChat` | 终止进程，下次启动时自动加载新 dylib |

### 第四步：验证

用户在设备上重新打开 WeChat，新版 tweak 自动生效。

## 注入原理

```
用户打开 WeChat (com.tencent.xin)
       │
       ▼
MobileSubstrate / ElleKit 启动
       │
       ▼  读取 wapleodtcorexpc.plist
发现 Filter.BundleID = "com.tencent.xin" 匹配
       │
       ▼  dlopen()
wapleodtcorexpc.dylib 注入到 WeChat 进程空间
       │
       ▼  __attribute__((constructor))
dylib 构造函数执行，Logos %hook 注册完成
       │
       ▼
WeChat 运行时，被 hook 的方法调用走 tweak 代码
%orig 调用原始实现
```

### plist 过滤规则示例

```xml
<!-- wapleodtcorexpc.plist -->
{
    Filter = {
        Bundles = ("com.tencent.xin");
    };
}
```

## 日志系统

### 调试日志

```bash
# 实时查看
ssh iphone \
  "tail -f /var/mobile/Containers/Data/Application/<APP-UUID>/Documents/wcpl_debug.log"

# 搜索特定关键字
ssh iphone \
  "grep -i 'keyword' .../wcpl_debug.log | tail -50"

# 清除（部署新版前）
ssh iphone \
  "echo '' > .../wcpl_debug.log"
```

### 崩溃日志

```bash
ssh iphone \
  "cat .../wcpl_crash.log"
```

### 日志格式

```
[2026-02-09 02:23:50.435][INFO] Repeat sent: flow=sendmsgmgr_queue scene=voice ...
[2026-02-09 02:23:50.433][DEBUG] Repeat send wrap ready: scene=voice_sendmsgmgr ...
[2026-02-09 02:23:50.435][WARN] Repeat voice AddMsg did not assign localID ...
```

日志级别：`DEBUG` < `INFO` < `WARN` < `ERROR`

## 一键部署脚本

```bash
#!/bin/bash
# deploy.sh - 一键编译部署热更新

set -e

SSH_HOST="iphone"
PROJECT_DIR="/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc"
THEOS_DIR="/root/WeChat_tweak/theos-roothide"
DYLIB_PATH="/Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.dylib"

echo "=== 编译 ==="
cd "$PROJECT_DIR"
THEOS="$THEOS_DIR" THEOS_PACKAGE_SCHEME=roothide \
  make package TARGET="iphone:clang:13.7:14.0"

echo "=== 获取最新 deb ==="
DEB=$(ls -t packages/*.deb | head -1)
echo "产物: $DEB"

echo "=== 传输到设备 ==="
scp "$DEB" "${SSH_HOST}:/tmp/tweak.deb"

echo "=== 安装 + 签名 + 重启 ==="
ssh "$SSH_HOST" \
  "sudo -n dpkg -i /tmp/tweak.deb && \
   sudo -n ldid -S $DYLIB_PATH && \
   sudo -n killall WeChat 2>/dev/null; echo 'Done'"

echo "=== 部署完成 ==="
```

## 迭代周期

```
修改代码 → 编译 (~15s) → 传输 (~2s) → 安装+重启 (~3s) → 打开 WeChat 测试
                        总计约 20-30 秒/次迭代
```

## 常见问题

### 编译失败

```bash
# 清理重编
make clean && make package TARGET="iphone:clang:13.7:14.0"
```

### 设备连接失败

```bash
# 检查 SSH 连通性
ssh iphone "echo ok"

# 检查 Tailscale 状态
tailscale status
```

### WeChat 闪退

```bash
# 查看崩溃日志
ssh iphone "cat .../wcpl_crash.log"

# 查看系统日志
ssh iphone "sudo -n log show --last 5m --predicate 'process == \"WeChat\"' --style compact"
```

### dylib 未加载

```bash
# 检查 dylib 是否存在
ssh iphone \
  "ls -la /Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.*"

# 检查签名
ssh iphone \
  "ldid -e /Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.dylib"
```
