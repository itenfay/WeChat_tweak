# WeChat Tweak Rootless 本地编译正确流程（Linux）

## 背景

在 Linux 上直接执行 `make package THEOS_PACKAGE_SCHEME=rootless`，有概率出现：

- `deb` 能安装
- 但 WeChat 进程不加载插件
- `dlopen` 报错 `code signature invalid`

根因通常不是 Choicy，而是本地产物签名对目标设备不被接受。

## 结论（可用方案）

本地 rootless 走这条链路最稳：

1. 先编译 `arm64` rootless 包
2. 在主机侧对包内 `dylib` 重新 `ldid -S`
3. 再安装到设备热更新

## 前置变量

```bash
PROJECT_DIR="/root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc"
THEOS_DIR="/opt/theos"
TARGET="iphone:clang:13.7:14.0"

DEVICE_IP="100.120.148.81"
DEVICE_USER="mobile"
DEVICE_PASS="1"
```

## 1) 编译 rootless（arm64）

```bash
cd "$PROJECT_DIR"
THEOS="$THEOS_DIR" THEOS_PACKAGE_SCHEME=rootless \
  make clean package FINALPACKAGE=1 \
  ARCHS="arm64" \
  THEOS_PACKAGE_ARCH="iphoneos-arm64" \
  TARGET="$TARGET"
```

重命名为 rootless 包名：

```bash
cd "$PROJECT_DIR"
for f in packages/*.deb; do
  [ -f "$f" ] || continue
  mv "$f" "${f%.deb}-rootless.deb"
done
```

## 2) 主机侧重签名（关键）

下载可用 `ldid`（只需一次）：

```bash
mkdir -p /root/WeChat_tweak/.tmp/tools
curl -L --fail \
  -o /root/WeChat_tweak/.tmp/tools/ldid_linux_x86_64 \
  https://github.com/ProcursusTeam/ldid/releases/download/v2.1.5-procursus7/ldid_linux_x86_64
chmod +x /root/WeChat_tweak/.tmp/tools/ldid_linux_x86_64
```

对包内 `dylib` 重签并重打包：

```bash
LDID="/root/WeChat_tweak/.tmp/tools/ldid_linux_x86_64"
SRC_DEB="$(ls -t "$PROJECT_DIR"/packages/*-rootless.deb | head -n 1)"
OUT_DEB="${SRC_DEB%.deb}-resigned.deb"

TMP_DIR="$(mktemp -d)"
dpkg-deb -R "$SRC_DEB" "$TMP_DIR/pkg"

DYLIB="$TMP_DIR/pkg/var/jb/Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.dylib"
"$LDID" -S "$DYLIB"

dpkg-deb -b "$TMP_DIR/pkg" "$OUT_DEB"
rm -rf "$TMP_DIR"

echo "$OUT_DEB"
```

## 3) 安装到设备并热更新

```bash
DEB="$OUT_DEB"
sshpass -p "$DEVICE_PASS" scp -o StrictHostKeyChecking=no \
  "$DEB" "$DEVICE_USER@$DEVICE_IP:/tmp/tweak.deb"

sshpass -p "$DEVICE_PASS" ssh -o StrictHostKeyChecking=no "$DEVICE_USER@$DEVICE_IP" \
  "echo '$DEVICE_PASS' | sudo -S /var/jb/usr/bin/dpkg -i /tmp/tweak.deb && \
   echo '$DEVICE_PASS' | sudo -S killall WeChat 2>/dev/null || true && \
   /var/jb/usr/bin/uiopen --bundleid com.tencent.xin >/dev/null 2>&1 || true"
```

> 该流程不依赖设备已安装 `ldid`。

## 4) 验证是否真正注入

推荐用 Frida 验证：

```bash
PID=$(frida-ps -H "$DEVICE_IP:27042" -a | awk '$3=="com.tencent.xin"{print $1; exit}')
timeout 15 frida -H "$DEVICE_IP:27042" -p "$PID" -q -e '
var mods=Process.enumerateModules();
var ours=mods.filter(m=>m.path.indexOf("wapleodtcorexpc")!==-1);
console.log("ours_count="+ours.length);
ours.forEach(m=>console.log(m.path));
'
```

期望结果：

- `ours_count=1`

## 故障判断速查

- `ours_count=0` 且 `Module.load(...)` 报 `code signature invalid`
  说明签名问题，重做“主机侧重签”步骤。
- GitHub Action 包可注入，本地包不可注入
  仍是签名差异，不是 Choicy 设置问题。
- 需要快速恢复可用
  先安装 CI 成功构建产物，再回头修本地签名链路。
