//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIApplication.h>

@interface UIApplication (ClickStatSwizzle)
+ (_Bool)hookSendAction;
+ (_Bool)hookSendEvent;
+ (void)load;
- (_Bool)mmSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)mmSendEvent:(id)arg1;
@end

