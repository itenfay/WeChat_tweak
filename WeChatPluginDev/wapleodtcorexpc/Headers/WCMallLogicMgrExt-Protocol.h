//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetPayFunctionListResponse, NSArray, NSDictionary, NSError, NSString, WCMallBroadCastInfo;

@protocol WCMallLogicMgrExt <NSObject>

@optional
- (void)OnGetWCMallPayDeleteChargeHistoryResponse:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnGetWCMallPayFunctionListRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnWCMallShowStatusInMoreViewChanged;
- (void)OnWCMallActivityChanged;
- (void)OnGetWCMallFunctionProductList:(NSArray *)arg1 FunctionId:(unsigned int)arg2 BalanceUrl:(NSString *)arg3 RechargeUrl:(NSString *)arg4 BalanceWord:(NSString *)arg5 RechargeWord:(NSString *)arg6 Error:(NSError *)arg7;
- (void)OnGetWCMallFunctionList:(NSArray *)arg1 GlobalList:(NSArray *)arg2 BroadCastInfo:(WCMallBroadCastInfo *)arg3 BannerList:(NSArray *)arg4 response:(GetPayFunctionListResponse *)arg5 FromCached:(_Bool)arg6 NotShowTutorial:(_Bool)arg7 typeMap:(NSDictionary *)arg8 Error:(NSError *)arg9;
@end

