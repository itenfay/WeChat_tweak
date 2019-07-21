THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222
ARCHS = armv7 arm64
TARGET = iphone:latest:8.0

include theos/makefiles/common.mk

SRC = $(wildcard src/*.m)

TWEAK_NAME = XApleSysCalcService
XApleSysCalcService_FILES = $(wildcard src/*.m) src/Tweak.xm
XApleSysCalcService_FRAMEWORKS = UIKit AVFoundation CoreLocation

src/WCPAVManager.m_CFLAGS = -fobjc-arc
src/WCPBaseViewController.m_CFLAGS = -fobjc-arc
src/WCPFuncService.m_CFLAGS = -fobjc-arc
src/WCPMultiSelectGroupsViewController.m_CFLAGS = -fobjc-arc
src/WCPReceiveRedEnvelopOperation.m_CFLAGS = -fobjc-arc
src/WCPRedEnvelopConfig.m_CFLAGS = -fobjc-arc
src/WCPRedEnvelopParamQueue.m_CFLAGS = -fobjc-arc
src/WCPRedEnvelopTaskManager.m_CFLAGS = -fobjc-arc
src/WCPSettingViewController.m_CFLAGS = -fobjc-arc
src/WeChatRedEnvelopParam.m_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"
