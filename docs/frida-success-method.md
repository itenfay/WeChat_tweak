# Frida 成功抓取方法（已实测）

> 适用场景：抓 `com.tencent.xin`（微信）搜索按钮链路，避免 attach 超时与卡死。

## 1. 目标与环境

- 目标设备：`100.120.148.81`
- Frida 端口：`27042`
- 目标包名：`com.tencent.xin`
- 抓取策略：仅挂低负载方法（不要全局 `objc_msgSend`）

---

## 2. 一次成功的最稳流程

### 步骤 A：重启微信并拿到新 PID

```bash
old_pid="$(frida-ps -H "100.120.148.81:27042" -ai | awk '$3=="com.tencent.xin"{print $1; exit}')"

if [ -n "${old_pid}" ] && [ "${old_pid}" != "-" ]; then
  sshpass -p "1" ssh -o StrictHostKeyChecking=no "mobile@100.120.148.81" "kill -9 ${old_pid} >/dev/null 2>&1 || true"
fi

sshpass -p "1" ssh -o StrictHostKeyChecking=no "mobile@100.120.148.81" "/var/jb/usr/bin/uiopen --bundleid com.tencent.xin"
sleep 10

new_pid="$(frida-ps -H "100.120.148.81:27042" -ai | awk '$3=="com.tencent.xin"{print $1; exit}')"
echo "new_pid=${new_pid}"
```

### 步骤 B：标记可调试（关键）

```bash
sshpass -p "1" ssh -o StrictHostKeyChecking=no "mobile@100.120.148.81" \
"printf '1\n' | /var/jb/usr/bin/sudo -S /var/jb/usr/bin/jbctl proc_set_debugged ${new_pid}"
```

### 步骤 C：快速探针验证 attach 可用

```bash
timeout 15 frida -H "100.120.148.81:27042" -p "${new_pid}" -q -e \
'console.log("AFTER_RESTART_ATTACH_OK"); console.log("OBJC=" + ObjC.available); setTimeout(function(){},1);'
```

**成功标志（示例）**
- `AFTER_RESTART_ATTACH_OK`
- `OBJC=true`

---

## 3. 三点位低负载 Hook（已成功抓到调用链）

### Hook 脚本（保存到本地）

文件：`/root/WeChat_tweak/.tmp/new_device_threepoint_live.js`

```javascript
'use strict';

function now() { return (new Date()).toISOString(); }
function safeClass(ptr) { try { return new ObjC.Object(ptr).$className; } catch (_) { return 'nil'; } }

function hook(cn, sel, extra) {
  try {
    const cls = ObjC.classes[cn];
    if (!cls) { console.log(`[MISS_CLASS] ${cn}`); return; }
    const method = cls['- ' + sel];
    if (!method) { console.log(`[MISS_SEL] ${cn}::${sel}`); return; }

    const imp = method.implementation;
    const mod = Process.findModuleByAddress(imp);
    console.log(`[HOOK_OK] ${cn}::${sel} mod=${mod ? mod.path : 'unknown'}`);

    Interceptor.attach(imp, {
      onEnter(args) {
        this.t0 = Date.now();
        let ext = '';
        try { if (extra) ext = extra(args) || ''; } catch (e) { ext = ` extra_err=${e}`; }
        console.log(`[ENTER] ${now()} ${cn}::${sel}${ext}`);
      },
      onLeave(retval) {
        const cost = Date.now() - (this.t0 || Date.now());
        console.log(`[LEAVE] ${now()} ${cn}::${sel} cost_ms=${cost}`);
      }
    });
  } catch (e) {
    console.log(`[HOOK_ERR] ${cn}::${sel} ${e}`);
  }
}

setImmediate(function () {
  if (typeof ObjC === 'undefined' || !ObjC.available) {
    console.log('[FATAL] ObjC unavailable');
    return;
  }

  hook('BaseMsgContentViewController', 'onSearchButton:', args => ` self=${safeClass(args[0])}`);
  hook('BaseMsgContentViewController', 'searchItemAction', args => ` self=${safeClass(args[0])}`);
  hook('BaseMsgContentViewController', 'msgSearchBarCancel', args => ` self=${safeClass(args[0])}`);

  console.log('[READY] three-point live hooks installed');
});
```

### 启动 Hook

```bash
frida -H "100.120.148.81:27042" -p "${new_pid}" -l "/root/WeChat_tweak/.tmp/new_device_threepoint_live.js"
```

然后在手机上操作：

1. 点搜索
2. 点取消

**成功输出示例（已抓到）**

```text
[ENTER] ... BaseMsgContentViewController::searchItemAction ...
[LEAVE] ... BaseMsgContentViewController::searchItemAction ...
[ENTER] ... BaseMsgContentViewController::msgSearchBarCancel ...
[LEAVE] ... BaseMsgContentViewController::msgSearchBarCancel ...
```

---

## 4. 实测结论（该设备）

在 `com.tencent.xin` 上，已确认：

- `BaseMsgContentViewController::onSearchButton:` → 微信原生
- `BaseMsgContentViewController::searchItemAction` → `ThemeBox.dylib`
- `BaseMsgContentViewController::msgSearchBarCancel` → `ThemeBox.dylib`

链路：

`onSearchButton:`（原生）→ `searchItemAction`（ThemeBox）→ `msgSearchBarCancel`（ThemeBox）

---

## 5. 常见失败与恢复

### attach timeout

按顺序执行：

1. 重启微信
2. `jbctl proc_set_debugged <pid>`
3. 立即 attach

### 微信卡死/崩溃

- 禁用高负载 hook（尤其全局 `objc_msgSend`）
- 只保留三点位方法级 hook

### 没抓到日志

优先检查：

- 是否操作的是 `com.tencent.xin`（不是 `com.tencent.wx`）
- PID 是否变化
- 是否刚执行过 `proc_set_debugged`

