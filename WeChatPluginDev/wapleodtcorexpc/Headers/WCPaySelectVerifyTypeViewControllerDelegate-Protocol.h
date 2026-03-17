//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCPaySelectVerifyTypeViewControllerDelegate <NSObject>
- (void)OnBack;
- (void)OnSelectRealnameVerify:(NSDictionary *)arg1;
- (void)OnSelectBindCard;

@optional
- (NSString *)onWCPaySelectVerifyTypeViewControllerSessionId;
- (void)OnSelectBindCardVerify;
@end

