//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class CAAnimationGroup, CABasicAnimation, NSString, POPSpringAnimation;

@interface CameraScanGoodsMarkDotCustomImageView : UIImageView
{
    UIImageView *_fgImageView;
    UIImageView *_bgImageView;
    CABasicAnimation *_fgImageRotationAnimation;
    POPSpringAnimation *_fgImageScaleAnimation;
    CAAnimationGroup *_bgImageGroupAnimation;
    unsigned long long _fgImageScaleBeginTimestamp;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) unsigned long long fgImageScaleBeginTimestamp; // @synthesize fgImageScaleBeginTimestamp=_fgImageScaleBeginTimestamp;
@property(retain, nonatomic) CAAnimationGroup *bgImageGroupAnimation; // @synthesize bgImageGroupAnimation=_bgImageGroupAnimation;
@property(retain, nonatomic) POPSpringAnimation *fgImageScaleAnimation; // @synthesize fgImageScaleAnimation=_fgImageScaleAnimation;
@property(retain, nonatomic) CABasicAnimation *fgImageRotationAnimation; // @synthesize fgImageRotationAnimation=_fgImageRotationAnimation;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImageView *fgImageView; // @synthesize fgImageView=_fgImageView;
- (void)pop_animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)stopBgImageAnimation;
- (void)startBgImageAnimation;
- (void)stopFgImageScaleAnimation;
- (void)startFgImageScaleAnimation;
- (void)stopFgImageRotationAnimation;
- (void)startFgImageRotationAnimation;
- (void)startAnimation;
- (void)setupBgImageGroupAnimation;
- (void)setupFgImageScaleAnimation;
- (void)setupFgImageRotationAnimation:(id)arg1;
- (id)initWithCustomImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

