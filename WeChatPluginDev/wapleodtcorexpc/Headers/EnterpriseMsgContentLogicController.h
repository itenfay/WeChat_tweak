//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, NSString;

@interface EnterpriseMsgContentLogicController
{
    _Bool m_bStartShowRoomContactSelector;
    _Bool m_bPresentRoomContactSelector;
    MMLoadingView *m_loadingView;
}

- (void).cxx_destruct;
- (void)onCleanUpEnterpriseChat:(id)arg1;
- (void)onUpdateEnterpriseGroupMemberList:(id)arg1 errorCode:(int)arg2;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 DelAll:(_Bool)arg3;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 MsgWrap:(id)arg3;
- (void)OnAddEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnModEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)onFinishSelectedLocation;
- (void)onWebViewWillClose:(id)arg1;
- (void)enterChat:(id)arg1;
- (void)createSingleChat:(id)arg1;
- (void)OpenEmoticonToolView:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (_Bool)isLastCharacterAlphaNumeric:(id)arg1;
- (void)onTextChange:(id)arg1 selectedRange:(struct _NSRange)arg2 markedRange:(struct _NSRange)arg3;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (void)SaveContentAndState;
- (id)getExtraInfo;
- (void)delChatroomMember:(id)arg1;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)showRoomContactSelectorViewController;
- (void)clearAtMeCount;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (void)onInputTextDeleteAll;
- (void)AddAtUser:(id)arg1;
- (id)GetRightBarBtn;
- (id)GetRightBarButtonImageName;
- (id)onGetRightBarButton;
- (_Bool)canShowChatRoomInfo;
- (void)setNeedUpdateTitle:(_Bool *)arg1;
- (_Bool)ShouldShowMultiSelectMode;
- (_Bool)isShowHeadImage:(id)arg1;
- (_Bool)CanRemoteRecord;
- (_Bool)CanSendMultiImage;
- (_Bool)CanSendOriginalImage;
- (_Bool)CanSendOriginalVideo;
- (_Bool)CanShowBanner;
- (unsigned int)getSearchedMsgLocalID;
- (_Bool)shouldSearchedMsgHightlight;
- (_Bool)isForbiddenSearchBar;
- (_Bool)CanSendEmoticonMessage;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)HasCustomToolBar;
- (_Bool)canShowEnterpriseBrandEntry;
- (id)getMsgSendOpEntry;
- (id)canFavoritesItemBeForward:(id)arg1;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (id)FormLocationMsg:(id)arg1;
- (void)SendLocationMessageWithLocation:(id)arg1;
- (void)SetMsgPlayed:(id)arg1;
- (_Bool)IsRecording;
- (void)CancelRecording;
- (void)StopRecording;
- (_Bool)StartAudioRecording:(id)arg1;
- (id)FormVoiceMsg:(id)arg1 withFilePath:(id)arg2;
- (id)formImageMsgByMMAsset:(id)arg1 toUserName:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (void)SendTextMessage:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)genMsgSource;
- (void)RevokeMsg:(id)arg1;
- (void)modMsgStatusWithoutNotify:(id)arg1;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModImgStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)genClientMsgId:(id)arg1;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetFirstUnReadMessage;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)getEnterpriseContact;
- (id)GetContactName;
- (void)setM_contact:(id)arg1;
- (void)updateTitleView;
- (void)UnRegister;
- (void)Register;
- (void)onWillPushFromNavigationController;
- (void)onWillPopFromNavigationController;
- (void)DidEnterBackground:(id)arg1;
- (void)ViewDidInit;
- (void)initViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

