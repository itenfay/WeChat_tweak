THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222
ARCHS = arm64 arm64e
TARGET = iphone:clang:latest:14.0

# 禁用 Theos 的模块化编译
MODULES = 0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = wapleodtcorexpc
$(TWEAK_NAME)_FILES = $(wildcard src/*.m) src/Tweak.xm
$(TWEAK_NAME)_FRAMEWORKS = UIKit AVFoundation CoreLocation UniformTypeIdentifiers
$(TWEAK_NAME)_LDFLAGS = -Wl,-no_warn_inits
$(TWEAK_NAME)_CFLAGS = -fno-modules -IHeaders

src/WCPLAVManager.m_CFLAGS = -fobjc-arc -fno-modules
src/WCPLBaseViewController.m_CFLAGS = -fobjc-arc -fno-modules
src/WCPLFuncService.m_CFLAGS = -fobjc-arc -fno-modules
src/WCPLMultiSelectGroupsViewController.m_CFLAGS = -fobjc-arc -fno-modules
src/WCPLReceiveRedEnvelopOperation.m_CFLAGS = -fobjc-arc -fno-modules
src/WCPLRedEnvelopConfig.m_CFLAGS = -fobjc-arc -fno-modules
src/WCPLRedEnvelopParamQueue.m_CFLAGS = -fobjc-arc -fno-modules
src/WCPLRedEnvelopTaskManager.m_CFLAGS = -fobjc-arc -fno-modules
src/WCPLSettingViewController.m_CFLAGS = -fobjc-arc -fno-modules
src/WeChatRedEnvelopParam.m_CFLAGS = -fobjc-arc -fno-modules
src/WCPLMessageReplyManager.m_CFLAGS = -fobjc-arc -fno-modules
src/WCHookMessageNavigator.m_CFLAGS = -fobjc-arc -fno-modules
src/WCHookSettingsManager.m_CFLAGS = -fobjc-arc -fno-modules
src/WCHookSwipeUtilities.m_CFLAGS = -fobjc-arc -fno-modules
src/WCHookTableViewFactory.m_CFLAGS = -fobjc-arc -fno-modules
src/WCPLLogger.m_CFLAGS = -fobjc-arc -fno-modules

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"
