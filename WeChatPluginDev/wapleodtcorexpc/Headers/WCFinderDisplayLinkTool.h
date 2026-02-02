//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface WCFinderDisplayLinkTool : NSObject
{
    CADisplayLink *_displayLink;
    double _begin;
    double _duration;
    CDUnknownBlockType _updater;
    WCFinderDisplayLinkTool *_selfRetain;
    CDUnknownBlockType _complete;
    CDUnknownFunctionPointerType _timeFunc;
}

+ (void)runAnimation:(double)arg1 update:(CDUnknownBlockType)arg2 timeFunc:(CDUnknownFunctionPointerType)arg3 complete:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) CDUnknownFunctionPointerType timeFunc; // @synthesize timeFunc=_timeFunc;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) WCFinderDisplayLinkTool *selfRetain; // @synthesize selfRetain=_selfRetain;
@property(copy, nonatomic) CDUnknownBlockType updater; // @synthesize updater=_updater;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double begin; // @synthesize begin=_begin;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void)onDisplayLinkUpdate;
- (void)start;
- (id)initWithUpdater:(CDUnknownBlockType)arg1 duration:(double)arg2;

@end

