//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSString, WCPayControlData;

@protocol WCPayTransferMoneyViewControllerDelegate <NSObject>
- (NSString *)getTransferMoneyViewControllerContactWeixinAlias;
- (NSString *)getTransferMoneyViewControllerContactDisplayName;
- (CContact *)getTransferChatContact;
- (_Bool)WCPayTransferMoneyCurrentLogicIsTop;
- (void)WCPayTransferMoneyViewControllerDoScreenShot;
- (void)WCPayTransferMoneyViewControllerNext:(WCPayControlData *)arg1;
- (void)WCPayTransferMoneyViewControllerRightActionCancel:(_Bool)arg1;
- (void)WCPayTransferMoneyViewControllerCancel:(_Bool)arg1;
@end

