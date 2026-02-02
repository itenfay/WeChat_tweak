//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class C2CReportController, ChatUnavailableTipsView, MMInputToolView, NSString, OpenIMSucceedContactLogic, UIImageView, WCTopicSearchViewController, XMailBindMailControlLogic;

@interface WeixinContentLogicController
{
    _Bool m_bTipsShow;
    OpenIMSucceedContactLogic *m_openIMSucceedContactLogic;
    C2CReportController *m_reportController;
    _Bool _bIgnoreShowBizContentSeletor;
    _Bool _bIsShowingPayPluginTopMsgBar;
    UIImageView *_toolView;
    XMailBindMailControlLogic *_bindMailControlLogic;
    WCTopicSearchViewController *_topicSearchVC;
    ChatUnavailableTipsView *_chatUnavailableTipsView;
    MMInputToolView *_inputToolView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsShowingPayPluginTopMsgBar; // @synthesize bIsShowingPayPluginTopMsgBar=_bIsShowingPayPluginTopMsgBar;
@property(nonatomic) __weak MMInputToolView *inputToolView; // @synthesize inputToolView=_inputToolView;
@property(retain, nonatomic) ChatUnavailableTipsView *chatUnavailableTipsView; // @synthesize chatUnavailableTipsView=_chatUnavailableTipsView;
@property(nonatomic) __weak WCTopicSearchViewController *topicSearchVC; // @synthesize topicSearchVC=_topicSearchVC;
@property(nonatomic) _Bool bIgnoreShowBizContentSeletor; // @synthesize bIgnoreShowBizContentSeletor=_bIgnoreShowBizContentSeletor;
@property(retain, nonatomic) XMailBindMailControlLogic *bindMailControlLogic; // @synthesize bindMailControlLogic=_bindMailControlLogic;
@property(retain, nonatomic) UIImageView *toolView; // @synthesize toolView=_toolView;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onPopFromNavigationController;
- (void)DidAddMsg:(id)arg1;
- (void)onWillDisplayMsg:(id)arg1;
- (void)onClickUnreadTip:(unsigned long long)arg1;
- (void)setHasShowUnreadTip:(unsigned long long)arg1;
- (void)onAddTopMsg:(id)arg1;
- (void)onTopMsgTipsBarExpandView;
- (void)onClickClosePayPluginTopMsgTipsBar:(id)arg1;
- (void)onClickPayPluginTopMsgTipsBar:(id)arg1;
- (void)updateTopMessageInfo;
- (_Bool)shouldUseNewTipsNavBar;
- (unsigned int)getBaseMsgContentViewScene;
- (_Bool)supportWXKeyBoard;
- (unsigned int)currPageAppmsgReportScene;
- (unsigned int)currPageAppmsgEnterType;
- (_Bool)shouldPreDownloadPageData;
- (_Bool)inPageSwitch_shouldPreCreateAndUpdateAndTryReport;
- (_Bool)mainSwitch_shouldHandleAppmsg;
- (void)onSendVerifyMessage:(id)arg1;
- (void)onAddContact;
- (_Bool)shouldHideToolViewWhenKeyboardHide;
- (id)baseContactToForwardSearchResult;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1 growTextView:(id)arg2;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)onTopicSearchCancel:(id)arg1;
- (void)onTopicSearchQuerySelected:(id)arg1 context:(id)arg2;
- (void)onTopicSearchResultSended:(id)arg1;
- (void)showTagHalfScreenQueryViewController:(id)arg1;
- (void)onClickTopicSearchEntry;
- (_Bool)isEnableTopicSearchShare;
- (_Bool)isEnableTopicSearchInteraction;
- (void)jumpToOpenSucceedContactSession:(id)arg1;
- (void)openSucceedContactContactInfo:(id)arg1;
- (id)getOpenIMSucceedContactLogic;
- (void)showSucceedContactWindow:(id)arg1 isNewSucceedContact:(_Bool)arg2;
- (void)jumpToSession:(id)arg1;
- (void)onClickPatMessageLinkWithUrl:(id)arg1;
- (void)hadShowNewXmlSystemMessage:(id)arg1;
- (id)getTargetProfileFromURL:(id)arg1;
- (id)getTargetProfileAntispamTicketFromURL:(id)arg1;
- (void)openProfileFromURL:(id)arg1 andScene:(unsigned int)arg2;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)HandleReceiveBrandMsg;
- (void)onClickReceiveBrandMsg;
- (void)HandleShieldBrandMsg;
- (void)onClickShieldBrandMsg;
- (_Bool)isNeedCached;
- (id)GetRightBarBtn;
- (void)checkSecurityBannerShow;
- (_Bool)isContactNeedToAddFriend;
- (_Bool)shouldShowChatUnavailableTipsView;
- (_Bool)canReplyMsg;
- (void)checkChatUnavailableViewShow;
- (void)checkAddFriend;
- (_Bool)isInMyContactList;
- (void)triggerFinderReportAction;
- (void)onExitRoom;
- (void)ViewWillAppear;
- (void)onPerformAction:(id)arg1;
- (void)onWillPopFromNavigationController;
- (void)ViewDidInit;
- (void)ViewWillInit;
- (void)UnRegister;
- (void)Register;
- (void)OnGetMailUnreadCount:(int)arg1;
- (void)onXMailBindMailControlLogicCanceled:(id)arg1;
- (void)onXMailBindMailControlLogicSuccess:(id)arg1 mailAddr:(id)arg2;
- (void)onJumpInstallMail;
- (void)onEnterMailAppBtnPress:(id)arg1;
- (void)ShowNewMail;
- (void)bringQQMailToolView2Front;
- (void)initQQMailToolView;
- (id)getDefaultEnterMailAppTitle;
- (void)checkQQMailUnReadCount;
- (_Bool)isQQMailAppInstall;
- (_Bool)isQQMailPlugin;
- (id)GetChatContact;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)newMessageFromAddContactToChatRoom:(id)arg1;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (void)checkNeedContactVerify;
- (void)ViewDidAppear;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)OpenDetailInfo;
- (_Bool)isOpenSingleInfo;
- (void)OpenContactInfo:(id)arg1 andScene:(unsigned int)arg2;
- (void)OpenContactInfo:(id)arg1;
- (id)GetRightBarButtonTitle;
- (_Bool)HasCustomToolBar;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (_Bool)isToolViewHidden;
- (_Bool)canShowChatRoomInfo;
- (_Bool)CanRemoteRecord;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)clearUpdatableMsgNotify;
- (void)cleanExclusiveHbCount;
- (void)clearAACount;
- (void)clearTransferCount;
- (void)clearContactVerifyFlag;
- (void)clearAllMsg;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)getDownMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)getMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)onWillEnterRoom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

