//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXGNetworkUtility : NSObject
{
}

+ (id)getLocalIPString;
+ (int)isInnerIP:(id)arg1;
+ (id)currentHotSpotOrWifiSSID;
+ (_Bool)isOnWifiOrHostSpotMode;
+ (_Bool)isOpenHotSpot;
+ (id)_getCorrectMaskWithIP:(id)arg1;
+ (int)isSameNetGateWay:(id)arg1;
+ (_Bool)isSameWifi:(id)arg1 selfWifiName:(id *)arg2;
+ (_Bool)isHotspotActivity;
+ (_Bool)isBatteryChargeAndLevel:(float *)arg1;

@end

