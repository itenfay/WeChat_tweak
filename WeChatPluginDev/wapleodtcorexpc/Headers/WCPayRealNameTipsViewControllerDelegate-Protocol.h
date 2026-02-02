//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayRealNameTipsViewController;

@protocol WCPayRealNameTipsViewControllerDelegate <NSObject>

@optional
- (void)realNameTipsVCDidCancel:(WCPayRealNameTipsViewController *)arg1;
- (void)realNameTipsVCDidConfirm:(WCPayRealNameTipsViewController *)arg1;
@end

