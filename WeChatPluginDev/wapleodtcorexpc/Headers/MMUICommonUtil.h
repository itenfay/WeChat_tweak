//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMUICommonUtil : NSObject
{
}

+ (id)getBlurEffect:(long long)arg1;
+ (id)genErrorTipsBar:(id)arg1;
+ (id)getBottomBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4;
+ (id)getStandardBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 color:(id)arg4;
+ (id)getBarButtonWithImage:(id)arg1 withHighlightedImage:(id)arg2 withDisabledImage:(id)arg3 withBackGroundImage:(id)arg4 withBackGroundImageHL:(id)arg5 withBackGroundImageDisable:(id)arg6 target:(id)arg7 action:(SEL)arg8 style:(unsigned long long)arg9 accessibilityStr:(id)arg10;
+ (id)getBarButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 accessibility:(id)arg5 color:(id)arg6;
+ (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 accessibility:(id)arg5 color:(id)arg6;
+ (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 accessibility:(id)arg5;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 maxWidth:(double)arg5 color:(id)arg6 font:(id)arg7 buttonImageName:(id)arg8;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 maxWidth:(double)arg5 color:(id)arg6 font:(id)arg7;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 maxWidth:(double)arg5 color:(id)arg6;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 color:(id)arg5;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4;
+ (id)getCloseBarButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)getBackBarButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (void)setBottomBarButtonTitleColor:(id)arg1 withStyle:(unsigned long long)arg2;

@end

