//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContactVerifyLogic, CVerifyContactWrap, NSArray, NSDictionary, NSString;

@protocol contactVerifyLogicDelegate <NSObject>

@optional
- (NSDictionary *)getDicReportPageParams;
- (void)onClickSendVerifyMsg;
- (void)onDoVerifyByAlertView:(NSString *)arg1;
- (void)onContactVerifyLimitFail:(NSString *)arg1;
- (void)onContactVerifyFillVerifyMsg:(NSArray *)arg1;
- (NSString *)getAlertMessageForVerifyLogic:(CContactVerifyLogic *)arg1;
- (NSString *)getAlertTitleForVerifyLogic:(CContactVerifyLogic *)arg1;
- (void)contactVerifyOk:(NSArray *)arg1;
- (void)contactAddContactOk:(CVerifyContactWrap *)arg1;
- (void)contactSendReplyOk:(CVerifyContactWrap *)arg1;
- (void)contactSendRequestOk:(CVerifyContactWrap *)arg1;
- (void)onContactVerifyFail;
@end

