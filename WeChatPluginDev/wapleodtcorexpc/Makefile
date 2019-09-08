THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222
ARCHS = armv7 arm64
TARGET = iphone:latest:8.0
THEOS_MAKE_PATH = /opt/theos/makefiles

include $(THEOS_MAKE_PATH)/common.mk

TWEAK_NAME = wapleodtcorexpc
$(TWEAK_NAME)_FILES = $(wildcard src/*.m) src/Tweak.xm
$(TWEAK_NAME)_FRAMEWORKS = UIKit AVFoundation CoreLocation

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

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"
 