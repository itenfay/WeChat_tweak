//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@interface UIControl (Swizzle)
+ (void)load;
- (void)mmAddTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
@end

