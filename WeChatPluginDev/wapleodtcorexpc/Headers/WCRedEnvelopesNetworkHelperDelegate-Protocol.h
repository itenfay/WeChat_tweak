//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AsyncBizSubscribeRequest, AsyncBizSubscribeResponse, FestivalHongBaoReq, FestivalHongBaoRes, HongBaoReq, HongBaoRes;

@protocol WCRedEnvelopesNetworkHelperDelegate <NSObject>
- (void)OnWCToAsyncBizSubscribeResponse:(AsyncBizSubscribeResponse *)arg1 Request:(AsyncBizSubscribeRequest *)arg2;
- (void)OnWCToBizHBCommonErrorResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2;
- (void)OnWCToBizHBCommonSystemErrorResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2;
- (void)OnWCToBizHBCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2;
- (void)OnWCToEnterpriseHBCommonErrorResponse:(FestivalHongBaoRes *)arg1 Request:(FestivalHongBaoReq *)arg2;
- (void)OnWCToEnterpriseHBCommonSystemErrorResponse:(FestivalHongBaoRes *)arg1 Request:(FestivalHongBaoReq *)arg2;
- (void)OnWCToEnterpriseHBCommonResponse:(FestivalHongBaoRes *)arg1 Request:(FestivalHongBaoReq *)arg2;
- (void)OnWCToHongbaoCommonErrorResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2;
- (void)OnWCToHongbaoCommonSystemErrorResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2;
- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2;
- (void)OnWCToOpenIMHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2;
- (void)OnWCToLiveStreamHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2;
@end

