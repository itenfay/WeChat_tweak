//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJPublisherButtonFactory : NSObject
{
}

+ (id)imageTextButtonWithImage:(id)arg1 title:(id)arg2 font:(id)arg3 imageTitleStyle:(long long)arg4 size:(struct CGSize)arg5 padding:(double)arg6 tag:(long long)arg7 accessibilityLabel:(id)arg8 target:(id)arg9 action:(SEL)arg10;
+ (id)textButtonWithTitle:(id)arg1 tag:(long long)arg2 accessibilityLabel:(id)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)imageButtonWithImage:(id)arg1 tag:(long long)arg2 accessibilityLabel:(id)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)imageButtonWithImage:(id)arg1 accessibilityLabel:(id)arg2;

@end

