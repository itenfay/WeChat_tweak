//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandTemplateMsgAuthMessageBubbleModel, MMBrandHeadImageView, MMHeadImageView, MMUIButton, MMUILabel, MMWebImageView, MultiColumnReaderMessageCellMainContentView, MultiColumnReaderMessageViewModel, NSString, RichTextView, UIButton, UIImageView, UILabel, WAContactGetter, WCSubscriptionNotifyActionHeaderView;

@interface MultiColumnReaderMessageCellView
{
    MMBrandHeadImageView *m_headerView;
    UILabel *m_nickNameLabel;
    MMUILabel *m_muteSloganView;
    MMUILabel *m_muteTitleSloganView;
    UILabel *m_weAppMsgOpTitleLabel;
    UIButton *m_msgOpButton;
    MMUIButton *m_headerMenuButton;
    _Bool m_isMuted;
    _Bool m_needGetOrFetchRecvSwitch;
    WAContactGetter *m_contactGetter;
    BrandTemplateMsgAuthMessageBubbleModel *_messageBubbleModel;
    UIImageView *_audioIconView;
    MultiColumnReaderMessageCellMainContentView *m_mainContentView;
    MMWebImageView *m_rightCoverImageView;
    RichTextView *m_footerLabel;
    MMHeadImageView *m_headImageView;
    WCSubscriptionNotifyActionHeaderView *_actionSheetIconView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCSubscriptionNotifyActionHeaderView *actionSheetIconView; // @synthesize actionSheetIconView=_actionSheetIconView;
- (void)onHeadImageLongPressed:(id)arg1;
- (void)onHeadImageClicked:(id)arg1;
- (void)initHeadImageView;
- (_Bool)isAccessibilityElement;
- (void)setContainerType:(unsigned long long)arg1;
- (void)reportMessageBubbleOperationType:(unsigned long long)arg1;
- (void)fillMessageBubbleModelBottomBtnInfo:(id)arg1;
- (void)fillMessageBubbleModelBaseInfo;
- (id)replaceWithOneByteUnit:(id)arg1;
- (_Bool)hasMoneyUnit:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canShowMoreMenuItem;
- (id)operationMenuItems;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateMuteState:(_Bool)arg1;
- (void)onExpose;
- (void)getWeappContactForUsername:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)showRejectAudioNotifySecondSonfirmView;
- (void)showAcceptAudioNotifySecondSonfirmView;
- (void)showAcceptNotifyAndAudioNotifySecondSonfirmView;
- (void)onMoreButton:(id)arg1;
- (void)showToast:(id)arg1;
- (void)layoutEcsKfTempleteMsgOrderInfoWithReaderWrap:(id)arg1 mainContentOriginY:(double *)arg2;
- (void)layoutJumpWeappOpButton:(id)arg1 withWeappUsername:(id)arg2;
- (void)layoutTitleMuteSloganLabelIfNeed;
- (void)layoutHeaderMuteSloganLabelIfNeedOnCenterY:(double)arg1;
- (void)layoutHeaderMenuButtonIfNeedOnCenterY:(double)arg1 parent:(id)arg2;
- (_Bool)isBizTemplateMsg;
- (_Bool)isNewSubscrMsg;
- (_Bool)isOldSubscrMsg;
- (_Bool)isSubscrMsg;
- (_Bool)isNeedHeaderMuteLabel;
- (_Bool)isNeedHeaderMenuButton;
- (void)onDelete:(id)arg1;
- (void)addFavorite;
- (void)forwardMessage;
- (id)getGameCenterWebViewController:(id)arg1;
- (void)jumpFinderGameLiveOpWrap:(id)arg1;
- (void)jumpFinderLiveOpWrap:(id)arg1;
- (void)jumpFinderFeedOpWrap:(id)arg1;
- (void)jumpOpItem:(id)arg1;
- (void)jumpAdvertiseOpWrap:(id)arg1;
- (void)jumpScheduleOpWrap:(id)arg1;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)onClicked;
- (void)onOPButtonClicked:(id)arg1;
- (_Bool)isForbidJumpProfileWhenClickAvatar;
- (void)onHeadImageClick;
- (void)onFinderFeedClick;
- (void)onHeadObjectClick:(id)arg1;
- (double)layoutScheduleContentView:(id)arg1 originY:(double)arg2;
- (void)layoutNickNameLabel;
- (void)addCornerToContentView;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)layoutContentView;
- (void)showAlertViewWhenOpenGlobalRecv:(id)arg1;
- (void)tryAcceptNewSubscriptionNotifyScope;
- (void)onUpdateScopeList:(id)arg1 forUser:(id)arg2;
- (void)onUpdateScopeGlobalRecv:(_Bool)arg1 forUser:(id)arg2;
- (void)onWeAppReceiveMsgStatusChangedSuccess:(_Bool)arg1 WeAppUserName:(id)arg2;
- (void)banListStatusChanged:(id)arg1;
- (void)newMsgUpdateScopeSwitch:(_Bool)arg1 acceptAudio:(_Bool)arg2;
- (void)oldMsgUpdateGlobalSwitchOff;
- (void)newMsgFetchRecvSwitchFromSvr;
- (void)newMsgGetAndDisplayRecvSwitch;
- (void)oldMsgGetOrFetchAndDisplayRecvSwitch;
- (void)onStrangerBrandHeadImageURLChange:(id)arg1;
- (void)getAndDisplayAvatarUrlWithCompleteAction:(CDUnknownBlockType)arg1;
- (void)onAppear;
- (id)headerView;
- (void)getOrFetchRecvSwitch;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MultiColumnReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

