//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WAAppIdToUsernameTransfer;

@interface WAJSEventHandler_requestPayment
{
    WAAppIdToUsernameTransfer *_appID2UserNameTransfer;
    _Bool _finallyUseCustomAppId;
    int _requestId;
    NSMutableDictionary *_dic;
    NSString *_customUsrName;
    NSString *_customPath;
}

- (void).cxx_destruct;
@property(nonatomic) int requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *customPath; // @synthesize customPath=_customPath;
@property(retain, nonatomic) NSString *customUsrName; // @synthesize customUsrName=_customUsrName;
@property(nonatomic) _Bool finallyUseCustomAppId; // @synthesize finallyUseCustomAppId=_finallyUseCustomAppId;
@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
- (void)endWithResult:(id)arg1;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(_Bool)arg2 tinyappUsername:(id)arg3 tinyappPath:(id)arg4;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(_Bool)arg2;
- (void)onWCPayPayMoneySuccess:(id)arg1;
- (void)onWCPayResultBeforeUserInteractionEnd:(id)arg1;
- (id)getTinyappPath;
- (id)getTinyappUserName;
- (id)getWCPayPayParam;
- (void)handleJSEventImpl:(id)arg1 scene:(id)arg2 amount:(id)arg3;
- (void)reportScanPosPay:(id)arg1 action:(int)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

