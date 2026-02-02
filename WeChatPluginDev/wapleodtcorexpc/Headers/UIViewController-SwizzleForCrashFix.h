//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@interface UIViewController (SwizzleForCrashFix)
+ (void)load;
- (void)mmRemoveFromParentViewController;
@end

