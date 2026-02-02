//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, WCMallNetworkHelper;

@interface WCMallLogicMgr
{
    WCMallNetworkHelper *m_oWCMallNetworkHelper;
    NSDictionary *m_oBufferFunctionList;
    _Bool m_bGetFunctionList;
}

- (void).cxx_destruct;
- (void)setRecommendIdHasShowed:(id)arg1;
- (_Bool)isNeedShowRecommendViewWithId:(id)arg1;
- (void)jsJumpWCMall:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)HandleWCMallActivityUpdate:(id)arg1;
- (void)handleActivityType:(id)arg1 ShowedType:(id)arg2 FunctionId:(id)arg3 ActivityId:(id)arg4 Ticket:(id)arg5 WalletRegion:(int)arg6;
- (void)setNeedShowRedCodeInMoreView:(_Bool)arg1;
- (void)setNeedShowNewInMoreView:(_Bool)arg1;
- (_Bool)isNeedShowRedCodeInMoreView;
- (void)setRedDotOrNewLastUpdateTime;
- (void)clearAllNewOrRedDot;
- (_Bool)checkIsRedDotOrNewOverTime;
- (_Bool)isNeedShowNewInMoreView;
- (void)setShowProductBannerActivity:(id)arg1 ActivityID:(id)arg2 Showed:(_Bool)arg3;
- (_Bool)isNeedShowProductBannerActivity:(id)arg1 ActivityID:(id)arg2;
- (void)setShowProductActivity:(id)arg1 ActivityID:(id)arg2 Showed:(_Bool)arg3;
- (_Bool)isNeedShowProductActivity:(id)arg1 ActivityID:(id)arg2;
- (id)getAllTicket;
- (void)saveAllTicket:(id)arg1;
- (void)setLatestActivityIDShowedTips:(unsigned int)arg1;
- (unsigned int)getLatestActivityIDShowedTips;
- (void)ClearWCMallOldTelephone;
- (void)SetWCMallOldTelephone:(id)arg1 UserName:(id)arg2;
- (id)GetWCMallOldTelehoneArray;
- (void)SetUsedWCMallPayTelephone;
- (_Bool)IsUsedWCMallPayTelephone;
- (void)sendDeleteChargeHistoryRequest:(id)arg1;
- (void)GetWCMallPayFunctionListRequest:(id)arg1;
- (void)GetWCMallPayChargeProxyRequest:(id)arg1 CMDID:(unsigned int)arg2;
- (void)GetWCMallFunctionList:(id)arg1;
- (void)GetWCMallFunctionList;
- (void)OnCallPayChargeProxy:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnCallBackGetWCMallFunctionList:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnHandlerFunctionListComeBack:(id)arg1 Request:(id)arg2 Response:(id)arg3 FromCache:(_Bool)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

