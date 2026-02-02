//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MMWebViewController, NSString, WCPayRecallTransferCgi;
@protocol WCPayRevokeMsgControlLogicDelegate;

@interface WCPayRevokeMsgControlLogic
{
    id <WCPayRevokeMsgControlLogicDelegate> _logicDelegate;
    CMessageWrap *_msgWrap;
    WCPayRecallTransferCgi *_recallTransferCgi;
    MMWebViewController *_webViewController;
}

+ (id)processWCPayMsgRevokeRespIfNecessary:(id)arg1 revokeTicket:(id)arg2 msgWrap:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) WCPayRecallTransferCgi *recallTransferCgi; // @synthesize recallTransferCgi=_recallTransferCgi;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) __weak id <WCPayRevokeMsgControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)revokeCurrentMsgLocally;
- (void)webViewDidReturn:(id)arg1;
- (void)handleOpenH5WithUrl:(id)arg1;
- (void)onGetRecallTransferCgiResp:(id)arg1;
- (void)requestTransferRecall;
- (void)startLogic;
- (id)initWithDelegate:(id)arg1 msgWrap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

