THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222
ARCHS = arm64 arm64e
TARGET = iphone:latest:14.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = wapleodtcorexpc
$(TWEAK_NAME)_FILES = $(wildcard src/*.m) src/Tweak.xm
$(TWEAK_NAME)_FRAMEWORKS = UIKit AVFoundation CoreLocation UniformTypeIdentifiers

src/WCPLAVManager.m_CFLAGS = -fobjc-arc
src/WCPLBaseViewController.m_CFLAGS = -fobjc-arc
src/WCPLFuncService.m_CFLAGS = -fobjc-arc
src/WCPLMultiSelectGroupsViewController.m_CFLAGS = -fobjc-arc
src/WCPLReceiveRedEnvelopOperation.m_CFLAGS = -fobjc-arc
src/WCPLRedEnvelopConfig.m_CFLAGS = -fobjc-arc
src/WCPLRedEnvelopParamQueue.m_CFLAGS = -fobjc-arc
src/WCPLRedEnvelopTaskManager.m_CFLAGS = -fobjc-arc
src/WCPLSettingViewController.m_CFLAGS = -fobjc-arc
src/WeChatRedEnvelopParam.m_CFLAGS = -fobjc-arc
src/WCPLMessageReplyManager.m_CFLAGS = -fobjc-arc
src/WCHookMessageNavigator.m_CFLAGS = -fobjc-arc
src/WCHookSettingsManager.m_CFLAGS = -fobjc-arc
src/WCHookSwipeUtilities.m_CFLAGS = -fobjc-arc
src/WCHookTableViewFactory.m_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"
