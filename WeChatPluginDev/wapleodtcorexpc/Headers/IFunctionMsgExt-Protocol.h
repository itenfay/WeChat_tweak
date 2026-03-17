//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BusinessInfo, CMessageWrap, NSArray, NSData, NSMutableData, NSMutableString, NSString;

@protocol IFunctionMsgExt

@optional
- (void)onFunctionMgrFetchMsgFailWithBussinessId:(unsigned long long)arg1 functionMsgId:(NSString *)arg2;
- (void)onFunctionMgrShowMsgs:(NSArray *)arg1 bussinessId:(unsigned long long)arg2 businessInfo:(BusinessInfo *)arg3;
- (void)onFunctionMgrWillShowMsg:(CMessageWrap *)arg1 bussinessId:(unsigned long long)arg2 canShow:(NSMutableString *)arg3;
- (void)onFunctionMsgRevoke:(NSData *)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(NSString *)arg3;
- (void)onFunctionMsgRequest:(NSMutableData *)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(NSString *)arg3;
- (void)onFunctionMsgResponse:(NSData *)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(NSString *)arg3;
@end

