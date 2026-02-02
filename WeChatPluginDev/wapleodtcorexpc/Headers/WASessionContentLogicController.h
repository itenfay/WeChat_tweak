//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, WASessionContentLogicHandler;

@interface WASessionContentLogicController
{
    WASessionContentLogicHandler *_sessionLogichandler;
    _Bool _isQuickSendSessionMsgViewHide;
    _Bool _hasCheckUpdateContact;
    _Bool _isInWeAppSheetMode;
    unsigned int _appVersion;
    unsigned long long _enterScene;
    unsigned long long _fromScene;
    NSDictionary *_dicSessionContentContext;
    NSString *_sceneID;
    unsigned long long _debugMode;
    NSString *_fatherAppid;
    NSString *_fromPagePath;
    NSString *_sessionTitle;
    NSString *_sessionSubTitle;
    NSString *_customHeadImageUrl;
    CDUnknownBlockType _backFromContactCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType backFromContactCallback; // @synthesize backFromContactCallback=_backFromContactCallback;
@property(nonatomic) _Bool isInWeAppSheetMode; // @synthesize isInWeAppSheetMode=_isInWeAppSheetMode;
@property(retain, nonatomic) NSString *customHeadImageUrl; // @synthesize customHeadImageUrl=_customHeadImageUrl;
@property(copy, nonatomic) NSString *sessionSubTitle; // @synthesize sessionSubTitle=_sessionSubTitle;
@property(copy, nonatomic) NSString *sessionTitle; // @synthesize sessionTitle=_sessionTitle;
@property(copy, nonatomic) NSString *fromPagePath; // @synthesize fromPagePath=_fromPagePath;
@property(copy, nonatomic) NSString *fatherAppid; // @synthesize fatherAppid=_fatherAppid;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned long long debugMode; // @synthesize debugMode=_debugMode;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(retain, nonatomic) NSDictionary *dicSessionContentContext; // @synthesize dicSessionContentContext=_dicSessionContentContext;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (_Bool)mainSwitch_shouldHandleAppmsg;
- (void)fetchKFSessionInfo;
- (void)onClickTitle;
- (id)getScanQrCodeBlackList;
- (double)getCustomizedAreaWidth;
- (void)onSessionContentViewDidBePoped;
- (void)onClickQuickSendSessionMsgBtn:(id)arg1;
- (void)onHideQuickSendSessionMsgBtn;
- (void)backToWeApp:(id)arg1 pagePath:(id)arg2;
- (_Bool)isBackToWeApp:(id)arg1;
- (_Bool)isNeedShowQuickSendMsgView;
- (void)checkUpdateWeAppContact;
- (void)callbackBackFromContact:(id)arg1 query:(id)arg2;
- (void)onClickRightBarButton:(id)arg1;
- (id)getFromPagePath;
- (id)getFatherAppid;
- (id)getQuickSendSessionMsgInfo;
- (unsigned int)getAppVersion;
- (unsigned long long)getDebugMode;
- (id)getSessionSceneID;
- (id)getSessionContentPageID;
- (unsigned long long)getSessionContentEnterScene;
- (id)getSessionContentViewController;
- (id)getSessionContentNavigationController;
- (id)getSessionContentContact;
- (id)GetTitleTailImageView;
- (_Bool)CanRemoteRecord;
- (void)initViewController;
- (void)UnRegister;
- (void)Register;
- (void)onModifyWeAppContact:(id)arg1;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)setNeedUpdateTitle:(_Bool *)arg1;
- (void)ViewDidAppear;
- (void)ViewWillInit;
- (void)onOpenWeAppWithJSONString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3;
- (void)onClickOpenWeAppButton;
- (id)getOpenWeAppMenuButton;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (void)onClickWeAppReceiveSessionMsg;
- (_Bool)isWeAppSheetMode;
- (_Bool)isFromBusiness;
- (id)getSubTitle;
- (id)GetUsrTitle;
- (id)GetHeadImageUrl:(id)arg1;
- (id)GetRightBarBtn;
- (id)getLeftBarButton;
- (_Bool)CanShowBanner;
- (_Bool)CanSendEmoticonMessage;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)CanSendVoiceMsg;
- (id)getMsgSendOpEntry;
- (id)initWithSceneID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

