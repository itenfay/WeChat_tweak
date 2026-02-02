//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayVerifyCardNumberViewController;

@protocol WCPayVerifyCardNumberViewControllerDelegate <NSObject>
- (void)verifyCardNumberVC:(WCPayVerifyCardNumberViewController *)arg1 didGetNumber:(NSString *)arg2;
@end

