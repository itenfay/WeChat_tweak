//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class CAAnimationGroup, NSString;

@interface CameraScanGoodsMarkDotGreenDotView : UIImageView
{
    CAAnimationGroup *_greenDotGroupAnimation;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CAAnimationGroup *greenDotGroupAnimation; // @synthesize greenDotGroupAnimation=_greenDotGroupAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)stopGreenDotAnimation;
- (void)startGreenDotAnimation;
- (void)startAnimation;
- (void)setupGreenDotGroupAnimation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

