//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, MMUIButton, MMUILabel, MMUIView, NSString, PAGView, UIImageView, UILongPressGestureRecognizer, WCFinderAnimationLoadingView;
@protocol MMLiveRewardGiftPreviewWindowDelegate;

@interface MMLiveRewardGiftPreviewWindow
{
    _Bool _isMultipleReward;
    _Bool _isPrepared;
    _Bool _needAutoUpdate;
    id <MMLiveRewardGiftPreviewWindowDelegate> _delegate;
    CDUnknownBlockType _rewardGiftClickedCallback;
    CDUnknownBlockType _longPressedCallback;
    MMFinderLiveRewardGiftItem *_giftItem;
    MMUIView *_backgroundView;
    MMUIView *_contentView;
    WCFinderAnimationLoadingView *_prepareLoadingView;
    PAGView *_previewAnimationView;
    MMUIButton *_sendButton;
    MMFinderLiveTaskId *_taskId;
    UILongPressGestureRecognizer *_sendButtonLongPressGesture;
    MMUILabel *_activityDescriptionLabel;
    unsigned long long _mode;
    UIImageView *_coinIconView;
    MMUILabel *_priceLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) MMUILabel *activityDescriptionLabel; // @synthesize activityDescriptionLabel=_activityDescriptionLabel;
@property(retain, nonatomic) UILongPressGestureRecognizer *sendButtonLongPressGesture; // @synthesize sendButtonLongPressGesture=_sendButtonLongPressGesture;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMUIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) PAGView *previewAnimationView; // @synthesize previewAnimationView=_previewAnimationView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *prepareLoadingView; // @synthesize prepareLoadingView=_prepareLoadingView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool needAutoUpdate; // @synthesize needAutoUpdate=_needAutoUpdate;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(nonatomic) _Bool isMultipleReward; // @synthesize isMultipleReward=_isMultipleReward;
@property(copy, nonatomic) CDUnknownBlockType longPressedCallback; // @synthesize longPressedCallback=_longPressedCallback;
@property(copy, nonatomic) CDUnknownBlockType rewardGiftClickedCallback; // @synthesize rewardGiftClickedCallback=_rewardGiftClickedCallback;
@property(nonatomic) __weak id <MMLiveRewardGiftPreviewWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (double)selfCornerRadius;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (_Bool)needDisplayFansGroupEntrance;
- (id)liveTask;
- (void)onMagicRewardResourceStateChanged:(unsigned long long)arg1 resource:(id)arg2;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)onActionJumpActivityItem:(id)arg1;
- (void)showMenuItemsForAudience:(id)arg1;
- (void)onLongpressSendButton:(id)arg1;
- (void)updatePreviewAnimationViewHidden;
- (void)updateUIForPrepareStateChange;
- (void)updateIsPrepared:(_Bool)arg1;
- (void)checkIsPrepared;
- (void)onSendButtonClickedEnd;
- (void)onSendButtonClickedStart;
- (void)updatePreviewViewDesc;
- (void)updateMagicRewardResourceExtRegister;
- (void)initUI;
- (void)updateSendButtonWithGiftItem;
- (void)updateWithGiftItem:(id)arg1 mode:(unsigned long long)arg2;
- (void)clearAllState;
- (void)dismissWithAnimation;
- (void)dismissWithoutAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2 isMultipleReward:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

