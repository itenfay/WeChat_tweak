//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSArray, NSData, NSDictionary, NSMutableArray, NSString, SessionSelectController, SharePreConfirmSheetView, SharePreConfirmView, UIView, WWKMsgForwarder;
@protocol ForwardMessageLogicDelegate;

@interface ForwardMessageLogicController
{
    id <ForwardMessageLogicDelegate> m_delegate;
    NSMutableArray *m_msgList;
    NSMutableArray *m_msgListForWXWork;
    NSArray *m_msgRecordOriginList;
    NSArray *m_toContacts;
    SharePreConfirmView *m_confirmView;
    SessionSelectController *m_sessionSelectController;
    UIView *_waitingView;
    unsigned long long m_startTime;
    CContact *m_toChatRoomContact;
    NSString *m_atUserList;
    _Bool _bMutliContact;
    _Bool _bShowSendSuccessView;
    _Bool _bHiddenSendSuccessToastView;
    _Bool _bPresent;
    _Bool _bAnimation;
    _Bool _m_bFilterMyContact;
    _Bool _bSpecificContact;
    _Bool _forbidForwardToEnterpriseChat;
    _Bool _onlyChatRoom;
    _Bool _m_bIgnoreChatRoom;
    _Bool _hideNewSessionButton;
    _Bool _sendWaiting;
    _Bool _hideSelectFromContactList;
    _Bool _alignsFilterRulesInSearchResult;
    _Bool _hasInputSth;
    _Bool _supportLandscapeShareConfirmView;
    _Bool _hasAnyMsgDidnotDownload;
    unsigned int _m_uiAppMsgScene;
    unsigned int _m_uiIDKeyScene;
    unsigned int _m_forwardType;
    unsigned long long _m_commonSearchScene;
    NSString *_confirmPlaceholder;
    NSString *_title;
    NSString *_fromContactUserName;
    NSString *_fromAppName;
    NSString *_stayAtString;
    NSString *_selectTitle;
    NSArray *_cancelSendContacts;
    NSDictionary *_shareInfo;
    NSString *_todoActivityId;
    NSString *_searchText;
    NSData *_forwardThumbData;
    unsigned long long _eMultiForwardType;
    id _userData;
    unsigned long long _forwardBizScene;
    unsigned long long _loadingType;
    NSString *_reportUserInfo;
    double _pageSheetHeight;
    WWKMsgForwarder *_wwkMsgForwarder;
    SharePreConfirmSheetView *_confirmSheetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SharePreConfirmSheetView *confirmSheetView; // @synthesize confirmSheetView=_confirmSheetView;
@property(retain, nonatomic) WWKMsgForwarder *wwkMsgForwarder; // @synthesize wwkMsgForwarder=_wwkMsgForwarder;
@property(nonatomic) _Bool hasAnyMsgDidnotDownload; // @synthesize hasAnyMsgDidnotDownload=_hasAnyMsgDidnotDownload;
@property(nonatomic) _Bool supportLandscapeShareConfirmView; // @synthesize supportLandscapeShareConfirmView=_supportLandscapeShareConfirmView;
@property(nonatomic) double pageSheetHeight; // @synthesize pageSheetHeight=_pageSheetHeight;
@property(retain, nonatomic) NSString *reportUserInfo; // @synthesize reportUserInfo=_reportUserInfo;
@property(readonly, nonatomic) _Bool hasInputSth; // @synthesize hasInputSth=_hasInputSth;
@property(nonatomic) unsigned long long loadingType; // @synthesize loadingType=_loadingType;
@property(nonatomic) unsigned long long forwardBizScene; // @synthesize forwardBizScene=_forwardBizScene;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(nonatomic) unsigned long long eMultiForwardType; // @synthesize eMultiForwardType=_eMultiForwardType;
@property(retain, nonatomic) NSData *forwardThumbData; // @synthesize forwardThumbData=_forwardThumbData;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) _Bool alignsFilterRulesInSearchResult; // @synthesize alignsFilterRulesInSearchResult=_alignsFilterRulesInSearchResult;
@property(nonatomic) _Bool hideSelectFromContactList; // @synthesize hideSelectFromContactList=_hideSelectFromContactList;
@property(copy, nonatomic) NSString *todoActivityId; // @synthesize todoActivityId=_todoActivityId;
@property(nonatomic) _Bool sendWaiting; // @synthesize sendWaiting=_sendWaiting;
@property(retain, nonatomic) NSDictionary *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(nonatomic) _Bool hideNewSessionButton; // @synthesize hideNewSessionButton=_hideNewSessionButton;
@property(nonatomic) _Bool m_bIgnoreChatRoom; // @synthesize m_bIgnoreChatRoom=_m_bIgnoreChatRoom;
@property(nonatomic) _Bool onlyChatRoom; // @synthesize onlyChatRoom=_onlyChatRoom;
@property(nonatomic) _Bool forbidForwardToEnterpriseChat; // @synthesize forbidForwardToEnterpriseChat=_forbidForwardToEnterpriseChat;
@property(copy, nonatomic) NSArray *cancelSendContacts; // @synthesize cancelSendContacts=_cancelSendContacts;
@property(nonatomic) _Bool bSpecificContact; // @synthesize bSpecificContact=_bSpecificContact;
@property(retain, nonatomic) NSString *selectTitle; // @synthesize selectTitle=_selectTitle;
@property(retain, nonatomic) NSString *stayAtString; // @synthesize stayAtString=_stayAtString;
@property(retain, nonatomic) NSString *fromAppName; // @synthesize fromAppName=_fromAppName;
@property(nonatomic) unsigned int m_forwardType; // @synthesize m_forwardType=_m_forwardType;
@property(retain, nonatomic) NSString *fromContactUserName; // @synthesize fromContactUserName=_fromContactUserName;
@property(nonatomic) _Bool m_bFilterMyContact; // @synthesize m_bFilterMyContact=_m_bFilterMyContact;
@property(nonatomic) unsigned int m_uiIDKeyScene; // @synthesize m_uiIDKeyScene=_m_uiIDKeyScene;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *confirmPlaceholder; // @synthesize confirmPlaceholder=_confirmPlaceholder;
@property(nonatomic) _Bool bAnimation; // @synthesize bAnimation=_bAnimation;
@property(nonatomic) _Bool bPresent; // @synthesize bPresent=_bPresent;
@property(nonatomic) _Bool bHiddenSendSuccessToastView; // @synthesize bHiddenSendSuccessToastView=_bHiddenSendSuccessToastView;
@property(nonatomic) _Bool bShowSendSuccessView; // @synthesize bShowSendSuccessView=_bShowSendSuccessView;
@property(nonatomic) unsigned int m_uiAppMsgScene; // @synthesize m_uiAppMsgScene=_m_uiAppMsgScene;
@property(nonatomic) unsigned long long m_commonSearchScene; // @synthesize m_commonSearchScene=_m_commonSearchScene;
@property(nonatomic) _Bool bMutliContact; // @synthesize bMutliContact=_bMutliContact;
@property(nonatomic) __weak id <ForwardMessageLogicDelegate> delegate; // @synthesize delegate=m_delegate;
- (id)getAtUserContactDisplayName:(id)arg1;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddAtUser:(id)arg1;
- (void)onCancelSelectContact;
- (void)didMultiSelectContact:(id)arg1;
- (void)didSelectContact:(id)arg1;
- (void)onForwardMessageSend;
- (id)getViewController;
- (void)forwardMsgToWeWork;
- (_Bool)checkDidDownLoadOKRecordDataFieldAr:(id)arg1;
- (void)checkAndFilterMsgForForwardToWeWork;
- (void)onGUEConfirm:(id)arg1;
- (void)onGUEClose:(id)arg1;
- (void)configGroupUndoneReport;
- (_Bool)checkIfShareGroupToolItem:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)dismissLogicController;
- (id)extInfoForMessageList:(id)arg1;
- (void)reportMsgForwardHasInput:(_Bool)arg1;
- (void)reportWeAppMsgInfoWithMsgWrap:(id)arg1 toContacts:(id)arg2;
- (void)reportImageMsgInfoWithMsgWrap:(id)arg1;
- (void)reportUrlMsgInfoWithMsgWrap:(id)arg1 actionRet:(_Bool)arg2;
- (void)reportViewControllerIDKey;
- (void)reportConfirmIDKey;
- (id)checkMessageWrap:(id)arg1 toContact:(id)arg2;
- (void)ForwardMsg:(id)arg1 ToContact:(id)arg2;
- (void)ForwardMsgList:(id)arg1 ToContact:(id)arg2;
- (void)backOnShouldSelectContactError;
- (id)sectionTitleForCurrentSessionView;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessionCancelInPageSheetMode:(id)arg1;
- (void)OnSelectForwardToEnterpriseChat:(id)arg1 appType:(long long)arg2;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (_Bool)sessionSelectControllerHideSelectFromContactList:(id)arg1;
- (void)internalShowConfirmView;
- (void)showConfirmView:(id)arg1;
- (void)dismissViewController;
- (double)heightForSessionSelectControllerChildPageSheet:(id)arg1 defaultHeight:(double)arg2;
- (void)OnSharePreConfirmSheetViewStayAtWeChat:(id)arg1;
- (void)OnSharePreConfirmSheetViewBackToApp:(id)arg1;
- (unsigned long long)OnSharePreConfirmSheetViewGetLoadingType:(id)arg1;
- (void)OnSharePreConfirmSheetViewShowRoomContactSelector:(id)arg1;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)showRoomContactSelectorViewController;
- (void)OnSharePreConfirmViewShowRoomContactSelector:(id)arg1;
- (unsigned long long)OnSharePreConfirmViewGetLoadingType:(id)arg1;
- (void)OnSharePreConfirmViewDidHide:(id)arg1;
- (void)OnSharePreConfirmViewStayAtWeChat:(id)arg1;
- (void)OnSharePreConfirmViewBackToApp:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (id)mmvcForSendResultToast;
- (void)onWaitingTimeout;
- (void)showContactSelectViewController;
- (void)forwardMsgList:(id)arg1 msgOriginList:(id)arg2 toContacts:(id)arg3 ignoreTips:(_Bool)arg4 showConfirmView:(_Bool)arg5;
- (void)forwardMsgList:(id)arg1 msgOriginList:(id)arg2 toContacts:(id)arg3 ignoreTips:(_Bool)arg4;
- (void)forwardNoConfirmForMsgList:(id)arg1 toContacts:(id)arg2;
- (void)forwardMsgList:(id)arg1 toContacts:(id)arg2;
- (void)forwardMsgList:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (void)forwardRecordMessage:(id)arg1 msgList:(id)arg2 toContacts:(id)arg3;
- (_Bool)isShareCardForwardInChat;
- (id)getOriginMessags;
- (id)getMessages;
- (id)getToContacts;
- (void)clearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

