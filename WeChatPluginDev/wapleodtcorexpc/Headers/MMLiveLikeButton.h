//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLivePanGestureRecognizer, NSString, PAGView, UIImageView;

@interface MMLiveLikeButton
{
    _Bool _isShakeForLike;
    _Bool _isLikeStart;
    _Bool _isInClapMode;
    _Bool _isLikeExecuting;
    _Bool _isTouching;
    _Bool _hasInvokePan;
    _Bool _supportStopShockForMemory;
    _Bool _isDirectlyStopShock;
    _Bool _isStopShock;
    _Bool _isStopShockAfterLittleTimes;
    _Bool _isStopShockAfterLargeTimes;
    unsigned long long _maxLikeCountOnce;
    CDUnknownBlockType _likeInvokeCallback;
    CDUnknownBlockType _likeClickBeginCallback;
    CDUnknownBlockType _likeClickEndCallback;
    CDUnknownBlockType _likeLongPressOverLimitCallback;
    CDUnknownBlockType _likeExecuteCallback;
    CDUnknownBlockType _likeAnimatinCallback;
    long long _type;
    unsigned long long _currLikeCountOnce;
    unsigned long long _currShockCountOnce;
    unsigned long long _currentState;
    PAGView *_clapAnimationView;
    UIImageView *_clapImageView;
    MMLivePanGestureRecognizer *_executeLikePanGesture;
    double _bottomLabelOffsetY;
    unsigned long long _buttonTextLocation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStopShockAfterLargeTimes; // @synthesize isStopShockAfterLargeTimes=_isStopShockAfterLargeTimes;
@property(nonatomic) _Bool isStopShockAfterLittleTimes; // @synthesize isStopShockAfterLittleTimes=_isStopShockAfterLittleTimes;
@property(nonatomic) _Bool isStopShock; // @synthesize isStopShock=_isStopShock;
@property(nonatomic) _Bool isDirectlyStopShock; // @synthesize isDirectlyStopShock=_isDirectlyStopShock;
@property(nonatomic) _Bool supportStopShockForMemory; // @synthesize supportStopShockForMemory=_supportStopShockForMemory;
@property(nonatomic) unsigned long long buttonTextLocation; // @synthesize buttonTextLocation=_buttonTextLocation;
@property(nonatomic) double bottomLabelOffsetY; // @synthesize bottomLabelOffsetY=_bottomLabelOffsetY;
@property(retain, nonatomic) MMLivePanGestureRecognizer *executeLikePanGesture; // @synthesize executeLikePanGesture=_executeLikePanGesture;
@property(retain, nonatomic) UIImageView *clapImageView; // @synthesize clapImageView=_clapImageView;
@property(retain, nonatomic) PAGView *clapAnimationView; // @synthesize clapAnimationView=_clapAnimationView;
@property(nonatomic) _Bool hasInvokePan; // @synthesize hasInvokePan=_hasInvokePan;
@property(nonatomic) _Bool isTouching; // @synthesize isTouching=_isTouching;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) _Bool isLikeExecuting; // @synthesize isLikeExecuting=_isLikeExecuting;
@property(nonatomic) unsigned long long currShockCountOnce; // @synthesize currShockCountOnce=_currShockCountOnce;
@property(nonatomic) unsigned long long currLikeCountOnce; // @synthesize currLikeCountOnce=_currLikeCountOnce;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType likeAnimatinCallback; // @synthesize likeAnimatinCallback=_likeAnimatinCallback;
@property(copy, nonatomic) CDUnknownBlockType likeExecuteCallback; // @synthesize likeExecuteCallback=_likeExecuteCallback;
@property(copy, nonatomic) CDUnknownBlockType likeLongPressOverLimitCallback; // @synthesize likeLongPressOverLimitCallback=_likeLongPressOverLimitCallback;
@property(copy, nonatomic) CDUnknownBlockType likeClickEndCallback; // @synthesize likeClickEndCallback=_likeClickEndCallback;
@property(copy, nonatomic) CDUnknownBlockType likeClickBeginCallback; // @synthesize likeClickBeginCallback=_likeClickBeginCallback;
@property(copy, nonatomic) CDUnknownBlockType likeInvokeCallback; // @synthesize likeInvokeCallback=_likeInvokeCallback;
@property(nonatomic) _Bool isInClapMode; // @synthesize isInClapMode=_isInClapMode;
@property(nonatomic) _Bool isLikeStart; // @synthesize isLikeStart=_isLikeStart;
@property(nonatomic) _Bool isShakeForLike; // @synthesize isShakeForLike=_isShakeForLike;
@property(nonatomic) unsigned long long maxLikeCountOnce; // @synthesize maxLikeCountOnce=_maxLikeCountOnce;
- (void)memoryExceededChange:(id)arg1;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2;
- (void)layoutBottomDescriptionLabel;
- (id)getBottomDescriptionLabel;
- (id)getShadowAttributedString:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)exitClapMode;
- (void)enterClapMode:(_Bool)arg1;
- (void)showClapPrepareAnimation;
@property(readonly, nonatomic) unsigned long long impacyTimesLooseLimit;
@property(readonly, nonatomic) unsigned long long impacyTimesStrictLimit;
- (_Bool)enableShockForLike;
- (void)updateStopShockAfterLargeTimesIfNeeded:(_Bool)arg1;
- (void)updateStopShockAfterLittleTimesIfNeeded:(_Bool)arg1;
- (void)updateStopShock:(_Bool)arg1;
- (void)checkImpactFeedBackTimesOverLimit;
- (void)checkIsOverMaxLimitFootPrintMemory;
- (void)checkImpactFeedBackForMemory;
- (_Bool)needCheckImpactFeedBackForMemory;
- (void)onStopLikeExecuting;
- (void)onStartLikeExecuting;
- (void)updateLikeExecuting:(_Bool)arg1;
- (_Bool)needSupportExecuteLikeInDrag;
- (void)hideClapImageView;
- (void)showClapImageView;
- (void)updateTopButtonImage;
- (void)updateClapAnimationViewHidden;
- (void)createClapImageView;
- (void)createClapAnimationView;
- (void)clearClapAnimationState;
- (void)startLikeButtonClapAutoReduceAnimation;
- (void)startLikeButtonClapEnlargeAnimation;
- (void)startLikeButtonClapAutoEnlargeAnimation;
- (void)startLikeButtonReduceAnimation;
- (void)startLikeButtonEnLargeAnimation;
- (void)executeLike;
- (void)onLikeButtonClickedEnd;
- (void)onLikeButtonClickedStart;
- (void)setButtonImage;
- (void)updateLikeButtonImageEdgeInsets:(double)arg1;
- (void)onTopButtonPanGesture:(id)arg1;
- (void)configLikeButtonExecuteInDragIfNeeded;
- (void)configLikeButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andBussinessType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

