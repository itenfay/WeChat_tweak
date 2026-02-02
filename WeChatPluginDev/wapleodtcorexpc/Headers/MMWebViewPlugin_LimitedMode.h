//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLimitedModeAuthorizationUtilLogic, MMWebLimitedModeUrlData, NSString;

@interface MMWebViewPlugin_LimitedMode
{
    MMWebLimitedModeUrlData *_outlinkBlockedInitUrlData;
    unsigned long long _lastRequestActionTime;
    MMLimitedModeAuthorizationUtilLogic *_requestAuthLogic;
    MMWebLimitedModeUrlData *_requestUrlData;
}

+ (_Bool)checkAccessAuthorizationHadApproveWithBizKey:(id)arg1 bizType:(long long)arg2;
+ (id)brandKeyWithUrl:(id)arg1;
+ (id)outlinkKeyWithUrl:(id)arg1;
+ (_Bool)isAcceptBrandUrl:(id)arg1;
+ (_Bool)isAcceptOutlinkUrl:(id)arg1;
+ (_Bool)isBrandTypeUrl:(id)arg1;
+ (_Bool)isBrandTypeLimited;
+ (_Bool)isOutlinkTypeLimited;
+ (_Bool)isLimitedModeOn;
+ (_Bool)isBrandUrlTemporaryAuthorizationWithUrl:(id)arg1;
+ (_Bool)isOutlinkUrlTemporaryAuthorizationWithUrl:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebLimitedModeUrlData *requestUrlData; // @synthesize requestUrlData=_requestUrlData;
@property(retain, nonatomic) MMLimitedModeAuthorizationUtilLogic *requestAuthLogic; // @synthesize requestAuthLogic=_requestAuthLogic;
@property(nonatomic) unsigned long long lastRequestActionTime; // @synthesize lastRequestActionTime=_lastRequestActionTime;
@property(retain, nonatomic) MMWebLimitedModeUrlData *outlinkBlockedInitUrlData; // @synthesize outlinkBlockedInitUrlData=_outlinkBlockedInitUrlData;
- (void)tryPopCurrentWebViewAndPushExtraWebView:(id)arg1;
- (void)didCutomerPageClose;
- (void)didCutomerPageVerifySuccess;
- (_Bool)hasOutlinkBlockedInitUrlData;
- (void)updateoutlinkBlockedInitUrlData;
- (_Bool)requestTemporaryAurhorizationWithUrlData:(id)arg1 type:(id)arg2 errDesc:(id *)arg3;
- (id)getTemporaryAurhorizationInfos;
- (_Bool)canGetTemporaryAuthorizationInfos:(id)arg1 errDesc:(id *)arg2;
- (id)getOutlinkInitUrl;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

