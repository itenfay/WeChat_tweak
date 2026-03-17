# ADR-0002: WeChat 私有 API 通过适配层收口

- 状态：Accepted
- 日期：2026-03-14

## 背景

Hook 代码长期直接访问：

- `WCPLGetService(objc_getClass(...))`
- `GetContact`
- `m_nsUsrName`
- `toolView`
- `showRectForMenuController`
- 各类 `ForwardMessageMgr` / `CMessageMgr` / `CEmoticonMgr` 入口

这导致 WeChat 私有 API 变化时，问题会分散到多个功能文件。

## 决策

新增或扩展适配层，把高频私有访问统一收口到少数 adapter 中：

- `WCPLServiceCenterAdapter`
- `WCPLContactAdapter`
- `WCPLMessageAdapter`
- `WCPLMessageActionAdapter`
- `WCPLNavigationAdapter`
- `WCPLRepeatCellAdapter`

## 原因

1. 把 selector 猜测、KVC、runtime 反射集中到稳定边界，有利于兼容性治理。
2. Hook 文件可退化为上下文提取 + 分发，减少热路径复杂度。
3. 统一 adapter 之后，更容易补测试和诊断日志。

## 结果

1. 阶段 5 已把消息搜索、红包、手势、复读主要热点迁移到 adapter/service。
2. 后续新增功能默认先补 adapter，再补业务调用点。
3. 若需扩展私有 API，优先在 adapter 层演进，而不是把访问再次散落回 Hook。
