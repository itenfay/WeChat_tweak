//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError;

@protocol WCRedEnvelopesLogicMgrExt <NSObject>

@optional
- (void)onGetH5PayNativeCashierResult:(_Bool)arg1;
- (void)OnGenGreetingDownloadResult:(NSError *)arg1;
- (void)OnGenGreetingRedEnvelopesPayRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnAsyncBizSubcribeResponse:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnCheckBizEnterpriseRedEnvelopesResponse:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnOpenBizEnterpriseRedEnvelopesResponse:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnReceiveBizEnterpriseRedEnvelopesResponse:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnOpenAtomicEnterpriseRedEnvelopesResponse:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnNotifyNoShareEnterpriseRedEnvelopesResponse:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnReceiveAtomicEnterpriseRedEnvelopesResponse:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnSendShareEnterpriseRedEnvelopesResponse:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnOpenEnterpriseRedEnvelopesResponse:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnThanksForRedEnvelopesRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnClearserSendOrReceiveRedEnveloperListRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnQueryRedEnvelopesDetailRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnOpenRedEnvelopesRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnReceiverQueryRedEnvelopesRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnSendShareRedEnvelopesoRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnGenH5RedEnvelopesPayRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnGenRedEnvelopesPayRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnQueryRedEnvelopesUserInfo:(NSDictionary *)arg1 isCahceInfo:(_Bool)arg2 Error:(NSError *)arg3;
- (void)OnWCRedEnvBizBaseRequestCommonSystemError:(NSError *)arg1 HBCmdType:(long long)arg2;
- (void)OnWCRedEnvBizBaseRequestCommonError:(NSError *)arg1 HBCmdType:(long long)arg2;
- (void)OnWCRedEnvEnterpriseBaseRequestCommonSystemError:(NSError *)arg1 HBCmdType:(long long)arg2;
- (void)OnWCRedEnvEnterpriseBaseRequestCommonError:(NSError *)arg1 HBCmdType:(long long)arg2;
- (void)OnWCRedEnvelopesBaseRequestCommonSystemError:(NSError *)arg1 HongbaoCmdType:(long long)arg2;
- (void)OnWCRedEnvelopesBaseRequestCommonError:(NSError *)arg1 HongbaoCmdType:(long long)arg2;
@end

