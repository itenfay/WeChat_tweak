//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppMessageBlockButton, CADisplayLink, CTRichTextView, CommonMessageCellViewExtTarget, CommonMessageViewModel, MMCPLabel, MMHeadImageView, MMUIActivityIndicatorView, NSString, TextStateItemView, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView, YYAsyncImageView;

@interface CommonMessageCellView
{
    struct CGRect m_bubbleBorderFrame;
    MMHeadImageView *m_headImageView;
    MMCPLabel *m_chatRoomNameLabel;
    MMCPLabel *m_chatRoomDescLabel;
    TextStateItemView *m_chatRoomTextStateView;
    YYAsyncImageView *m_bgImageView;
    YYAsyncImageView *m_maskImageView;
    MMUIActivityIndicatorView *m_sendingView;
    UIButton *m_sendFailButton;
    UIButton *m_cancelButton;
    UIView *m_sourceViewInside;
    UIButton *m_sourceViewBottom;
    AppMessageBlockButton *m_appMessageBlockButton;
    CTRichTextView *m_crashWarningLabel;
    CADisplayLink *m_shakeHeadDisplayLink;
    _Bool _didChatroomInDarkBkg;
    UIVisualEffectView *_bgBlurView;
    UILabel *_bottomSourceLabel;
    UIImageView *_bottomLeftIconView;
    CommonMessageCellViewExtTarget *_extTarget;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didChatroomInDarkBkg; // @synthesize didChatroomInDarkBkg=_didChatroomInDarkBkg;
@property(retain, nonatomic) CommonMessageCellViewExtTarget *extTarget; // @synthesize extTarget=_extTarget;
@property(nonatomic) __weak UIImageView *bottomLeftIconView; // @synthesize bottomLeftIconView=_bottomLeftIconView;
@property(nonatomic) __weak UILabel *bottomSourceLabel; // @synthesize bottomSourceLabel=_bottomSourceLabel;
@property(retain, nonatomic) UIVisualEffectView *bgBlurView; // @synthesize bgBlurView=_bgBlurView;
- (void)updateBgImageView:(_Bool)arg1;
- (void)onClickAsRefer;
- (void)onExtChatBackgroundChanged:(id)arg1;
- (id)additionalCustomActions;
- (id)accessibilityCustomActions;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)handleMagicTapAction:(id)arg1;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)addMagicTapActions:(id)arg1;
- (void)onModifyKFContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onModifyContact:(id)arg1;
- (void)OnAppInfoChanged:(id)arg1;
- (void)OnAppWatermarkChanged:(id)arg1;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (double)arcWithAngle:(double)arg1;
- (void)shakeHeadAndContent:(_Bool)arg1 withRotation:(double)arg2 withDelaySecond:(double)arg3;
- (void)restoreShakeHeadAnimation;
- (void)removeShakeHeadAnimation;
- (void)updateShakeHeadAnimation;
- (void)startShakeHeadAnimationFromStart:(_Bool)arg1;
- (void)shakeHeadIfNeeded;
- (void)onAppButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)showRevokePatActionSheetForPat:(id)arg1 fromChat:(id)arg2;
- (void)onHeadImageDoubleClick:(id)arg1;
- (void)onHeadImageLongPressed:(id)arg1;
- (void)onHeadImageClicked:(id)arg1;
- (void)layoutForCrashWarning;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)initAppMessageBlockButton;
- (void)initSourceViewInside;
- (void)updateBottomSourceView;
- (id)genSourceViewBottomRightView;
- (id)roomTodoViewText;
- (id)genSourceViewBottomLeftView;
- (void)initSourceViewBottom;
- (_Bool)canClickSourceView;
- (void)addCancelButton;
- (void)addSendFailButton;
- (void)addSendingView;
- (id)getBgImageView;
- (id)getSendingView;
- (id)getHeadImageView;
- (void)initMaskImageView;
- (void)initBgImageView;
- (void)initChatRoomDescLabel;
- (void)setChatRoomTextStateEmojiColor;
- (void)initChatRoomTextStateLabel;
- (void)setChatRoomNameLabelTextColor;
- (void)initChatRoomNameLabel;
- (_Bool)canPatHeadImage;
- (void)initHeadImageView;
- (void)initCrashWarningLabel;
- (void)setFrameForBgImageView:(struct CGRect)arg1;
- (struct CGRect)showRectForMenuController;
- (void)showUIStatus;
- (void)hideUIStatus;
- (void)updateStatus;
- (void)updateNodeStatus;
- (void)layoutContentView;
- (void)onDisappear;
- (void)onAppear;
- (void)layoutInternal;
- (void)layoutSubviews;
- (void)refreshPatRevokeTipsView;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CommonMessageViewModel *viewModel; // @dynamic viewModel;

@end

