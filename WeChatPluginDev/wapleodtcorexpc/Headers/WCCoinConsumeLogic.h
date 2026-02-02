//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PrepareWecoinConsumeResponse, WCCoinConsumePanel, WCCoinConsumeParameter, WCCoinInterceptLogic;
@protocol WCCoinConsumeLogicDelegate;

@interface WCCoinConsumeLogic
{
    id <WCCoinConsumeLogicDelegate> _delegate;
    WCCoinInterceptLogic *_interceptLogic;
    WCCoinConsumeParameter *_parameter;
    PrepareWecoinConsumeResponse *_prepareConsumeResponse;
    WCCoinConsumePanel *_consumePanel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCoinConsumePanel *consumePanel; // @synthesize consumePanel=_consumePanel;
@property(retain, nonatomic) PrepareWecoinConsumeResponse *prepareConsumeResponse; // @synthesize prepareConsumeResponse=_prepareConsumeResponse;
@property(retain, nonatomic) WCCoinConsumeParameter *parameter; // @synthesize parameter=_parameter;
@property(retain, nonatomic) WCCoinInterceptLogic *interceptLogic; // @synthesize interceptLogic=_interceptLogic;
@property(nonatomic) __weak id <WCCoinConsumeLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)didClose:(id)arg1;
- (void)panelDidClickConsumeTips:(id)arg1;
- (void)panelDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)panelDidClickBalanceButton:(id)arg1;
- (void)panelDidClickConsume:(id)arg1;
- (void)consumeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)consumeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)prepareConsumeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)prepareConsumeCgi:(id)arg1 didGetResponse:(id)arg2;
- (id)prepareErrorWith:(id)arg1;
- (id)errorWithCgiErrorCode:(int)arg1;
- (void)handleIntercept:(id)arg1;
- (id)getTopVC;
- (void)endConsumeLoading;
- (void)startConsumeLoading:(_Bool)arg1;
- (void)callCancel;
- (void)callFail:(id)arg1;
- (void)callSuccess:(id)arg1;
- (void)callConsumeCgi:(id)arg1;
- (void)callPrepareCgi;
- (void)handlePrepareResp:(id)arg1;
- (void)handleBuff:(id)arg1;
- (void)startBuyCoin:(id)arg1 startByConsume:(_Bool)arg2;
- (void)directConsume;
- (void)showConsumePanel:(long long)arg1;
- (void)showConsumePanel;
- (void)startWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

