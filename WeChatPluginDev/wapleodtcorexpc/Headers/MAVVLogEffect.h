//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MAVVLogEffect : NSObject
{
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (CDStruct_e83c9415)getTimeRange;
- (void)setTimeRange:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (CDStruct_1b6d18a9)duration;
- (long long)type;

@end

