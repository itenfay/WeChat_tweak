//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MultiDeviceReportObject : NSObject
{
}

+ (void)reportAction:(unsigned int)arg1 iconType:(unsigned int)arg2 deviceId:(id)arg3 options:(long long)arg4 devices:(id)arg5;
+ (void)reportUnlockAction:(unsigned int)arg1 iconType:(unsigned int)arg2 deviceId:(id)arg3;
+ (void)reportLoginAction:(unsigned int)arg1 info:(id)arg2 options:(long long)arg3;
+ (void)reportManageAction:(unsigned int)arg1 info:(id)arg2;
+ (void)reportAutoLoginToastWithIconType:(unsigned int)arg1 deviceId:(id)arg2;
+ (void)reportTapBannerWithLoginDevices:(id)arg1;

@end

