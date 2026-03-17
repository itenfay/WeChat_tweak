//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol WCPayRevokeMsgControlLogicDelegate <NSObject>
- (void)onWCPayMsgNeedContinueRevokeWithMsgWrap:(CMessageWrap *)arg1 revokeTicket:(NSString *)arg2;
@end

