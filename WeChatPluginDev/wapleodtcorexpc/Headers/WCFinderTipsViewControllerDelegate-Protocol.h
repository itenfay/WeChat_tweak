//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderTipsViewController;

@protocol WCFinderTipsViewControllerDelegate <NSObject>
- (void)tipsVCClickConfirmButton:(WCFinderTipsViewController *)arg1;
- (void)tipsVCClickCancelButton:(WCFinderTipsViewController *)arg1;
@end

