//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface MMLiveMorphVideoPresentAnimator : NSObject
{
    _Bool _targetHasBottomView;
    _Bool _hasScaledAudioRoomView;
    UIView *_videoView;
    UIView *_micUserView;
    UIView *_micUserBackContainerView;
    UIView *_audioRoomView;
    struct CGSize _videoSize;
    struct CGRect _sourceFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasScaledAudioRoomView; // @synthesize hasScaledAudioRoomView=_hasScaledAudioRoomView;
@property(retain, nonatomic) UIView *audioRoomView; // @synthesize audioRoomView=_audioRoomView;
@property(retain, nonatomic) UIView *micUserBackContainerView; // @synthesize micUserBackContainerView=_micUserBackContainerView;
@property(retain, nonatomic) UIView *micUserView; // @synthesize micUserView=_micUserView;
@property(nonatomic) _Bool targetHasBottomView; // @synthesize targetHasBottomView=_targetHasBottomView;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
- (struct CGRect)estimatedTargetFrameForVideoSize:(struct CGSize)arg1 inContainerSize:(struct CGSize)arg2 withInsetReferenceView:(id)arg3 hasVideoBottomView:(_Bool)arg4;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTransitionParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

