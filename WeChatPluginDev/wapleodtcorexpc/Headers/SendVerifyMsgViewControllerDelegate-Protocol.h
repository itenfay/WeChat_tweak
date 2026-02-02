//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CVerifyContactWrap;

@protocol SendVerifyMsgViewControllerDelegate <NSObject>

@optional
- (void)contactAddContactOk:(CVerifyContactWrap *)arg1;
- (void)contactSendRequestOk:(CVerifyContactWrap *)arg1;
- (void)onSendVerifyMsgCancel;
- (void)onSendVerifyMsgOK;
@end

