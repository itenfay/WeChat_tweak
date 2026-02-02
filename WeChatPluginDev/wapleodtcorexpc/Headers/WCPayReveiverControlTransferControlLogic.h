//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class InterceptWin, NSDictionary, NSString, WCPayComplianceHalfPage, WCPayInterceptWinLogic, WCPayJumpRemindControlLogic, WCPayUnionTransferConfirmCgi, WCPayUnionTransferQueryCgi;

@interface WCPayReveiverControlTransferControlLogic
{
    _Bool _bIsOpenIM;
    WCPayJumpRemindControlLogic *_m_jumpRemindControlLogic;
    WCPayInterceptWinLogic *_interceptWinLogic;
    InterceptWin *_intercept_win_after;
    WCPayComplianceHalfPage *_complianceHalfPage;
    WCPayUnionTransferQueryCgi *_unionQueryCgi;
    WCPayUnionTransferConfirmCgi *_unionConfirmCgi;
    NSDictionary *_recvChannelSubTitleClickInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *recvChannelSubTitleClickInfo; // @synthesize recvChannelSubTitleClickInfo=_recvChannelSubTitleClickInfo;
@property(retain, nonatomic) WCPayUnionTransferConfirmCgi *unionConfirmCgi; // @synthesize unionConfirmCgi=_unionConfirmCgi;
@property(retain, nonatomic) WCPayUnionTransferQueryCgi *unionQueryCgi; // @synthesize unionQueryCgi=_unionQueryCgi;
@property(nonatomic) _Bool bIsOpenIM; // @synthesize bIsOpenIM=_bIsOpenIM;
@property(nonatomic) WCPayComplianceHalfPage *complianceHalfPage; // @synthesize complianceHalfPage=_complianceHalfPage;
@property(retain, nonatomic) InterceptWin *intercept_win_after; // @synthesize intercept_win_after=_intercept_win_after;
@property(retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic; // @synthesize interceptWinLogic=_interceptWinLogic;
@property(retain, nonatomic) WCPayJumpRemindControlLogic *m_jumpRemindControlLogic; // @synthesize m_jumpRemindControlLogic=_m_jumpRemindControlLogic;
- (void)call:(id)arg1;
- (id)getRevokeTips;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnGetHistoryOrderDetailInfo:(id)arg1 Error:(id)arg2;
- (void)OnRefuseTransferMoney:(id)arg1 Error:(id)arg2;
- (void)checkMoneyStatusAfterConfirm:(id)arg1;
- (void)onWCPayTransferOpenMiniGuidePageSheetClickLink:(id)arg1;
- (void)onWCPayTransferOpenMiniGuidePageSheetNeedRefresh;
- (void)onWCPayTransferOpenMiniGuidePageSheetRefuseTransfer;
- (void)OnConfirmTransferMoney:(id)arg1 Error:(id)arg2;
- (void)OnCheckTransferMoneyStatus:(id)arg1 Error:(id)arg2;
- (void)onWCPayUnionTransferQueryCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferQueryCgiResponseOK:(id)arg1;
- (void)onWCPayUnionTransferConfirmCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferConfirmCgiResponseOK:(id)arg1;
- (void)onWCPayTransferMoneyStatusViewControllerSetSubTitleClickInfo:(id)arg1;
- (_Bool)OnWCPayTransferMoneyStatusViewControllerBackBlock;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQTWithTraceInfo:(id)arg1;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQT;
- (void)ToRefusedMoney;
- (void)OnWCPayTransferMoneyStatusViewControllerRetrySendMsg;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchBalance;
- (void)OnWCPayTransferMoneyStatusViewControllerRefused;
- (void)OnWCPayTransferMoneyStatusViewControllerReshowOpenMinimchGuide:(id)arg1;
- (void)OnWCPayTransferMoneyStatusViewControllerRefresh;
- (void)OnWCPayTransferMoneyStatusViewControllerConfirmTransfer:(id)arg1 againCtx:(id)arg2;
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

