//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSCache, NSString, UIView, WebTransWebpageLogic;

@interface MMWebViewPlugin_handleTranslate
{
    _Bool _canUseWebTransAbility;
    _Bool _isInTransABtestList;
    _Bool _shouldTranslateNaviTitleShow;
    _Bool _userHasClickedCloseHangTips;
    _Bool _hasHiddenRightButton;
    long long _transHelpButtonStatus;
    long long _status;
    NSCache *_haveTransedTextCache;
    UIView *_orgTitleView;
    double _dynamicRatio;
    NSString *_curRandomUUID;
    WebTransWebpageLogic *_webPageMgr;
}

+ (double)getDynamicRatio;
- (void).cxx_destruct;
@property(retain, nonatomic) WebTransWebpageLogic *webPageMgr; // @synthesize webPageMgr=_webPageMgr;
@property(copy, nonatomic) NSString *curRandomUUID; // @synthesize curRandomUUID=_curRandomUUID;
@property(nonatomic) double dynamicRatio; // @synthesize dynamicRatio=_dynamicRatio;
@property(nonatomic) _Bool hasHiddenRightButton; // @synthesize hasHiddenRightButton=_hasHiddenRightButton;
@property(retain, nonatomic) UIView *orgTitleView; // @synthesize orgTitleView=_orgTitleView;
@property(retain, nonatomic) NSCache *haveTransedTextCache; // @synthesize haveTransedTextCache=_haveTransedTextCache;
@property(nonatomic) _Bool userHasClickedCloseHangTips; // @synthesize userHasClickedCloseHangTips=_userHasClickedCloseHangTips;
@property(nonatomic) _Bool shouldTranslateNaviTitleShow; // @synthesize shouldTranslateNaviTitleShow=_shouldTranslateNaviTitleShow;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool isInTransABtestList; // @synthesize isInTransABtestList=_isInTransABtestList;
@property(nonatomic) long long transHelpButtonStatus; // @synthesize transHelpButtonStatus=_transHelpButtonStatus;
@property(nonatomic) _Bool canUseWebTransAbility; // @synthesize canUseWebTransAbility=_canUseWebTransAbility;
- (void)onTranslateNaviTitleAnimationEnd;
- (void)onTranslateNaviTitleAnimationStart;
- (void)onTranslateNaviTitleStateChange:(_Bool)arg1;
- (long long)getHelpButtonAvailableStatus;
- (id)getOrgTitleView;
- (_Bool)getHiddenRightButtonFlag;
- (void)setStatusFromPageLogic:(long long)arg1;
- (long long)getStatus;
- (void)clearCache;
- (void)storeCache:(id)arg1 withKey:(id)arg2;
- (id)getCache;
- (id)getWKWebView;
- (id)getWebViewController;
- (void)clickHelperRevertButton;
- (void)clickHelperTransButton;
- (void)onNoticeHalfScreenConfirmBtnClick;
- (void)onChangeTargetLanguage;
- (void)doAfterClickRevertBtn;
- (void)doAfterClickTransBtnFromHelpBtn:(_Bool)arg1;
- (_Bool)isThisPageFollowMPTitleRule;
- (_Bool)isThisPageCanTrans;
- (void)hideHelpButton;
- (_Bool)isDoingTransNow;
- (void)pullHalfScreenNotice;
- (_Bool)checkPullNoticeScreenBefore;
- (void)dispatchStatusTask;
- (void)handleMessageWebTrans:(id)arg1;
- (void)handleMessageDomReady;
- (void)dispatchPostMessage:(id)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)transReportWithAction:(long long)arg1 andScene:(long long)arg2 andUrl:(id)arg3;
- (void)initWebPageMgr;
- (void)cleanWebPageMgr;
- (void)judgeWebTransAvailable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

