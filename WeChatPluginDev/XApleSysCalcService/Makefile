THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222
ARCHS = armv7 arm64
TARGET = iphone:latest:8.0

include theos/makefiles/common.mk

SRC = $(wildcard src/*.m)

TWEAK_NAME = XApleSysCalcService
XApleSysCalcService_FILES = $(wildcard src/*.m) src/Tweak.xm
XApleSysCalcService_FRAMEWORKS = UIKit AVFoundation CoreLocation

src/EZAVManager.m_CFLAGS = -fobjc-arc
src/EZBaseViewController.m_CFLAGS = -fobjc-arc
src/EZFuncService.m_CFLAGS = -fobjc-arc
src/EZMultiSelectGroupsViewController.m_CFLAGS = -fobjc-arc
src/EZReceiveRedEnvelopOperation.m_CFLAGS = -fobjc-arc
src/EZRedEnvelopConfig.m_CFLAGS = -fobjc-arc
src/EZRedEnvelopParamQueue.m_CFLAGS = -fobjc-arc
src/EZRedEnvelopTaskManager.m_CFLAGS = -fobjc-arc
src/EZSettingViewController.m_CFLAGS = -fobjc-arc
src/WeChatRedEnvelopParam.m_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"
