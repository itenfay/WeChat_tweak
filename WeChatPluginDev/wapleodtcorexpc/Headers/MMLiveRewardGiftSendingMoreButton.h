//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LOTAnimationView, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, NSString;
@protocol MMLiveRewardGiftSendingMoreLogicDelegate;

@interface MMLiveRewardGiftSendingMoreButton
{
    _Bool _isEnableSendAgain;
    _Bool _sendButtonTouchIsNotFinish;
    _Bool _isInterrupted;
    _Bool _shouldUseQuickSendAnimation;
    id <MMLiveRewardGiftSendingMoreLogicDelegate> _logicDelegate;
    CDUnknownBlockType _sendingMoreButtonEnableCallback;
    CDUnknownBlockType _sendingMoreButtonComboActionBeginCallback;
    CDUnknownBlockType _sendingMoreButtonSendingCountIncreasedCallback;
    unsigned long long _sendingCount;
    NSString *_currentComboId;
    MMFinderLiveTaskId *_liveTaskId;
    MMFinderLiveRewardGiftItem *_currentSendMoreGiftItem;
    LOTAnimationView *_breatheAnimationView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUseQuickSendAnimation; // @synthesize shouldUseQuickSendAnimation=_shouldUseQuickSendAnimation;
@property(retain, nonatomic) LOTAnimationView *breatheAnimationView; // @synthesize breatheAnimationView=_breatheAnimationView;
@property(nonatomic) _Bool isInterrupted; // @synthesize isInterrupted=_isInterrupted;
@property(nonatomic) _Bool sendButtonTouchIsNotFinish; // @synthesize sendButtonTouchIsNotFinish=_sendButtonTouchIsNotFinish;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *currentSendMoreGiftItem; // @synthesize currentSendMoreGiftItem=_currentSendMoreGiftItem;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) NSString *currentComboId; // @synthesize currentComboId=_currentComboId;
@property(nonatomic) unsigned long long sendingCount; // @synthesize sendingCount=_sendingCount;
@property(nonatomic) _Bool isEnableSendAgain; // @synthesize isEnableSendAgain=_isEnableSendAgain;
@property(copy, nonatomic) CDUnknownBlockType sendingMoreButtonSendingCountIncreasedCallback; // @synthesize sendingMoreButtonSendingCountIncreasedCallback=_sendingMoreButtonSendingCountIncreasedCallback;
@property(copy, nonatomic) CDUnknownBlockType sendingMoreButtonComboActionBeginCallback; // @synthesize sendingMoreButtonComboActionBeginCallback=_sendingMoreButtonComboActionBeginCallback;
@property(copy, nonatomic) CDUnknownBlockType sendingMoreButtonEnableCallback; // @synthesize sendingMoreButtonEnableCallback=_sendingMoreButtonEnableCallback;
@property(nonatomic) __weak id <MMLiveRewardGiftSendingMoreLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)longPressSendingGiftOperation;
- (void)endSendButtonLongPressRecognition;
- (void)beginSendButtonLongPressRecognition;
- (void)onSendButtonClickedEnd;
- (void)onSendButtonClickedStart;
- (void)setInterruptedFlag:(_Bool)arg1 targetHost:(unsigned long long)arg2;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)arg1;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)arg1;
- (void)setEnableSendAgainWithGiftItem:(id)arg1 comboId:(id)arg2 targetHost:(unsigned long long)arg3;
- (void)stopGiftButtonBreatheAnimation:(_Bool)arg1;
- (void)startGiftButtonBreatheAnimation;
- (void)sendGiftButtonReduceAnimation;
- (void)sendGiftButtonEnlargeAnimation;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (id)getFinderLiveTask;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

