//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAlertView.h>

@interface UIAlertView (Swizzle)
+ (void)load;
- (id)hook_initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)hook_initWithFrame:(struct CGRect)arg1;
@end

