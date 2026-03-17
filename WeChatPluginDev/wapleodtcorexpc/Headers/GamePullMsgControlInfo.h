//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GamePullMsgControlInfo : NSObject
{
    int _startSecond;
    int _count;
    double _time;
    unsigned long long _minInterval;
}

+ (id)getCurrentControlInfo;
+ (id)getCurrentControlInfoFromKv;
@property(nonatomic) unsigned long long minInterval; // @synthesize minInterval=_minInterval;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) int startSecond; // @synthesize startSecond=_startSecond;
- (_Bool)checkIsSameDay:(double)arg1;
- (void)syncToKv;

@end

