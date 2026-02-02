//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface JSThreadMonitor : NSObject
{
    struct Monitor *_monitor;
    float _threashold;
    int _duration;
    CDUnknownFunctionPointerType _callback;
}

+ (void)setupWithCallback:(CDUnknownFunctionPointerType)arg1;
+ (void)setupWithTime:(int)arg1 threashold:(float)arg2 callback:(CDUnknownFunctionPointerType)arg3;
+ (id)defaultMonitor;
@property(nonatomic) CDUnknownFunctionPointerType callback; // @synthesize callback=_callback;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) float threashold; // @synthesize threashold=_threashold;
- (void)stop;
- (void)setEnableMainThread:(_Bool)arg1;
- (void)setTickLimit:(unsigned int)arg1;
- (void)start;
- (void)dealloc;
- (void)updateTID;
- (id)init;

@end

