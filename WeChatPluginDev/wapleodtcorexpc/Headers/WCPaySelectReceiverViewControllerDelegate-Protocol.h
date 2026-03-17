//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayTransToBankCardReceiver;

@protocol WCPaySelectReceiverViewControllerDelegate <NSObject>
- (void)OnWCPaySelectReceiverViewControllerDeleteRecord:(WCPayTransToBankCardReceiver *)arg1;
- (void)OnWCPaySelectReceiverViewControllerModifyRemark:(WCPayTransToBankCardReceiver *)arg1 remark:(NSString *)arg2;
- (void)OnWCPaySelectReceiverViewControllerCancel;
- (void)OnWCPaySelectReceiverViewControllerDidSelectReceiver:(WCPayTransToBankCardReceiver *)arg1;
@end

