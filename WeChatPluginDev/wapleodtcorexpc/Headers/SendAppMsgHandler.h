//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CMessageWrap, ForwardMessageLogicController, MMTipsViewController, MMUINavigationController, NSArray, NSMutableDictionary, NSString, OpenApiParameter, WAContactGetter, WCShareAuthViewController, WXMediaInternalMessage;
@protocol SendAppMsgHandleDelegate;

@interface SendAppMsgHandler
{
    OpenApiParameter *m_parameter;
    CMessageWrap *m_messageWrap;
    CContact *m_oContact;
    MMTipsViewController *_tipsViewController;
    _Bool m_bIsHiddenTarBar;
    int m_Scene;
    NSString *m_nsRedirectUrl;
    ForwardMessageLogicController *m_forwardMsgLogic;
    unsigned int m_uiSessionSelectConfirmType;
    _Bool m_bIsFromSysCopy;
    _Bool _m_bIsSendSpecifiedContact;
    _Bool _appBrandWithShareTicket;
    _Bool _canReturnRightShareResult;
    unsigned int _appbrandVersion;
    unsigned int _flagshipFlag;
    id <SendAppMsgHandleDelegate> m_delegate;
    MMUINavigationController *_m_navigationController;
    WXMediaInternalMessage *_mediaMessage;
    WAContactGetter *_contactGetter;
    NSString *_appbrandDisplayName;
    NSString *_appbrandIconUrl;
    NSMutableDictionary *_shareKeyInfo;
    NSString *_appbrandAppId;
    NSArray *_toContacts;
    NSMutableDictionary *_extraInfo;
    NSString *_musicDataCDNMsgID;
    WCShareAuthViewController *_authVC;
}

+ (void)reportShareMsg:(id)arg1 contacts:(id)arg2 openSDKVersion:(id)arg3 shareSource:(unsigned long long)arg4;
+ (void)reportShareAppMsgInSessionMsgArr:(id)arg1 contacts:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCShareAuthViewController *authVC; // @synthesize authVC=_authVC;
@property(retain, nonatomic) NSString *musicDataCDNMsgID; // @synthesize musicDataCDNMsgID=_musicDataCDNMsgID;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSArray *toContacts; // @synthesize toContacts=_toContacts;
@property(nonatomic) _Bool canReturnRightShareResult; // @synthesize canReturnRightShareResult=_canReturnRightShareResult;
@property(nonatomic) _Bool appBrandWithShareTicket; // @synthesize appBrandWithShareTicket=_appBrandWithShareTicket;
@property(retain, nonatomic) NSString *appbrandAppId; // @synthesize appbrandAppId=_appbrandAppId;
@property(retain, nonatomic) NSMutableDictionary *shareKeyInfo; // @synthesize shareKeyInfo=_shareKeyInfo;
@property(nonatomic) unsigned int flagshipFlag; // @synthesize flagshipFlag=_flagshipFlag;
@property(retain, nonatomic) NSString *appbrandIconUrl; // @synthesize appbrandIconUrl=_appbrandIconUrl;
@property(retain, nonatomic) NSString *appbrandDisplayName; // @synthesize appbrandDisplayName=_appbrandDisplayName;
@property(nonatomic) unsigned int appbrandVersion; // @synthesize appbrandVersion=_appbrandVersion;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
@property(retain, nonatomic) WXMediaInternalMessage *mediaMessage; // @synthesize mediaMessage=_mediaMessage;
@property(nonatomic) _Bool m_bIsSendSpecifiedContact; // @synthesize m_bIsSendSpecifiedContact=_m_bIsSendSpecifiedContact;
@property(retain, nonatomic) MMUINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
@property(nonatomic) _Bool m_bIsFromSysCopy; // @synthesize m_bIsFromSysCopy;
@property(nonatomic) int m_Scene; // @synthesize m_Scene;
@property(nonatomic) __weak id <SendAppMsgHandleDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnCdnUpload:(id)arg1;
- (void)reportShareResult:(int)arg1;
- (id)getShareActivityInfoStr:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageStayAtWeChat:(id)arg1;
- (void)OnForwardMessageBackToApp:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardWeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)OnForwardAppBrandMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)OnForwardMessageSelectSession:(id)arg1;
- (id)getCurrentViewController;
- (void)forwardMsgListFromWeWork:(id)arg1;
- (void)handleDecryptWxWorkMsgListResp:(id)arg1;
- (void)decryptWxWorkMsgList;
- (void)handleGetGameShareMsgInfoResp:(id)arg1;
- (void)handleGetGameShareDataFail:(id)arg1 errMsg:(id)arg2;
- (void)handleDecryptWxWorkChatRecordFail;
- (void)handleDecryptWxWorkChatRecordSuccess:(id)arg1;
- (void)decryptWxWorkChatRecord;
- (void)removeAuthViewController;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)checkAppOpenId;
- (void)sendVideoFileWithLocalIdentifier:(id)arg1 extraInfo:(id)arg2;
- (void)trySendAppMsg:(id)arg1;
- (void)handleShareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)doAppAuth;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)showAlertView;
- (void)asyncNotifySendAppMsgOk;
- (void)sendRespToAppWithErrCode:(int)arg1;
- (void)clearAllHandleAndReturn3rdApp:(_Bool)arg1;
- (void)cancelAllHandleAndReturn3rdAppUnsupport;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (void)cancelSendAppMsg;
- (void)sendAppMsg:(id)arg1;
- (void)sendAppMsg:(id)arg1 searchScene:(unsigned long long)arg2;
- (void)sendAppMsg:(id)arg1 searchScene:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)sendRespAndReportToApp:(id)arg1 universalLink:(id)arg2 errCode:(int)arg3 errStr:(id)arg4;
- (void)showUnsupportedAlert;
- (void)sendAppMsgWithOpenApiParameter:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

