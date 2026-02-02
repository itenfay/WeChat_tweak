//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AnalyseRcptInfoReq, AnalyseRcptInfoResp, NSError, RcptInfoAddRequest, RcptInfoAddResponse, RcptInfoImportYiXunRequest, RcptInfoImportYiXunResponse, RcptInfoQueryRequest, RcptInfoQueryResponse, RcptInfoRemoveRequest, RcptInfoRemoveResponse, RcptInfoTouchRequest, RcptInfoTouchResponse, RcptInfoUpdateRequest, RcptInfoUpdateResponse;

@protocol WCAddressNetworkDelegate <NSObject>
- (void)OnAnalyseWCAddress:(AnalyseRcptInfoResp *)arg1 Request:(AnalyseRcptInfoReq *)arg2 Error:(NSError *)arg3;
- (void)OnImportWCAddress:(RcptInfoImportYiXunResponse *)arg1 Request:(RcptInfoImportYiXunRequest *)arg2 Error:(NSError *)arg3;
- (void)OnSelectWCAddress:(RcptInfoTouchResponse *)arg1 Request:(RcptInfoTouchRequest *)arg2 Error:(NSError *)arg3;
- (void)OnModifyWCAddress:(RcptInfoUpdateResponse *)arg1 Request:(RcptInfoUpdateRequest *)arg2 Error:(NSError *)arg3;
- (void)OnQueryWCAddress:(RcptInfoQueryResponse *)arg1 Request:(RcptInfoQueryRequest *)arg2 Error:(NSError *)arg3;
- (void)OnRemoveWCAddress:(RcptInfoRemoveResponse *)arg1 Request:(RcptInfoRemoveRequest *)arg2 Error:(NSError *)arg3;
- (void)OnAddWCAddress:(RcptInfoAddResponse *)arg1 Request:(RcptInfoAddRequest *)arg2 Error:(NSError *)arg3;
@end

