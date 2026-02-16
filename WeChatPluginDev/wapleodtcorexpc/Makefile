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

# 禁用 Theos 的模块化编译
MODULES = 0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = wechatpepper
$(TWEAK_NAME)_FILES = $(filter-out src/Tweak.m src/WCPLContactGroupPickerViewController.m src/WCPLFriendPickerViewController.m src/WCPLGroupPickerViewController.m src/WCPLPickerDataProvider.m src/WCPLPickerItem.m, $(wildcard src/*.m)) $(wildcard src/*.xm)
$(TWEAK_NAME)_FRAMEWORKS = UIKit AVFoundation CoreLocation
$(TWEAK_NAME)_LDFLAGS = -Wl,-no_warn_inits
$(TWEAK_NAME)_CFLAGS = -fobjc-arc -IHeaders -fno-modules

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
