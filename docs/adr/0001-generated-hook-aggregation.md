# ADR-0001: 生成式 Hook 聚合保持为编译边界

- 状态：Accepted
- 日期：2026-03-14

## 背景

项目中的消息与手势能力已经依赖聚合脚本生成：

- `src/WCPLMessageHook.xm`
- `src/WCPLGestureHook.xm`

这些文件由固定顺序的 include-only 模块拼接而成，并与 `Makefile` 中的显式编译白名单绑定。

## 决策

保留“内部模块 + 生成产物”的编译边界，不把这些 include-only 模块直接改为独立编译文件。

## 原因

1. 当前白名单与生成脚本已经稳定，直接改成全量独立编译会扩大构建回归面。
2. 聚合产物虽然大，但内部模块已具备继续拆分和替换的空间。
3. 阶段 4/5 的实践已经证明，这条路径允许在不破坏构建链路的前提下持续下沉逻辑。

## 结果

1. 真实修改入口保持在 `src/WCPLGesture*.xm`、`src/WCPLMessage*.xm` 等模块文件。
2. `src/WCPLGestureHook.xm`、`src/WCPLMessageHook.xm` 仍视为生成产物。
3. CI 与本地 gate 都必须先刷新生成文件，再做验证。
