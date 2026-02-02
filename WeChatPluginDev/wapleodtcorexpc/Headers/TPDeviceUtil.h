//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPDeviceUtil : NSObject
{
}

+ (id)deviceMachine;
+ (id)deviceResolutionString;
+ (struct CGSize)deviceResolution;
+ (int)compareIntAndDotVersion:(id)arg1 version2:(id)arg2 compareLevel:(long long)arg3;
+ (id)splitIntStringWithDot:(id)arg1;
+ (_Bool)isSystemVersionGreaterAndEqual:(id)arg1;
+ (_Bool)isSystemVersionGreaterThan:(id)arg1;
+ (_Bool)isSystemVersionLessAndEqual:(id)arg1;
+ (_Bool)isSystemVersionLessThan:(id)arg1;
+ (_Bool)supportMetal;
+ (id)iPadDeviceMap;
+ (id)iPhoneDeviceMap;
+ (long long)deviceType;
+ (_Bool)isPhoneModel;
+ (_Bool)isPadModel;
+ (_Bool)isPadInterface;
+ (id)sysVersionString;
+ (float)sysVersion;
+ (id)osVersionString;
+ (float)osVersionFloat;

@end

