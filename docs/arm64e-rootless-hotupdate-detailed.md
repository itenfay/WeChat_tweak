# WeChat Tweak `arm64e` Rootless 编译与热更新详细流程

本文是针对当前项目与当前设备环境整理的实操版流程，目标是稳定完成：

1. 本地编译 `arm64e` 包  
2. 主机侧重签名  
3. 下发设备安装并热重启 WeChat  
4. 验证注入与版本生效

适用项目：`WeChatPluginDev/wapleodtcorexpc`

---

## 1. 前置条件

在主机上确认以下工具可用：

```bash
command -v make
command -v dpkg-deb
command -v sshpass
test -x /root/WeChat_tweak/.tmp/tools/ldid_linux_x86_64
test -d /opt/theos
```

如果 `ldid` 不存在，可下载一次：

```bash
mkdir -p /root/WeChat_tweak/.tmp/tools
curl -L --fail \
  -o /root/WeChat_tweak/.tmp/tools/ldid_linux_x86_64 \
  https://github.com/ProcursusTeam/ldid/releases/download/v2.1.5-procursus7/ldid_linux_x86_64
chmod +x /root/WeChat_tweak/.tmp/tools/ldid_linux_x86_64
```

---

## 2. 变量定义

```bash
PROJECT_DIR="/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc"
THEOS_DIR="/opt/theos"
TARGET="iphone:clang:13.7:14.0"

DEVICE_IP="100.89.19.102"
DEVICE_USER="root"
DEVICE_PASS="1"
REMOTE_DEB="/tmp/tweak.deb"

LDID="/root/WeChat_tweak/.tmp/tools/ldid_linux_x86_64"
```

---

## 3. 本地编译 `arm64e`（rootless）

```bash
cd "$PROJECT_DIR"
THEOS="$THEOS_DIR" THEOS_PACKAGE_SCHEME=rootless \
  make clean package FINALPACKAGE=1 \
  ARCHS="arm64e" \
  THEOS_PACKAGE_ARCH="iphoneos-arm64e" \
  TARGET="$TARGET"
```

产物示例：

```text
packages/com.aple.wapleodtcorexpc_1.8.36_iphoneos-arm64e.deb
```

---

## 4. 主机侧重签名（关键）

即使编译成功，也建议固定执行一次主机重签，避免注入时签名异常。

```bash
cd "$PROJECT_DIR"

SRC_DEB="$(ls -t packages/com.aple.wapleodtcorexpc_*_iphoneos-arm64e.deb | sed -n '1p')"
ROOTLESS_DEB="${SRC_DEB%.deb}-rootless.deb"
OUT_DEB="${ROOTLESS_DEB%.deb}-resigned.deb"

cp -f "$SRC_DEB" "$ROOTLESS_DEB"

TMP_DIR="$(mktemp -d)"
dpkg-deb -R "$ROOTLESS_DEB" "$TMP_DIR/pkg"

"$LDID" -S "$TMP_DIR/pkg/var/jb/Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.dylib"

dpkg-deb -b "$TMP_DIR/pkg" "$OUT_DEB" >/dev/null
rm -rf "$TMP_DIR"

echo "$OUT_DEB"
```

最终用于部署的包通常是：

```text
packages/com.aple.wapleodtcorexpc_1.8.36_iphoneos-arm64e-rootless-resigned.deb
```

---

## 5. 下发设备并热更新

```bash
cd "$PROJECT_DIR"
DEB="$(ls -t packages/*iphoneos-arm64e-rootless-resigned.deb | sed -n '1p')"

sshpass -p "$DEVICE_PASS" scp -o StrictHostKeyChecking=no \
  "$DEB" "$DEVICE_USER@$DEVICE_IP:$REMOTE_DEB"

sshpass -p "$DEVICE_PASS" ssh -o StrictHostKeyChecking=no "$DEVICE_USER@$DEVICE_IP" \
  "dpkg -i '$REMOTE_DEB' && \
   killall WeChat 2>/dev/null || true && \
   /var/jb/usr/bin/uiopen --bundleid com.tencent.xin >/dev/null 2>&1 || true"
```

---

## 6. 生效验证

### 6.1 包信息

```bash
sshpass -p "$DEVICE_PASS" ssh -o StrictHostKeyChecking=no "$DEVICE_USER@$DEVICE_IP" \
  "dpkg -s com.aple.wapleodtcorexpc | sed -n '1,40p'"
```

重点看：

1. `Status: install ok installed`
2. `Architecture: iphoneos-arm64e`
3. `Version` 是否符合预期

### 6.2 注入日志

```bash
sshpass -p "$DEVICE_PASS" ssh -o StrictHostKeyChecking=no "$DEVICE_USER@$DEVICE_IP" \
  "tail -n 80 /var/mobile/Containers/Data/Application/8BF93F71-587B-49F9-A6B6-835A8CE8E8FA/Documents/wcpl_debug.log"
```

至少要看到新时间戳的：

```text
========== WCPL Logger Started at YYYY-MM-DD HH:mm:ss.xxx ==========
```

看到该行且时间是本次部署后，说明插件已重新注入到 WeChat 进程。

---

## 7. 常见失败与处理

### 7.1 `dpkg` 提示架构不匹配

现象：`package architecture (...) does not match system (...)`

处理：

1. 设备是 `iphoneos-arm64e` 时，必须使用 `ARCHS=arm64e` 和 `THEOS_PACKAGE_ARCH=iphoneos-arm64e`
2. 不要下发 `iphoneos-arm64` 包

### 7.2 编译成功但“看不到插件/像没注入”

优先判断：

1. 是否存在新的 `WCPL Logger Started` 时间戳
2. `wapleodtcorexpc.dylib` 是否已更新到设备路径

```bash
sshpass -p "$DEVICE_PASS" ssh "$DEVICE_USER@$DEVICE_IP" \
  "ls -l /var/jb/Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.* \
         /var/jb/usr/lib/TweakInject/wapleodtcorexpc.* 2>/dev/null"
```

### 7.3 `code signature invalid`

说明签名链路有问题，直接重做第 4 节主机重签，不要只重装原始 `.deb`。

### 7.4 Shell 返回 `141` 但编译其实成功

常见原因是 `set -o pipefail` 与 `| head -n 1` 组合导致上游 `SIGPIPE`。

处理：

1. 将 `head -n 1` 改为 `sed -n '1p'`
2. 或分步执行编译/签名/下发，避免整段脚本被 `141` 中断

---

## 8. 一键脚本（可直接复用）

```bash
#!/usr/bin/env bash
set -euo pipefail

PROJECT_DIR="/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc"
THEOS_DIR="/opt/theos"
TARGET="iphone:clang:13.7:14.0"
LDID="/root/WeChat_tweak/.tmp/tools/ldid_linux_x86_64"

DEVICE_IP="100.89.19.102"
DEVICE_USER="root"
DEVICE_PASS="1"

cd "$PROJECT_DIR"

THEOS="$THEOS_DIR" THEOS_PACKAGE_SCHEME=rootless \
  make clean package FINALPACKAGE=1 \
  ARCHS="arm64e" \
  THEOS_PACKAGE_ARCH="iphoneos-arm64e" \
  TARGET="$TARGET"

SRC_DEB="$(ls -t packages/com.aple.wapleodtcorexpc_*_iphoneos-arm64e.deb | sed -n '1p')"
ROOTLESS_DEB="${SRC_DEB%.deb}-rootless.deb"
OUT_DEB="${ROOTLESS_DEB%.deb}-resigned.deb"

cp -f "$SRC_DEB" "$ROOTLESS_DEB"
TMP_DIR="$(mktemp -d)"
dpkg-deb -R "$ROOTLESS_DEB" "$TMP_DIR/pkg"
"$LDID" -S "$TMP_DIR/pkg/var/jb/Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.dylib"
dpkg-deb -b "$TMP_DIR/pkg" "$OUT_DEB" >/dev/null
rm -rf "$TMP_DIR"

sshpass -p "$DEVICE_PASS" scp -o StrictHostKeyChecking=no \
  "$OUT_DEB" "$DEVICE_USER@$DEVICE_IP:/tmp/tweak.deb"

sshpass -p "$DEVICE_PASS" ssh -o StrictHostKeyChecking=no "$DEVICE_USER@$DEVICE_IP" \
  "dpkg -i /tmp/tweak.deb && \
   killall WeChat 2>/dev/null || true && \
   /var/jb/usr/bin/uiopen --bundleid com.tencent.xin >/dev/null 2>&1 || true"

echo "Done: $OUT_DEB"
```

---

## 9. 推荐执行顺序（人工操作）

1. 先单独跑第 3 节编译，确认无编译错误  
2. 再跑第 4 节重签，确认输出 `*-resigned.deb`  
3. 再跑第 5 节安装与热重启  
4. 最后跑第 6 节验证，确认日志时间是本次部署时间

这套顺序最稳定，也最容易定位问题。
