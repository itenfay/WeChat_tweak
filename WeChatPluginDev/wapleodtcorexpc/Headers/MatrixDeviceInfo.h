//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MatrixDeviceInfo : NSObject
{
}

+ (_Bool)isBeingDebugged;
+ (int)L3CacheSize;
+ (int)L2CacheSize;
+ (int)L1DCacheSize;
+ (int)L1ICacheSize;
+ (int)cacheLine;
+ (int)userMemory;
+ (int)totalMemory;
+ (int)busFrequency;
+ (float)appCpuUsage;
+ (float)cpuUsage;
+ (unsigned long long)cpuCurrFrequency;
+ (int)cpuFrequency;
+ (int)cpuCount;
+ (id)platform;
+ (id)model;
+ (id)systemVersion;
+ (id)systemName;
+ (int)getSysInfo:(unsigned int)arg1;
+ (id)getSysInfoByName:(char *)arg1;
+ (id)getDeviceType;
+ (id)SystemNameForDeviceType;
+ (_Bool)isiPad;

@end

