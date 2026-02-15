# 复读按钮 V2 回归指南

## 1. 目标

本指南用于验证 `repeatButtonEngineV2Enable` 开启后的稳定性，重点关注：

- 滚动与复用是否出现重影/错位/串绑
- 前后台切换后按钮是否恢复正常
- 点击发送链路是否稳定（文本/图片/语音/视频/表情/引用）

## 2. 前置步骤

1. 编译并部署最新 tweak。
2. 在设置页打开「复读气泡」和「`[调试] V2 同步渲染引擎`」。
3. 准备日志文件（推荐本地 `wcpl_debug.log`）。

## 3. 手工回归清单

1. 在一个聊天会话内连续快速滚动 2 分钟，观察按钮位置和归属。
2. 切到后台 10 秒再回前台，重复 3 次。
3. 切换不同聊天窗口，确认按钮可恢复且不跨 cell 串绑。
4. 分别点击文本/图片/语音/视频/表情/引用消息的复读按钮。
5. 连续快速点按同一按钮，确认 250ms 防抖生效。

## 4. 日志分析脚本

脚本位置：

`WeChatPluginDev/wapleodtcorexpc/scripts/analyze_repeat_button_log.sh`

一键灰度检查脚本（可选构建/拉设备日志）：

`WeChatPluginDev/wapleodtcorexpc/scripts/repeat_v2_gray_check.sh`

示例：

```bash
# 分析完整日志
WeChatPluginDev/wapleodtcorexpc/scripts/analyze_repeat_button_log.sh logs/wcpl_debug.log

# 仅分析最近 3000 行
WeChatPluginDev/wapleodtcorexpc/scripts/analyze_repeat_button_log.sh logs/wcpl_debug.log --tail 3000

# 仅分析最近一次会话（推荐灰度阶段使用）
WeChatPluginDev/wapleodtcorexpc/scripts/analyze_repeat_button_log.sh logs/wcpl_debug.log --latest-session --tail 3000

# 严格模式（警告也算失败）
WeChatPluginDev/wapleodtcorexpc/scripts/analyze_repeat_button_log.sh logs/wcpl_debug.log --latest-session --tail 3000 --strict

# 一键灰度检查（本地日志）
WeChatPluginDev/wapleodtcorexpc/scripts/repeat_v2_gray_check.sh --strict

# 一键灰度检查（先构建，再从设备拉日志）
WeChatPluginDev/wapleodtcorexpc/scripts/repeat_v2_gray_check.sh --build --pull-device-log --strict

# 指定报告文件（默认会输出到 logs/reports）
WeChatPluginDev/wapleodtcorexpc/scripts/repeat_v2_gray_check.sh --strict --report-file logs/reports/repeat_v2_latest.report.txt
```

输出重点字段：

- `status=PASS|WARN|FAIL`
- `metric.repeat_failed`（必须为 0）
- `metric.stale_binding_fixed` / `metric.wrap_mismatch_fixed`（比例不应偏高）
- `metric.button_clamped`（异常偏高提示布局抖动风险）

## 5. 回滚

若回归不通过，关闭 `repeatButtonEngineV2Enable`，即可回到旧引擎路径。
