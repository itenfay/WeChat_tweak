# ADR-0003: 遗留入口 Tweak.m 归档到 legacy 目录

- 状态：Accepted
- 日期：2026-03-14

## 背景

`Tweak.m` 是历史时期的大入口文件，承担过：

- 启动入口
- 插件注册
- 红包逻辑
- 防撤回
- 复读
- 消息屏蔽
- 其他运行时逻辑

在新架构下，这些职责已拆分到：

- `src/Tweak.xm`
- `src/WCPLPluginEntryHook.xm`
- 各功能 Hook / helper / adapter 文件

## 决策

把遗留入口从 `src/Tweak.m` 移到 `legacy/Tweak.m`，并继续保持禁止编译。

## 原因

1. `src/` 应只保留当前主链源码，避免遗留入口误导阅读或被误加入白名单。
2. 保留归档文件仍有历史对照价值，不适合在当前阶段直接删除。
3. 通过 `Makefile` 与 `maintainability_guard.sh` 双重约束，可防止遗留入口回流。

## 结果

1. 当前主入口链固定为 `src/Tweak.xm -> src/WCPLPluginEntryHook.xm`。
2. `legacy/Tweak.m` 仅作历史档案，不参与 `src/` 源文件漂移检查主路径。
3. 若未来需要彻底删除归档入口，应在后续单独阶段中处理。
