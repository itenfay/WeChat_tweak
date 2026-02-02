//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAAnimationGroup, MMFinderLiveAudioRoomMicAudioAnimationDelegateObj, UIColor;

@interface MMFinderLiveAudioRoomMicAudioAnimationView : UIView
{
    _Bool _isRounded;
    _Bool _canShowAnimation;
    _Bool _isInAnimation;
    UIColor *_audioWaveColor;
    double _viewHeightWhenAnimationStart;
    double _borderWidthForWaveView;
    UIView *_firstWaveView;
    UIView *_secondWaveView;
    CAAnimationGroup *_firstWaveAnimation;
    CAAnimationGroup *_secondWaveAnimation;
    MMFinderLiveAudioRoomMicAudioAnimationDelegateObj *_firstWaveAnimationDelegateObj;
    MMFinderLiveAudioRoomMicAudioAnimationDelegateObj *_secondWaveAnimationDelegateObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationDelegateObj *secondWaveAnimationDelegateObj; // @synthesize secondWaveAnimationDelegateObj=_secondWaveAnimationDelegateObj;
@property(retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationDelegateObj *firstWaveAnimationDelegateObj; // @synthesize firstWaveAnimationDelegateObj=_firstWaveAnimationDelegateObj;
@property(retain, nonatomic) CAAnimationGroup *secondWaveAnimation; // @synthesize secondWaveAnimation=_secondWaveAnimation;
@property(retain, nonatomic) CAAnimationGroup *firstWaveAnimation; // @synthesize firstWaveAnimation=_firstWaveAnimation;
@property(retain, nonatomic) UIView *secondWaveView; // @synthesize secondWaveView=_secondWaveView;
@property(retain, nonatomic) UIView *firstWaveView; // @synthesize firstWaveView=_firstWaveView;
@property(nonatomic) _Bool isInAnimation; // @synthesize isInAnimation=_isInAnimation;
@property(nonatomic) _Bool canShowAnimation; // @synthesize canShowAnimation=_canShowAnimation;
@property(nonatomic) double borderWidthForWaveView; // @synthesize borderWidthForWaveView=_borderWidthForWaveView;
@property(nonatomic) double viewHeightWhenAnimationStart; // @synthesize viewHeightWhenAnimationStart=_viewHeightWhenAnimationStart;
@property(retain, nonatomic) UIColor *audioWaveColor; // @synthesize audioWaveColor=_audioWaveColor;
@property(nonatomic) _Bool isRounded; // @synthesize isRounded=_isRounded;
- (void)handleAnimationDidStopWithDelegateObj:(id)arg1 finishedFlag:(_Bool)arg2;
- (void)stopWaveAnimationWithForceStopFlag:(_Bool)arg1;
- (void)startWaveAnimation;
- (void)updateAudioWaveColor:(id)arg1;
- (void)startSecondAnimation;
- (void)startFirstAnimation;
- (id)makeWaveAnimationWithCornerRadius:(double)arg1;
- (void)realStartWaveAnimation;
- (void)removeWaveAnimationWithResetFlag:(_Bool)arg1;
- (void)checkAndResetWaveAnimation;
- (id)makeCircleView;
- (void)layoutSubviews;

@end

