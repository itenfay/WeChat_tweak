//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiteAppMetricsInfo : NSObject
{
    long long _appPhysicalMemory;
    long long _appAvailableMemory;
    long long _appFootprintMemory;
}

+ (id)LiteAppMetricsInfoWithAppPhysicalMemory:(long long)arg1 appAvailableMemory:(long long)arg2 appFootprintMemory:(long long)arg3;
@property(readonly, nonatomic) long long appFootprintMemory; // @synthesize appFootprintMemory=_appFootprintMemory;
@property(readonly, nonatomic) long long appAvailableMemory; // @synthesize appAvailableMemory=_appAvailableMemory;
@property(readonly, nonatomic) long long appPhysicalMemory; // @synthesize appPhysicalMemory=_appPhysicalMemory;
- (id)description;
- (id)initWithAppPhysicalMemory:(long long)arg1 appAvailableMemory:(long long)arg2 appFootprintMemory:(long long)arg3;

@end

