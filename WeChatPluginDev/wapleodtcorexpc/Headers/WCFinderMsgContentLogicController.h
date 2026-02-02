//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMInputToolView, NSString, WCFinderAuthInfo, WCFinderInteractionLimitWarningView, WCFinderMsgChatContentReporter, WCFinderUserBindPhoneAssist;

@interface WCFinderMsgContentLogicController
{
    _Bool _canSendAttachment;
    _Bool _canShowChangeRoleTips;
    _Bool _needUpdateSessionInfo;
    _Bool _hasUpdateSessionInfo;
    int _sourceType;
    WCFinderAuthInfo *_authInfo;
    WCFinderMsgChatContentReporter *_reporter;
    double _navigationBarHeightWithoutBadgeGroupView;
    WCFinderUserBindPhoneAssist *_assist;
    MMInputToolView *_toolViewEx;
    WCFinderInteractionLimitWarningView *_warningView;
    unsigned long long _aliasInfoCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long aliasInfoCount; // @synthesize aliasInfoCount=_aliasInfoCount;
@property(nonatomic) __weak WCFinderInteractionLimitWarningView *warningView; // @synthesize warningView=_warningView;
@property(nonatomic) __weak MMInputToolView *toolViewEx; // @synthesize toolViewEx=_toolViewEx;
@property(nonatomic) _Bool hasUpdateSessionInfo; // @synthesize hasUpdateSessionInfo=_hasUpdateSessionInfo;
@property(retain, nonatomic) WCFinderUserBindPhoneAssist *assist; // @synthesize assist=_assist;
@property(nonatomic) double navigationBarHeightWithoutBadgeGroupView; // @synthesize navigationBarHeightWithoutBadgeGroupView=_navigationBarHeightWithoutBadgeGroupView;
@property(retain, nonatomic) WCFinderMsgChatContentReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) WCFinderAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(nonatomic) _Bool needUpdateSessionInfo; // @synthesize needUpdateSessionInfo=_needUpdateSessionInfo;
@property(nonatomic) _Bool canShowChangeRoleTips; // @synthesize canShowChangeRoleTips=_canShowChangeRoleTips;
@property(nonatomic) _Bool canSendAttachment; // @synthesize canSendAttachment=_canSendAttachment;
- (_Bool)textViewHeadViewSeparateStyle;
- (void)onFinderMsgSessionStatusUpdatedWithSessionId:(id)arg1;
- (void)addToBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)onFinderProfileClearAllMsg;
- (void)onOpenNewPrivateMsgSessionWithChangeView:(id)arg1;
- (void)onFinderTrumpetSelectViewLiveIdentityDidChanged:(unsigned int)arg1 scene:(unsigned long long)arg2;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderMsgAuthorSessionOwnerChanged;
- (void)onFinderPrivateMsgContactExtInfoUpdatedWithSessionId:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onWillPushFromNavigationController;
- (void)onPopFromNavigationController;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (void)clickChangeIdentityAction;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)updateDisSendMsgView;
- (_Bool)shouldUseNewTipsNavBar;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (id)GetMessageFromImage:(id)arg1;
- (void)onOpenCameraController;
- (void)onOpenMediaBrowser;
- (_Bool)canSendCaptureImage;
- (_Bool)canPasteImage;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)CanSendEmoticonMessage;
- (id)makeACustomNavBarTitleView;
- (void)updateNavBarHeightAndCustomNavBarTitleView;
- (void)showGreetSystemMessageTipsBar;
- (void)ViewWillAppear;
- (id)GetTitleTailImageView;
- (_Bool)hasCustomNavBarTitleView;
- (_Bool)shouldCreateBadgeGroupView;
- (void)UnRegister;
- (void)Register;
- (_Bool)canShowGreetLimitTips;
- (_Bool)canSendTextMessageWithText:(id)arg1;
- (_Bool)checkCanUseAttachmentWithNeedAlert:(_Bool)arg1;
- (void)configReportInfoWithReporter:(id)arg1;
- (void)dealloc;
- (void)configWithSessionId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

