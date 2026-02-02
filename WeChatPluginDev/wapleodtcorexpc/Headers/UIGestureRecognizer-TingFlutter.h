//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIGestureRecognizer.h>

@interface UIGestureRecognizer (TingFlutter)
+ (void)unswizzle;
+ (void)swizzleTingFlutter;
+ (void)load;
- (_Bool)tingFlutter_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
@end

