THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222
ARCHS = arm64e

# rootless/roothide 构建统一使用 iOS 14.0 目标，避免 arm64e 能力分叉
ifneq ($(filter rootless roothide,$(THEOS_PACKAGE_SCHEME)),)
TARGET = iphone:clang:13.7:14.0
else ifneq ($(wildcard $(THEOS)/sdks/iPhoneOS13.7.sdk),)
TARGET = iphone:clang:13.7:14.0
else
TARGET = iphone:clang:latest:14.0
endif

# 禁用 clang modules（否则 CI 的 macOS Theos 默认开启 -fmodules，
# 会触发 iPhoneOS13.7.sdk 里的 simd 模块构建，进而报 'cmath' file not found）。
# 注意：Theos 的开关是 <instance>_USE_MODULES，而不是 MODULES。
# 这里用 $(TWEAK_NAME)_USE_MODULES 以避免重命名 tweak 时漏改。

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = wechatpepper
$(TWEAK_NAME)_USE_MODULES = 0
# 显式固化编译白名单，避免 wildcard/filter-out 带来的“已生效”误判
WCPL_COMPILE_FILES := \
	src/Tweak.xm \
	src/WCHookMessageNavigator.m \
	src/WCHookSettingsManager.m \
	src/WCHookSwipeUtilities.m \
	src/WCHookTableViewFactory.m \
	src/WCPLAVConfig.m \
	src/WCPLAVManager.m \
	src/WCPLBaseViewController.m \
	src/WCPLConfigCenter.m \
	src/WCPLConfigSanitizer.m \
	src/WCPLContactGroupPickerViewController.m \
	src/WCPLContactLookup.m \
	src/WCPLCrashReporter.m \
	src/WCPLDouyinParserHook.xm \
	src/WCPLFriendPickerViewController.m \
	src/WCPLFuncService.m \
	src/WCPLGestureConfig.m \
	src/WCPLGestureHook.xm \
	src/WCPLGroupPickerViewController.m \
	src/WCPLIPadLoginHook.xm \
	src/WCPLIgnoreConfig.m \
	src/WCPLLegacyUIKitCompat.m \
	src/WCPLLocationConfig.m \
	src/WCPLLogSettingsViewController.m \
	src/WCPLLogUploader.m \
	src/WCPLLogger.m \
	src/WCPLLoginConfig.m \
	src/WCPLMessageHook.xm \
	src/WCPLPickerDataProvider.m \
	src/WCPLPickerItem.m \
	src/WCPLPluginEntryHook.xm \
	src/WCPLPush2ChatConfig.m \
	src/WCPLPush2ChatHook.xm \
	src/WCPLQuitMonitorHook.xm \
	src/WCPLRealtimeLogUploader.m \
	src/WCPLReceiveRedEnvelopOperation.m \
	src/WCPLRedEnvelopConfig.m \
	src/WCPLRedEnvelopHook.xm \
	src/WCPLRedEnvelopParamQueue.m \
	src/WCPLRedEnvelopTaskManager.m \
	src/WCPLRepeatButtonAssetManager.m \
	src/WCPLRepeatButtonEngine.m \
	src/WCPLRevokeConfig.m \
	src/WCPLRevokeHook.xm \
	src/WCPLSafeStringContact.m \
	src/WCPLServiceCenter.m \
	src/WCPLSettingViewController.m \
	src/WCPLSystemHook.xm \
	src/WCPLThreadSafeMutableDictionary.m \
	src/WCPLTimelineAdHook.xm \
	src/WCPLTimelineConfig.m \
	src/WCPLUnifiedMultiSelectViewController.m \
	src/WeChatRedEnvelopParam.m
$(TWEAK_NAME)_FILES = $(WCPL_COMPILE_FILES)

# Legacy 档案：历史入口文件仅保留用于对照，禁止恢复编译
WCPL_LEGACY_FILES := src/Tweak.m
WCPL_INTERNAL_INCLUDE_FILES := \
	src/WCPLGestureHookCommon.xm \
	src/WCPLRepeatButtonHook.xm \
	src/WCPLRepeatActionHook.xm \
	src/WCPLSwipeQuoteHook.xm \
	src/WCPLDoubleTapHook.xm \
	src/WCPLMessageTimeHook.xm \
	src/WCPLMessageHookCommon.xm \
	src/WCPLMessageSearchCore.xm \
	src/WCPLMessageSearchHook.xm \
	src/WCPLMessageLocalReplaceHook.xm \
	src/WCPLMessageLongPressMenuHook.xm \
	src/WCPLVoiceForwardCore.xm \
	src/WCPLVoiceForwardHook.xm \
	src/WCPLClownFeatureHook.xm
WCPL_BLOCKED_FILES := $(WCPL_LEGACY_FILES) $(WCPL_INTERNAL_INCLUDE_FILES)
WCPL_ALL_SOURCE_FILES := $(sort $(wildcard src/*.m) $(wildcard src/*.xm))
WCPL_BLOCKED_ACTIVE := $(filter $(WCPL_BLOCKED_FILES),$($(TWEAK_NAME)_FILES))
WCPL_SOURCE_DRIFT := $(filter-out \
	$(WCPL_COMPILE_FILES) $(WCPL_BLOCKED_FILES),$(WCPL_ALL_SOURCE_FILES))
WCPL_COMPILE_MISSING := $(filter-out $(WCPL_ALL_SOURCE_FILES),$(WCPL_COMPILE_FILES))

ifneq ($(strip $(WCPL_BLOCKED_ACTIVE)),)
$(error [wcpl] blocked files unexpectedly compiled: $(WCPL_BLOCKED_ACTIVE))
endif

ifneq ($(strip $(WCPL_SOURCE_DRIFT)),)
$(error [wcpl] source list drift detected, classify files in WCPL_COMPILE_FILES/WCPL_BLOCKED_FILES: $(WCPL_SOURCE_DRIFT))
endif

ifneq ($(strip $(WCPL_COMPILE_MISSING)),)
$(error [wcpl] compile whitelist contains missing files: $(WCPL_COMPILE_MISSING))
endif

before-all::
	@./scripts/generate_wcpl_message_hook.sh
	@./scripts/generate_wcpl_gesture_hook.sh
	@echo "[wcpl] compile whitelist ($(words $(WCPL_COMPILE_FILES)) files)"
	@printf '%s\n' $(WCPL_COMPILE_FILES)
	@echo "[wcpl] entry chain: src/Tweak.xm -> src/WCPLPluginEntryHook.xm"
	@echo "[wcpl] message hook switches: search=$(WCPL_ENABLE_MESSAGE_SEARCH_HOOK) local_replace=$(WCPL_ENABLE_MESSAGE_LOCAL_REPLACE_HOOK) longpress=$(WCPL_ENABLE_MESSAGE_LONGPRESS_MENU_HOOK) voice_forward=$(WCPL_ENABLE_VOICE_FORWARD_HOOK) clown=$(WCPL_ENABLE_CLOWN_FEATURE_HOOK)"
	@echo "[wcpl] legacy archived files (must stay blocked): $(WCPL_LEGACY_FILES)"
	@echo "[wcpl] internal include files (must stay blocked): $(WCPL_INTERNAL_INCLUDE_FILES)"
	@echo "[wcpl] blocked files: $(WCPL_BLOCKED_FILES)"

$(TWEAK_NAME)_FRAMEWORKS = UIKit AVFoundation CoreLocation CoreGraphics CoreMedia CoreVideo QuartzCore
$(TWEAK_NAME)_LDFLAGS = -Wl,-no_warn_inits
$(TWEAK_NAME)_CFLAGS = -fobjc-arc -IHeaders -fno-modules

# 消息功能开关：默认保持全开，可在命令行覆盖做实验性裁剪（部分组合仍待治理）。
WCPL_ENABLE_MESSAGE_SEARCH_HOOK ?= 1
WCPL_ENABLE_MESSAGE_LOCAL_REPLACE_HOOK ?= 1
WCPL_ENABLE_MESSAGE_LONGPRESS_MENU_HOOK ?= 1
WCPL_ENABLE_VOICE_FORWARD_HOOK ?= 1
WCPL_ENABLE_CLOWN_FEATURE_HOOK ?= 1

WCPL_MESSAGE_HOOK_SWITCH_DEFINES := \
	-DWCPL_ENABLE_MESSAGE_SEARCH_HOOK=$(WCPL_ENABLE_MESSAGE_SEARCH_HOOK) \
	-DWCPL_ENABLE_MESSAGE_LOCAL_REPLACE_HOOK=$(WCPL_ENABLE_MESSAGE_LOCAL_REPLACE_HOOK) \
	-DWCPL_ENABLE_MESSAGE_LONGPRESS_MENU_HOOK=$(WCPL_ENABLE_MESSAGE_LONGPRESS_MENU_HOOK) \
	-DWCPL_ENABLE_VOICE_FORWARD_HOOK=$(WCPL_ENABLE_VOICE_FORWARD_HOOK) \
	-DWCPL_ENABLE_CLOWN_FEATURE_HOOK=$(WCPL_ENABLE_CLOWN_FEATURE_HOOK)
$(TWEAK_NAME)_CFLAGS += $(WCPL_MESSAGE_HOOK_SWITCH_DEFINES)

src/WCPLAVManager.m_CFLAGS = -fobjc-arc
src/WCPLBaseViewController.m_CFLAGS = -fobjc-arc
src/WCPLFuncService.m_CFLAGS = -fobjc-arc
src/WCPLReceiveRedEnvelopOperation.m_CFLAGS = -fobjc-arc
src/WCPLRedEnvelopConfig.m_CFLAGS = -fobjc-arc
src/WCPLRedEnvelopParamQueue.m_CFLAGS = -fobjc-arc
src/WCPLRedEnvelopTaskManager.m_CFLAGS = -fobjc-arc
src/WCPLSettingViewController.m_CFLAGS = -fobjc-arc
src/WeChatRedEnvelopParam.m_CFLAGS = -fobjc-arc
src/WCHookMessageNavigator.m_CFLAGS = -fobjc-arc
src/WCHookSettingsManager.m_CFLAGS = -fobjc-arc
src/WCHookSwipeUtilities.m_CFLAGS = -fobjc-arc
src/WCHookTableViewFactory.m_CFLAGS = -fobjc-arc
src/WCPLLogger.m_CFLAGS = -fobjc-arc
src/WCPLDouyinParserHook.xm_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

after-package::
	@set -e; \
	LDID_BIN="$$(command -v ldid 2>/dev/null || true)"; \
	if [ -z "$$LDID_BIN" ] && [ -x "/root/WeChat_tweak/.tmp/tools/ldid_linux_x86_64" ]; then \
		LDID_BIN="/root/WeChat_tweak/.tmp/tools/ldid_linux_x86_64"; \
	fi; \
	if [ -z "$$LDID_BIN" ]; then \
		echo "[wcpl] skip local ldid: not found"; \
		exit 0; \
	fi; \
		DEB_PATH="$$(ls -t "$(CURDIR)"/packages/com.aple.wechatpepper_*.deb 2>/dev/null | head -n 1)"; \
	if [ -z "$$DEB_PATH" ]; then \
		echo "[wcpl] skip local ldid: package not found"; \
		exit 0; \
	fi; \
	TMP_DIR="$$(mktemp -d)"; \
	trap 'rm -rf "$$TMP_DIR"' EXIT INT TERM; \
	dpkg-deb -R "$$DEB_PATH" "$$TMP_DIR/pkg"; \
	SIGNED=0; \
	for DYLIB in \
		"$$TMP_DIR/pkg/Library/MobileSubstrate/DynamicLibraries/$(TWEAK_NAME).dylib" \
		"$$TMP_DIR/pkg/var/jb/usr/lib/TweakInject/$(TWEAK_NAME).dylib" \
		"$$TMP_DIR/pkg/var/jb/Library/MobileSubstrate/DynamicLibraries/$(TWEAK_NAME).dylib"; do \
		if [ -f "$$DYLIB" ]; then \
			"$$LDID_BIN" -S "$$DYLIB"; \
			SIGNED=1; \
			echo "[wcpl] ldid signed: $$DYLIB"; \
		fi; \
	done; \
	if [ "$$SIGNED" -eq 0 ]; then \
		echo "[wcpl] skip local ldid: dylib path not found in package"; \
		exit 0; \
	fi; \
	dpkg-deb -Zgzip -z6 -b "$$TMP_DIR/pkg" "$$DEB_PATH" >/dev/null; \
	echo "[wcpl] local ldid repack done: $$DEB_PATH"

after-install::
	install.exec "killall -9 WeChat"
