//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMStatusBarCustomInfo : NSObject
{
    _Bool _overrideStatusBarHidden;
    _Bool _shouldOverrideStatusBarHidden;
    _Bool _shouldOverrideStatusBarStyle;
    _Bool _shouldOverrideStatusBarAnimation;
    long long _overrideStatusBarStyle;
    long long _overrideStatusBarAnimation;
}

@property(nonatomic) _Bool shouldOverrideStatusBarAnimation; // @synthesize shouldOverrideStatusBarAnimation=_shouldOverrideStatusBarAnimation;
@property(nonatomic) _Bool shouldOverrideStatusBarStyle; // @synthesize shouldOverrideStatusBarStyle=_shouldOverrideStatusBarStyle;
@property(nonatomic) _Bool shouldOverrideStatusBarHidden; // @synthesize shouldOverrideStatusBarHidden=_shouldOverrideStatusBarHidden;
@property(nonatomic) long long overrideStatusBarAnimation; // @synthesize overrideStatusBarAnimation=_overrideStatusBarAnimation;
@property(nonatomic) long long overrideStatusBarStyle; // @synthesize overrideStatusBarStyle=_overrideStatusBarStyle;
@property(nonatomic) _Bool overrideStatusBarHidden; // @synthesize overrideStatusBarHidden=_overrideStatusBarHidden;
- (void)reset;

@end

