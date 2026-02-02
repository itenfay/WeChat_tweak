//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AccountErrorInfo, MMUIViewController, MMWebViewController, NSDictionary, NSString;

@protocol WCAccountErrorHandleLogicDelegate <NSObject>

@optional
- (void)onErrorHandleLogicDoneWithPolicyListIsAgreed:(_Bool)arg1 policyAgreementTicket:(NSString *)arg2;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(NSDictionary *)arg1;
- (void)onErrorHandleLogicDone;
- (_Bool)onErrorHandleLogicHandleGoNextWithParams:(NSDictionary *)arg1 webVC:(MMWebViewController *)arg2 customClose:(_Bool *)arg3;
- (_Bool)onErrorHandleLogicAction:(AccountErrorInfo *)arg1;
- (_Bool)isFromReg;
- (MMUIViewController *)getCurrentViewController;
@end

