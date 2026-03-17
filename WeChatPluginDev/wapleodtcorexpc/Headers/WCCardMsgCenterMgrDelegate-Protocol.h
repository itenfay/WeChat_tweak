//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCardPkgMsg;

@protocol WCCardMsgCenterMgrDelegate <NSObject>
- (void)onWCCardQrCodeBan:(WCCardPkgMsg *)arg1;
- (void)onWCCardListUpdate:(unsigned int)arg1;
- (void)onWCCardMessageEntryTipChanged:(WCCardPkgMsg *)arg1;
- (void)onWCCardMessageUnreadCountChanged:(WCCardPkgMsg *)arg1;
@end

