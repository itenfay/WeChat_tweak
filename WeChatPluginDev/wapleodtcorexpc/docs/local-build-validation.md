# WeChat Tweak 本地与 Darwin 验收链路

本文档只描述当前真实生效的验收路径，不保留旧设计假设。

## 当前结论

- `./scripts/local_gate.sh` 是统一本地门禁入口。
- `./scripts/local_gate.sh --strict-toolchain` 会真实执行：
  1. 生成脚本
  2. `build_doctor.sh`
  3. 宿主单测（未显式 `--skip-tests` 时）
  4. `make -n before-all`
  5. `make before-all`
  6. 可选 `make -n package`（启用 `--package-preflight` 时）
  7. `make clean`
  8. `make package`
- `./scripts/run_unit_tests.sh --auto`
  - Darwin：执行 `--darwin-host` 和 `--cross-platform`
  - Linux / 非 Darwin：只执行 `--cross-platform`
- Linux 不能伪装通过 `--darwin-host`。Darwin/Foundation host suite 必须在真正的 Darwin 宿主执行。
- `.github/workflows/build-deb.yml` 现在由 `macos-14` runner 真实执行：
  - `./scripts/run_unit_tests.sh --auto`
  - `FINALPACKAGE=1 ./scripts/local_gate.sh --strict-toolchain --skip-tests`

这条 CI 路径补上了此前“Darwin host suite 没有实际执行”的缺口。

## 命令矩阵

### Linux / 容器

最小回归：

```bash
cd /root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc
./scripts/run_unit_tests.sh --cross-platform
```

完整 Linux 严格门禁：

```bash
cd /root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc
THEOS=/opt/theos ./scripts/local_gate.sh --strict-toolchain
```

前提：

- `python3`
- `make`
- `dpkg-deb`
- `ldid` 或仓库 fallback
- `THEOS`

说明：

- Linux 严格门禁通过，只能证明 cross-platform 最小回归和 Theos 打包链通过。
- 这不等价于 Darwin host suite 已执行。

### Darwin / macOS

单独执行 Darwin host suite：

```bash
cd /root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc
./scripts/run_unit_tests.sh --darwin-host
```

执行全部宿主单测：

```bash
cd /root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc
./scripts/run_unit_tests.sh --auto
```

执行完整严格门禁：

```bash
cd /root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc
THEOS=/opt/theos ./scripts/local_gate.sh --strict-toolchain
```

### 直接看 Theos 目标

只想直接定位 Makefile / Theos 构建问题时，可单独执行：

```bash
cd /root/WeChat_tweak/WeChatPluginDev/wapleodtcorexpc
THEOS=/opt/theos make before-all
THEOS=/opt/theos make package
```

说明：

- 这是调试入口，不是推荐验收入口。
- 真正的验收应优先使用 `local_gate.sh`，因为它会把生成、doctor、单测和打包串成一条链。

## `local_gate.sh` 语义

默认模式：

- 仓库损坏直接失败。
- 宿主测试能力缺失时明确降级。
- `make` / `THEOS` 缺失时明确降级。

严格模式：

- 要求 `build_doctor.sh --strict-toolchain` 返回 ready。
- 若不跳过单测，则要求对应宿主单测真的可运行。
- 会真实执行 `make clean` 与 `make package`，不再停留在静态检查或 `before-all`。

常用命令：

```bash
./scripts/local_gate.sh
./scripts/local_gate.sh --strict-toolchain
./scripts/local_gate.sh --strict-toolchain --package-preflight
./scripts/local_gate.sh --skip-tests
./scripts/local_gate.sh --skip-make
```

`validate_local.sh` 只是兼容入口：

```bash
./scripts/validate_local.sh
```

## `run_unit_tests.sh` 语义

支持三种模式：

```bash
./scripts/run_unit_tests.sh --auto
./scripts/run_unit_tests.sh --cross-platform
./scripts/run_unit_tests.sh --darwin-host
```

覆盖职责：

- `--cross-platform`
  - 纯逻辑最小回归
  - Linux / Darwin 都可运行
- `--darwin-host`
  - Foundation/CoreGraphics 宿主测试
  - 仅 Darwin 可运行
- `--auto`
  - Darwin 上先跑 host suite，再跑 cross-platform
  - Linux 上只跑 cross-platform

## `build_doctor.sh` 判定含义

`build_doctor.sh` 会输出：

- `[doctor][section] repository ...`
- `[doctor][section] toolchain ...`
- `[doctor][section] unit_tests ...`
- `[doctor][section] package ...`
- `[doctor][summary] ...`
- `[doctor][capability] ...`
- `ready_for_unit_tests`
- `ready_for_cross_platform_tests`
- `ready_for_darwin_host_tests`
- `ready_for_before_all`
- `ready_for_make`
- `ready_for_package_preflight`
- `ready_for_package`
- `ready_for_local_resign`

当前判定规则：

- Darwin：`ready_for_unit_tests=1` 需要 `cross-platform + darwin-host` 都 ready。
- Linux：`ready_for_unit_tests=1` 只要求 `cross-platform` ready。
- 因此 Linux 上通常会看到 `unit_tests status=LIMITED scope=cross_platform_only`，表示门禁可跑，但仍缺少 Darwin/Foundation 的 ObjC 宿主执行能力。

因此：

- Linux 上 strict pass 是“Linux 最小验收能力完备”。
- Darwin 上 strict pass 才覆盖 Darwin host suite 能力。

## CI 上的 Darwin 验收

GitHub Actions 工作流：

[`/.github/workflows/build-deb.yml`](/root/WeChat_tweak/.github/workflows/build-deb.yml)

`macos-14` job 当前执行顺序：

1. `./scripts/run_unit_tests.sh --auto`
2. `FINALPACKAGE=1 ./scripts/local_gate.sh --strict-toolchain --skip-tests`
3. 将产物重命名为 `*-rootless.deb`
4. 镜像生成 `*-roothide.deb`

这里的 `--skip-tests` 只用于避免 CI 重复跑同一组测试，因为上一步已经显式执行过 `--auto`。

这意味着 CI 现在不再只是“打包成功”，而是先在 Darwin 宿主真实执行 host suite，再走完整 Theos 构建链。

## 当前限制

1. Linux 仍然不能执行 `./scripts/run_unit_tests.sh --darwin-host`。
2. `cross-platform` 套件守的是纯逻辑行为，不替代 Darwin/Foundation 宿主生命周期测试。
3. 若本机没有 `THEOS`、`dpkg-deb`、`ldid`，`--strict-toolchain` 会按设计失败，而不是降级伪通过。
