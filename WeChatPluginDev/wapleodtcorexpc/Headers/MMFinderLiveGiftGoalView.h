//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveGiftGoalModel, MMFinderLiveRewardGiftItem, MMFinderLiveSpinnerLabel, MMFinderLiveTaskId, MMRollableLabelView, MMTimer, MMUIButton, NSDateComponentsFormatter, NSString, UIFont, UIImageView, UILabel;
@protocol MMFinderLiveGiftGoalViewDelegate, MMLiveRewardGiftSendingMoreLogicDelegate;

@interface MMFinderLiveGiftGoalView : UIView
{
    _Bool _exposureReported;
    _Bool _isAnchorOrAssistant;
    _Bool _comboStaging;
    _Bool _isInterrupted;
    _Bool _useRapidComboRepeat;
    MMFinderLiveGiftGoalModel *_model;
    id <MMFinderLiveGiftGoalViewDelegate> _delegate;
    id <MMLiveRewardGiftSendingMoreLogicDelegate> _logicDelegate;
    MMFinderLiveTaskId *_taskId;
    MMTimer *_countdownTimer;
    NSDateComponentsFormatter *_countdownFormatter;
    unsigned long long _sendButtonState;
    MMFinderLiveRewardGiftItem *_currentComboGiftItem;
    NSString *_currentComboId;
    unsigned long long _currentSendingCount;
    UIView *_scaleContainer;
    MMUIButton *_closeButton;
    UIImageView *_thumbnailView;
    UIFont *_countLabelsFont;
    UILabel *_currentCountLabel;
    UILabel *_slashLabel;
    UILabel *_targetCountLabel;
    MMRollableLabelView *_fulfilledHeaderLabel;
    MMRollableLabelView *_descriptionLabel;
    UILabel *_statusLabel;
    MMFinderLiveSpinnerLabel *_statusCountdownSpinnerLabel;
    MMUIButton *_sendButton;
    UIView *_sendButtonBackgroundView;
    UIView *_sendButtonBorderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sendButtonBorderView; // @synthesize sendButtonBorderView=_sendButtonBorderView;
@property(retain, nonatomic) UIView *sendButtonBackgroundView; // @synthesize sendButtonBackgroundView=_sendButtonBackgroundView;
@property(retain, nonatomic) MMUIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) MMFinderLiveSpinnerLabel *statusCountdownSpinnerLabel; // @synthesize statusCountdownSpinnerLabel=_statusCountdownSpinnerLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) MMRollableLabelView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMRollableLabelView *fulfilledHeaderLabel; // @synthesize fulfilledHeaderLabel=_fulfilledHeaderLabel;
@property(retain, nonatomic) UILabel *targetCountLabel; // @synthesize targetCountLabel=_targetCountLabel;
@property(retain, nonatomic) UILabel *slashLabel; // @synthesize slashLabel=_slashLabel;
@property(retain, nonatomic) UILabel *currentCountLabel; // @synthesize currentCountLabel=_currentCountLabel;
@property(retain, nonatomic) UIFont *countLabelsFont; // @synthesize countLabelsFont=_countLabelsFont;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *scaleContainer; // @synthesize scaleContainer=_scaleContainer;
@property(nonatomic) _Bool useRapidComboRepeat; // @synthesize useRapidComboRepeat=_useRapidComboRepeat;
@property(nonatomic) _Bool isInterrupted; // @synthesize isInterrupted=_isInterrupted;
@property(nonatomic) unsigned long long currentSendingCount; // @synthesize currentSendingCount=_currentSendingCount;
@property(retain, nonatomic) NSString *currentComboId; // @synthesize currentComboId=_currentComboId;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *currentComboGiftItem; // @synthesize currentComboGiftItem=_currentComboGiftItem;
@property(nonatomic) _Bool comboStaging; // @synthesize comboStaging=_comboStaging;
@property(nonatomic) _Bool isAnchorOrAssistant; // @synthesize isAnchorOrAssistant=_isAnchorOrAssistant;
@property(nonatomic) _Bool exposureReported; // @synthesize exposureReported=_exposureReported;
@property(nonatomic) unsigned long long sendButtonState; // @synthesize sendButtonState=_sendButtonState;
@property(retain, nonatomic) NSDateComponentsFormatter *countdownFormatter; // @synthesize countdownFormatter=_countdownFormatter;
@property(retain, nonatomic) MMTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveRewardGiftSendingMoreLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(nonatomic) __weak id <MMFinderLiveGiftGoalViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveGiftGoalModel *model; // @synthesize model=_model;
- (_Bool)giftSentForCurrentGoal;
- (void)setGiftSentForCurrentGoal;
- (id)giftSentFlagsKv;
- (void)resetSendButtonState;
- (void)stopSendButtonAnimation;
- (void)startSendButtonAnimationWithDuration:(double)arg1 repeatCount:(float)arg2;
- (void)startContinuousSendButtonAnimation;
- (void)invokeSendButtonAnimationWithDuration:(double)arg1;
- (void)invokeSendButtonHoldRepeatAction;
- (void)updateSendButton;
- (void)setStatusCountdownSpinnerLabelText:(id)arg1;
- (void)updateStatusLabel;
- (void)updateDescriptionLabel;
- (void)setCurrentCountLabelText:(id)arg1 animated:(_Bool)arg2;
- (void)initializeComponents;
- (void)onTimerTick;
- (void)onSendButtonHeld:(id)arg1;
- (void)onSendButtonTapped;
- (void)onCloseTapped;
- (void)onGiftAnimationPlayCommandExecuted:(id)arg1;
- (void)onReceivingGiftAnimationPlayCommand:(id)arg1 forTaskId:(id)arg2 vetoFlag:(_Bool *)arg3;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)arg1;
- (void)setInterruptedFlag:(_Bool)arg1 targetHost:(unsigned long long)arg2;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)arg1;
- (void)setEnableSendAgainWithGiftItem:(id)arg1 comboId:(id)arg2 targetHost:(unsigned long long)arg3;
- (void)reportExposure;
- (void)revertStagedSendings;
- (void)updateWithGoalImpl:(id)arg1 raiseFulfilledEventOnCompletion:(_Bool)arg2;
- (void)updateWithGoal:(id)arg1;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

