//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayUnionTransferQueryCgi;

@interface WCPaySenderControlTransferControlLogic
{
    _Bool _bIsOpenIM;
    WCPayUnionTransferQueryCgi *_unionQueryCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayUnionTransferQueryCgi *unionQueryCgi; // @synthesize unionQueryCgi=_unionQueryCgi;
@property(nonatomic) _Bool bIsOpenIM; // @synthesize bIsOpenIM=_bIsOpenIM;
- (id)getRevokeTips;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnCheckTransferMoneyStatus:(id)arg1 Error:(id)arg2;
- (void)onWCPayUnionTransferQueryCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferQueryCgiResponseOK:(id)arg1;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQTWithTraceInfo:(id)arg1;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQT;
- (void)onRetrySendTransferMsgSucc;
- (void)OnWCPayTransferMoneyStatusViewControllerRetrySendMsg;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchBalance;
- (void)OnWCPayTransferMoneyStatusViewControllerReshowOpenMinimchGuide:(id)arg1;
- (void)OnWCPayTransferMoneyStatusViewControllerRefresh;
- (void)OnWCPayTransferMoneyStatusViewControllerRefused;
- (void)OnWCPayTransferMoneyStatusViewControllerConfirmTransfer;
- (void)OnWCPayTransferMoneyStatusViewControllerBack;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

