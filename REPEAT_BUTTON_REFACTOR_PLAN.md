# WeChat_tweak 复读按钮重构计划（对齐 nongfushanquan）

## 1. 目标

- 将复读按钮架构从“全局异步调度”为主，收敛为“单 cell 同步渲染”为主。
- 提升滚动、复用、前后台切换场景下的稳定性。
- 保持现有发送能力（文本/图片/语音/视频/表情/引用）不回退。
- 保留可灰度、可回滚能力。

> 现状说明（2026-02）：当前实现已默认启用 V2(sync-cell)，并移除了
> `repeatButtonEngineV2Enable` 运行时开关；如需回滚到 V1，需要走版本/代码回退。

## 2. 范围

- 重构按钮生命周期、布局、绑定、清理链路。
- 保留 `wchook_repeatMessageWrap` 发送主干逻辑，仅做最小必要兼容。
- 本阶段不新增“多次复读（输入次数）”功能。

## 3. 核心策略

- 参考 `nongfushanquan` 四段模型：
1. 开关与消息过滤
2. 按钮确保（创建/复用/去重）
3. 布局定位（左右侧 + 偏移 + 边界裁剪）
4. 条件不满足即清理

- `WeChat_tweak` 中减少全局映射和跨窗口同步依赖，让按钮状态尽量局部化到 cell。

## 4. 分阶段实施

### 阶段 0：灰度开关（历史阶段，已移除）

1. （历史）曾在 `WCPLGestureConfig` 增加 `repeatButtonEngineV2Enable` 并在设置页增加调试入口。
2. （当前）开关已移除，`WCPLGestureHook.xm` 统一走 V2(sync-cell)。
3. 旧引擎代码仍保留，回滚改为“版本/代码回退”。

### 阶段 1：引擎抽离

1. 新增 `WCPLRepeatButtonEngine.h/.m`。
2. 从 `WCPLGestureHook.xm` 抽离按钮相关函数：
   - `update(cell)`
   - `ensureButton(cell)`
   - `bind(cell, button, wrap)`
   - `layout(cell, button, bubbleView, isSelf)`
   - `cleanup(cell)`
3. `WCPLGestureHook.xm` 仅保留 Hook 入口与点击转发。

### 阶段 2：同步更新链路（V2）

1. 在 `CommonMessageCellView layoutSubviews` 直接调用 `update(cell)`。
2. 执行顺序固定：
   - 读取配置 -> 提取 wrap -> 支持性判断 -> 获取气泡锚点 -> ensureButton -> bind -> layout
3. 去掉对“异步全局刷新后再布局”的依赖。

### 阶段 3：按钮确保与去重

1. 只在当前 cell 的直接子视图中查找 `tag == repeatButtonTag`。
2. 保留第一个按钮，移除多余按钮。
3. 关联对象记录当前按钮实例，避免重复创建。

### 阶段 4：清理策略

1. 条件不满足时（开关关闭、wrap 不支持、几何无效）立即 `cleanup(cell)`。
2. 在 `didMoveToWindow` 中仅做离屏清理，不触发全局刷新扫描。
3. `prepareForReuse` 强制清理。

### 阶段 5：布局算法收敛

1. 主锚点：优先 bubble rect；兜底 menu rect；再兜底 cell bounds。
2. 左右定位：按 `isSelf` 决定按钮落在气泡左右。
3. 边界裁剪：统一 clamp 到 cell 可视范围，防止越界和漂移。
4. 保留尺寸配置（16~30）与最小视觉约束。

### 阶段 6：点击绑定与防串绑

1. 每次 `bind` 前先清理旧 target，再绑定当前 cell target。
2. 点击时校验 `buttonWrap` 与 `cellWrap`，不一致则以 `cellWrap` 为准。
3. 增加 250ms 轻量防抖，避免误双击连发。

### 阶段 7：V2 启用时缩减全局路径

1. V2 开启时，短路以下逻辑：
   - 全局 owner map 驱动
   - 周期性 full resync
   - 跨窗口按钮重建流程
2. 保留代码但不执行，便于回滚。

### 阶段 8：配置与设置页兼容

1. 保持现有配置键不变：
   - `kWCPLRepeatButtonEnable`
   - `kWCPLRepeatButtonHapticEnable`
   - `kWCPLRepeatButtonSize`
   - `kWCPLRepeatSupportEmoticonEnable`
   - `kWCPLRepeatSupportVoiceEnable`
   - `kWCPLRepeatSupportImageEnable`
   - `kWCPLRepeatSupportVideoEnable`
2. 不再提供 V2 引擎运行时开关键（统一默认 V2）。

### 阶段 9：验证与发布

1. 本地验证通过后先灰度 V2=ON（小流量）。
2. 观测稳定性后切换默认 ON。
3. 保留旧引擎一版周期，再考虑删除。

## 5. 并行执行建议

1. 任务 A：按钮引擎抽离与同步链路实现（阶段 1~5）
2. 任务 B：配置与设置页（阶段 0、8）
3. 任务 C：日志、回归脚本与验收（阶段 9）

## 6. 验收标准

1. 连续快速滚动 2 分钟：无重影、无错位、无跨 cell 串绑。
2. 前后台切换、聊天切换：按钮可恢复且位置正确。
3. 点击复读成功率不低于现网版本（文本/图片/语音/视频/表情/引用）。
4. 无新增崩溃、无明显掉帧。

## 7. 风险与回滚

### 风险

1. 去掉全局映射后，个别机型可能出现短暂重复按钮。
2. 特殊消息布局下 bubble 锚点识别不稳定。

### 对策

1. 每次 `update` 做本地强制去重。
2. 保留 menu rect 兜底与 clamp。
3. 关键路径保留详细日志（仅 debug）。

### 回滚

1. 通过版本回退或代码回退恢复 V1(global-refresh)：
   - 回退到包含旧引擎的稳定 deb/commit
   - 或在 `WCPLGestureHook.xm` 中将 `wcpl_shouldUseLocalCellRepeatEngine()` 改为返回 `NO` 并重新编译部署
2. 不需要回滚发送链路。

## 8. 执行顺序建议（最小可运行）

1. 阶段 0（开关）
2. 阶段 1（抽离）
3. 阶段 2（同步更新）
4. 阶段 3（去重）
5. 阶段 4（清理）
6. 再进入灰度验证
