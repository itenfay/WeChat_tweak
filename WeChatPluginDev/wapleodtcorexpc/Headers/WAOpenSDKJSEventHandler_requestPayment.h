//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WAOpenSDKJSEventHandler_requestPayment
{
    NSMutableDictionary *_dic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(_Bool)arg2 tinyappUsername:(id)arg3 tinyappPath:(id)arg4;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(_Bool)arg2;
- (void)onWCPayPayMoneySuccess:(id)arg1;
- (id)getTinyappPath;
- (id)getTinyappUserName;
- (id)getWCPayPayParam;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

