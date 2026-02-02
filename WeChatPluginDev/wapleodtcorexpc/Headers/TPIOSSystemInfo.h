//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPIOSSystemInfo : NSObject
{
}

+ (_Bool)isDeviceModelVersionGreaterAndEqual:(id)arg1;
+ (long long)getElapsedRealtimeSinceBootUsUsingSysctl;
+ (long long)getElapsedRealtimeSinceBootUsUsingClockGettime;
+ (long long)getElapsedRealtimeSinceBootUs;
+ (_Bool)isSystemVersionGreaterAndEqual:(id)arg1;
+ (_Bool)isSystemVersionGreaterThan:(id)arg1;
+ (_Bool)isSystemVersionLessAndEqual:(id)arg1;
+ (_Bool)isSystemVersionLessThan:(id)arg1;
+ (int)supportSoftDecVvcLevel;
+ (int)supportSoftDecAv1Level;
+ (int)supportSoftDecVp9Level;
+ (int)supportSoftDecH264Level;
+ (_Bool)isSupportFHD60FPSDevice;
+ (int)supportHardDecH264Level;
+ (int)supportSoftDecHevcLevel;
+ (int)supportHardDecHevclevel;
+ (_Bool)supportDolbyDigitalPlus;
+ (_Bool)supportHDR10;
+ (_Bool)supportDolbyVision;
+ (_Bool)supportHDRVivid;
+ (_Bool)supportDolbyDigital;
+ (_Bool)IsSupportMetal;
+ (_Bool)supportMetal;
+ (_Bool)isPhoneModel;
+ (_Bool)isPadModel;
+ (_Bool)isPadInterface;
+ (id)sysVersionString;
+ (float)sysVersion;

@end

