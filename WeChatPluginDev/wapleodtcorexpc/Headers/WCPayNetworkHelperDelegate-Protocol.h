//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CancelQRPayRequest, CancelQRPayResponse, CheckPayJsapiRequest, CheckPayJsapiResponse, GenPrepayRequest, GenPrepayResponse, GetA8KeyReq, GetA8KeyResp, GetBanPayMobileInfoRequest, GetBanPayMobileInfoResponse, GetBizIapDetailRequest, GetBizIapDetailResponse, OfflinePayConfirmRequest, OfflinePayConfirmResponse, PayAuthAppRequest, PayAuthAppResponse, PaySubscribeRequest, PaySubscribeResponse, SetMainBankCardRequest, SetMainBankCardResponse, SubmitPayProductBuyInfoRequest, SubmitPayProductBuyInfoResponse, TenPayRequest, TenPayResponse;

@protocol WCPayNetworkHelperDelegate <NSObject>
- (void)OnGetBanPayMobileInfoResponse:(GetBanPayMobileInfoResponse *)arg1 Request:(GetBanPayMobileInfoRequest *)arg2;
- (void)OnSetMainBankCardErrorResponse:(SetMainBankCardResponse *)arg1 Request:(SetMainBankCardRequest *)arg2;
- (void)OnSetMainBankCardResponse:(SetMainBankCardResponse *)arg1 Request:(SetMainBankCardRequest *)arg2;
- (void)OnWCPayConfirmOfflinePayErrorResponse:(OfflinePayConfirmResponse *)arg1 Request:(OfflinePayConfirmRequest *)arg2;
- (void)OnWCPayConfirmOfflinePayResponse:(OfflinePayConfirmResponse *)arg1 Request:(OfflinePayConfirmRequest *)arg2;
- (void)OnCheckWCPayJsApiErrorResponse:(CheckPayJsapiResponse *)arg1 Request:(CheckPayJsapiRequest *)arg2;
- (void)OnCheckWCPayJsApiResponse:(CheckPayJsapiResponse *)arg1 Request:(CheckPayJsapiRequest *)arg2;
- (void)OnWCBizIapOrderDetailErrorResponse:(GetBizIapDetailResponse *)arg1 Request:(GetBizIapDetailRequest *)arg2;
- (void)OnWCBizIapOrderDetailResponse:(GetBizIapDetailResponse *)arg1 Request:(GetBizIapDetailRequest *)arg2;
- (void)OnGetA8KeyLogicErrorResponse:(GetA8KeyResp *)arg1 Request:(GetA8KeyReq *)arg2;
- (void)OnGetA8KeyLogicResponse:(GetA8KeyResp *)arg1 Request:(GetA8KeyReq *)arg2;
- (void)OnWCPaySubscribeServiceAppErrorResponse:(PaySubscribeResponse *)arg1 Request:(PaySubscribeRequest *)arg2;
- (void)OnWCPaySubscribeServiceAppResponse:(PaySubscribeResponse *)arg1 Request:(PaySubscribeRequest *)arg2;
- (void)OnWCPayQuitQRScanPayErrorResponse:(CancelQRPayResponse *)arg1 Request:(CancelQRPayRequest *)arg2;
- (void)OnWCPayQuitQRScanPayResponse:(CancelQRPayResponse *)arg1 Request:(CancelQRPayRequest *)arg2;
- (void)OnWCPaySubmitMallPrepayErrorResponse:(SubmitPayProductBuyInfoResponse *)arg1 Request:(SubmitPayProductBuyInfoRequest *)arg2;
- (void)OnWCPaySubmitMallPrepayResponse:(SubmitPayProductBuyInfoResponse *)arg1 Request:(SubmitPayProductBuyInfoRequest *)arg2;
- (void)OnWCPayGenPrepayErrorResponse:(GenPrepayResponse *)arg1 Request:(GenPrepayRequest *)arg2;
- (void)OnWCPayGenPrepayResponse:(GenPrepayResponse *)arg1 Request:(GenPrepayRequest *)arg2;
- (void)OnWCPayGetAppAuthUrlErrorResponse:(PayAuthAppResponse *)arg1 Request:(PayAuthAppRequest *)arg2;
- (void)OnWCPayGetAppAuthUrlResponse:(PayAuthAppResponse *)arg1 Request:(PayAuthAppRequest *)arg2;
- (void)OnWCToTenpayCommonErrorResponse:(TenPayResponse *)arg1 Request:(TenPayRequest *)arg2;
- (void)OnWCToTenpayCommonSystemErrorResponse:(TenPayResponse *)arg1 Request:(TenPayRequest *)arg2;
- (void)OnWCToTenpayCommonResponse:(TenPayResponse *)arg1 Request:(TenPayRequest *)arg2;
@end

