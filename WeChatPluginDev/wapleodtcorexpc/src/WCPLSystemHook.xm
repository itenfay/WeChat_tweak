#import <CoreLocation/CoreLocation.h>
#import "WCPLConfigCenter.h"

%hook MMLocationMgr

- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 {
    WCPLLocationConfig *config = [WCPLConfigCenter shared].location;
    if (config.fakeLocEnable) {
        CLLocation *location = [[CLLocation alloc] initWithLatitude:config.fakeLatitude longitude:config.fakeLongitude];
        // 用设定的地理信息代替原来获取真正的地理信息
        %orig(arg1, location, arg3);
    } else {
        %orig;
    }
}

%end

%hook JailBreakHelper

+ (_Bool)JailBroken {
    return NO;
}

- (_Bool)IsJailBreak {
    return NO;
}

- (_Bool)HasInstallJailbreakPlugin:(id)arg1 {
    return NO;
}

- (_Bool)HasInstallJailbreakPluginInvalidIAPPurchase {
    return NO;
}

%end
