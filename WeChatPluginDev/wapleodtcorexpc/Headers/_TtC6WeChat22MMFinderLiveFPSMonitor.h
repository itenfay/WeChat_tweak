//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, _TtC6WeChat27MMFinderLiveFPSPeriodResult;

@interface _TtC6WeChat22MMFinderLiveFPSMonitor : NSObject
{
    MISSING_TYPE *interval;
    MISSING_TYPE *commentScene;
    MISSING_TYPE *callback;
    MISSING_TYPE *link;
    MISSING_TYPE *count;
    MISSING_TYPE *lastTime;
    MISSING_TYPE *avgFps;
    MISSING_TYPE *fpsRecord;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)tickWithLink:(id)arg1;
- (void)report;
- (void)stop;
- (void)start;
- (id)initWithInterval:(double)arg1 commentScene:(int)arg2 callback:(CDUnknownBlockType)arg3;
@property(nonatomic, readonly) _TtC6WeChat27MMFinderLiveFPSPeriodResult *resultRecords;
@property(nonatomic, readonly) _Bool fpsSwitch;

@end

