//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAsset, MMUINavigationController, NSString, OpenApiParameter, WAContactGetter;

@interface OpenBusinessViewHandler
{
    _Bool _isBizCompleted;
    _Bool _dismissModalByBiz;
    OpenApiParameter *_parameter;
    WAContactGetter *_contactGetter;
    MMUINavigationController *_navigationController;
    MMAsset *_finderAsset;
}

+ (id)jsonStringWithDict:(id)arg1;
+ (void)navigateBackTo3rdApp:(id)arg1 universalLink:(id)arg2 businessType:(id)arg3 errCode:(int)arg4 errMsg:(id)arg5 extMsg:(id)arg6 appSupportParseUrlParamsType:(unsigned int)arg7;
+ (_Bool)isNativeBusinessType:(id)arg1;
+ (unsigned int)genExtKey;
- (void).cxx_destruct;
@property(retain, nonatomic) MMAsset *finderAsset; // @synthesize finderAsset=_finderAsset;
@property(nonatomic) _Bool dismissModalByBiz; // @synthesize dismissModalByBiz=_dismissModalByBiz;
@property(retain, nonatomic) MMUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool isBizCompleted; // @synthesize isBizCompleted=_isBizCompleted;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)longVideoChooseHelper:(id)arg1 postSession:(id)arg2;
- (void)handleNativeOpenAdCanvas:(id)arg1;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (_Bool)postViewControllerGiveUpByBusiness;
- (void)getLocalOpenId:(id *)arg1 thirdAppOpenId:(id *)arg2;
- (void)doOpenWeAppWithResponse:(id)arg1 contact:(id)arg2 context:(id)arg3;
- (void)didGetLiteAppVC:(id)arg1 context:(id)arg2;
- (void)handleLaunchBusinessWxaResponse:(id)arg1;
- (void)handleOpenLiteAppResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)requestForLaunchBusinessWxa:(id)arg1 appId:(id)arg2 context:(id)arg3;
- (_Bool)requestForOpenLiteApp:(id)arg1 appId:(id)arg2 context:(id)arg3;
- (void)showFinderFailErrWithIumpController:(id)arg1 toastMsg:(id)arg2 errCode:(unsigned int)arg3 errMsg:(id)arg4 appID:(id)arg5 universalLink:(id)arg6 businessType:(id)arg7;
- (void)presentFinderpostViewControllerWithPostSession:(id)arg1 presentAnimated:(_Bool)arg2;
- (id)getTmpFilePathWithMP4Ext;
- (void)enterFinderPostProcessWithJumpController:(id)arg1 businessType:(id)arg2 dictTranslateInfo:(id)arg3;
- (void)enterFinderGamePostProcessWithJumpController:(id)arg1 prepareLogic:(id)arg2 needDismissJumpVC:(_Bool)arg3 appId:(id)arg4 ticket:(id)arg5 scene:(unsigned int)arg6;
- (void)processTranslateResult:(id)arg1 parentController:(id)arg2 originUrl:(id)arg3 translateInfo:(id)arg4 jumpController:(id)arg5;
- (void)onPreEnterWechatDone;
- (void)checkOpenNonNativeBusinessView;
- (void)checkOpenNativeView;
- (void)checkOpenBusinessView;
- (void)clearAllHandle;
- (_Bool)startHandle:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

