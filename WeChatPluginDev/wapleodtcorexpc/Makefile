THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222
ARCHS = arm64 arm64e
TARGET = iphone:clang:latest:14.0

# 禁用 Theos 的模块化编译
MODULES = 0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = wapleodtcorexpc
$(TWEAK_NAME)_FILES = $(filter-out src/Tweak.m src/WCPLContactGroupPickerViewController.m src/WCPLFriendPickerViewController.m src/WCPLGroupPickerViewController.m src/WCPLPickerDataProvider.m src/WCPLPickerItem.m, $(wildcard src/*.m)) $(wildcard src/*.xm)
$(TWEAK_NAME)_FRAMEWORKS = UIKit AVFoundation CoreLocation UniformTypeIdentifiers
$(TWEAK_NAME)_LDFLAGS = -Wl,-no_warn_inits
$(TWEAK_NAME)_CFLAGS = -fobjc-arc -IHeaders

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

after-install::
	install.exec "killall -9 WeChat"
