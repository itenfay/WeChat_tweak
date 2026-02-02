//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebViewController, NSString, WebTransCgiLogic;
@protocol WebTransPageLogicDelegate;

@interface WebTransWebpageLogic : NSObject
{
    _Bool _hasInjected;
    _Bool _doingAnimationNow;
    _Bool _isTransOrderFromMenuBtn;
    _Bool _hasShownBtnOnceInThisPage;
    int _residueReTryNum;
    id <WebTransPageLogicDelegate> _delegate;
    WebTransCgiLogic *_cgiMgr;
    NSString *_curRandomUUID;
    double _dynamicRatio;
    long long _thisPageCheckResult;
    long long _transHelpButtonStatus;
    long long _curPageStatus;
    MMWebViewController *_webViewController;
    NSString *_brand;
}

- (void).cxx_destruct;
@property(nonatomic) int residueReTryNum; // @synthesize residueReTryNum=_residueReTryNum;
@property(nonatomic) _Bool hasShownBtnOnceInThisPage; // @synthesize hasShownBtnOnceInThisPage=_hasShownBtnOnceInThisPage;
@property(nonatomic) _Bool isTransOrderFromMenuBtn; // @synthesize isTransOrderFromMenuBtn=_isTransOrderFromMenuBtn;
@property(nonatomic) _Bool doingAnimationNow; // @synthesize doingAnimationNow=_doingAnimationNow;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(readonly, nonatomic) __weak MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) _Bool hasInjected; // @synthesize hasInjected=_hasInjected;
@property(nonatomic) long long curPageStatus; // @synthesize curPageStatus=_curPageStatus;
@property(nonatomic) long long transHelpButtonStatus; // @synthesize transHelpButtonStatus=_transHelpButtonStatus;
@property(nonatomic) long long thisPageCheckResult; // @synthesize thisPageCheckResult=_thisPageCheckResult;
@property(nonatomic) double dynamicRatio; // @synthesize dynamicRatio=_dynamicRatio;
@property(copy, nonatomic) NSString *curRandomUUID; // @synthesize curRandomUUID=_curRandomUUID;
@property(retain, nonatomic) WebTransCgiLogic *cgiMgr; // @synthesize cgiMgr=_cgiMgr;
@property(nonatomic) __weak id <WebTransPageLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTranslateNaviTtileAnimationEnd;
- (void)onTranslateNaviTtileAnimationStart;
- (void)animationChangeTitleView:(id)arg1 toView:(id)arg2 duration:(double)arg3;
- (void)enterDownStatus;
- (void)enterUpStatus;
- (void)titleViewCalculator;
- (void)cancelLoading;
- (void)tryCancelLoading;
- (void)replaceHTML:(id)arg1;
- (id)UnzipAndSotreCache:(id)arg1;
- (void)bounceAfterCgiReturn:(id)arg1;
- (void)checkHasInjectedBefore:(CDUnknownBlockType)arg1;
- (void)injectTransJsWithCuruuid:(id)arg1 andBlock:(CDUnknownBlockType)arg2;
- (void)callJSTransApi;
- (void)callJSRevertApi;
- (void)Prehandle_and_CallTransjsapi;
- (void)onGetTriggerInModeTrans;
- (void)onGetTriggerInModeNone;
- (void)onGotoAnotherPage:(_Bool)arg1;
- (void)onClickRevertBtn:(CDUnknownBlockType)arg1;
- (void)onClickTransBtn;
- (void)handleTransData:(id)arg1;
- (void)checkByNLPIdentifier:(CDUnknownBlockType)arg1;
- (void)stop;
- (id)webView;
- (void)initSetting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

