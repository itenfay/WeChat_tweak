//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LOTAnimationView, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, MMUIButton, MMUILabel, MMUIView, NSString, UILongPressGestureRecognizer;
@protocol MMLiveRewardGiftSendingMoreLogicDelegate;

@interface MMLiveRewardGiftSendingMoreBubbleView
{
    _Bool _isEnableSendAgain;
    _Bool _sendButtonTouchIsNotFinish;
    _Bool _sendButtonLongPressIsOver;
    _Bool _isInterrupted;
    _Bool _shouldUseQuickSendAnimation;
    id <MMLiveRewardGiftSendingMoreLogicDelegate> _logicDelegate;
    CDUnknownBlockType _sendingMoreBubbleEnableCallback;
    MMFinderLiveTaskId *_liveTaskId;
    MMFinderLiveRewardGiftItem *_currentSendMoreGiftItem;
    unsigned long long _sendingCount;
    NSString *_currentComboId;
    MMUIView *_contentView;
    LOTAnimationView *_breatheAnimationView;
    LOTAnimationView *_shockAnimationView;
    MMUIButton *_sendButton;
    MMUILabel *_sendingCountLabel;
    UILongPressGestureRecognizer *_sendButtonLongPressGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *sendButtonLongPressGesture; // @synthesize sendButtonLongPressGesture=_sendButtonLongPressGesture;
@property(retain, nonatomic) MMUILabel *sendingCountLabel; // @synthesize sendingCountLabel=_sendingCountLabel;
@property(retain, nonatomic) MMUIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) LOTAnimationView *shockAnimationView; // @synthesize shockAnimationView=_shockAnimationView;
@property(retain, nonatomic) LOTAnimationView *breatheAnimationView; // @synthesize breatheAnimationView=_breatheAnimationView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool shouldUseQuickSendAnimation; // @synthesize shouldUseQuickSendAnimation=_shouldUseQuickSendAnimation;
@property(nonatomic) _Bool isInterrupted; // @synthesize isInterrupted=_isInterrupted;
@property(nonatomic) _Bool sendButtonLongPressIsOver; // @synthesize sendButtonLongPressIsOver=_sendButtonLongPressIsOver;
@property(nonatomic) _Bool sendButtonTouchIsNotFinish; // @synthesize sendButtonTouchIsNotFinish=_sendButtonTouchIsNotFinish;
@property(retain, nonatomic) NSString *currentComboId; // @synthesize currentComboId=_currentComboId;
@property(nonatomic) unsigned long long sendingCount; // @synthesize sendingCount=_sendingCount;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *currentSendMoreGiftItem; // @synthesize currentSendMoreGiftItem=_currentSendMoreGiftItem;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) _Bool isEnableSendAgain; // @synthesize isEnableSendAgain=_isEnableSendAgain;
@property(copy, nonatomic) CDUnknownBlockType sendingMoreBubbleEnableCallback; // @synthesize sendingMoreBubbleEnableCallback=_sendingMoreBubbleEnableCallback;
@property(nonatomic) __weak id <MMLiveRewardGiftSendingMoreLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)stopBubbleShockAnimation;
- (void)startBubbleShockAnimation;
- (void)stopBubbleBreatheAnimation;
- (void)startBubbleBreatheAnimation;
- (void)onLongpressSendButton:(id)arg1;
- (void)longPressSendingGiftOperation;
- (void)endSendButtonLongPressRecognition;
- (void)beginSendButtonLongPressRecognition;
- (void)onSendButtonClickedEnd;
- (void)onSendButtonClickedStart;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)arg1;
- (void)setInterruptedFlag:(_Bool)arg1 targetHost:(unsigned long long)arg2;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)arg1;
- (void)setEnableSendAgainWithGiftItem:(id)arg1 comboId:(id)arg2 targetHost:(unsigned long long)arg3;
- (void)countLabelDanceAnimation:(double)arg1;
- (void)layoutUI;
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

