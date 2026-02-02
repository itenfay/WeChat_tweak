//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIDevice.h>

@interface UIDevice (Hardware)
+ (int)getSysInfo:(unsigned int)arg1;
+ (id)getSysInfoByName:(char *)arg1;
- (int)L3CacheSize;
- (int)L2CacheSize;
- (int)L1DCacheSize;
- (int)L1ICacheSize;
- (int)cacheLine;
- (int)userMemory;
- (int)totalMemory;
- (int)busFrequency;
- (int)cpuFrequency;
- (int)cpuCount;
- (id)platform;
@end

