//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCCoinLogger;

@interface WCCoinMgr
{
    WCCoinLogger *_logger;
    NSMutableArray *_logics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *logics; // @synthesize logics=_logics;
@property(retain, nonatomic) WCCoinLogger *logger; // @synthesize logger=_logger;
- (void)startCloseAuthLogic:(CDUnknownBlockType)arg1;
- (_Bool)showFirstBuyCoinTips:(_Bool)arg1 delegate:(id)arg2;
- (_Bool)showFirstBuyCoinTips:(_Bool)arg1;
- (void)removeLogic:(id)arg1;
- (void)preFetchProducts;
- (void)preload;
- (void)startEncashLogic:(id)arg1 parameter:(id)arg2;
- (void)getWecoinBalance:(CDUnknownBlockType)arg1;
- (void)startConsumeLogic:(id)arg1 parameter:(id)arg2;
- (void)startSubscribeLogic:(id)arg1 CompletionHandler:(CDUnknownBlockType)arg2;
- (void)startBuyCoinLogic:(id)arg1 parameter:(id)arg2;
- (_Bool)wechatUserShouldAuth;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

