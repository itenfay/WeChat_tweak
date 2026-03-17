//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveMetricsInfoRecordInfo : NSObject
{
    double _appCPUUsage;
    double _deviceGPUUsage;
    double _footprintMemory;
}

@property(nonatomic) double footprintMemory; // @synthesize footprintMemory=_footprintMemory;
@property(nonatomic) double deviceGPUUsage; // @synthesize deviceGPUUsage=_deviceGPUUsage;
@property(nonatomic) double appCPUUsage; // @synthesize appCPUUsage=_appCPUUsage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

