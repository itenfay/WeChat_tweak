//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveView, NSString;

@interface MMLiveViewLoadingAnimationDelegate : NSObject
{
    long long _startTime;
    MMLiveView *_liveView;
    CDUnknownBlockType _overTimeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType overTimeBlock; // @synthesize overTimeBlock=_overTimeBlock;
@property(nonatomic) __weak MMLiveView *liveView; // @synthesize liveView=_liveView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

