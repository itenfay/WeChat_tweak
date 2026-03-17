//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAlertController.h>

@interface UIAlertController (Swizzle)
+ (void)load;
- (void)mmViewWillDisappear:(_Bool)arg1;
- (void)mmViewWillAppear:(_Bool)arg1;
@end

