//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMDynamicColor, NSString;

@interface MMNavigationBarConfig : NSObject
{
    _Bool _useBlackStatusbar;
    MMDynamicColor *_backgroundColor;
    NSString *_barTitle;
    MMDynamicColor *_titleColor;
    long long _leftBarButtonType;
    MMDynamicColor *_leftButtonColor;
    NSString *_rightButtonTitle;
    NSString *_rightButtonImage;
    MMDynamicColor *_rightButtonColor;
}

+ (id)NavigationBarConfigWithBackgroundColor:(id)arg1 useBlackStatusbar:(_Bool)arg2 barTitle:(id)arg3 titleColor:(id)arg4 leftBarButtonType:(long long)arg5 leftButtonColor:(id)arg6 rightButtonTitle:(id)arg7 rightButtonImage:(id)arg8 rightButtonColor:(id)arg9;
- (void).cxx_destruct;
@property(readonly, nonatomic) MMDynamicColor *rightButtonColor; // @synthesize rightButtonColor=_rightButtonColor;
@property(readonly, nonatomic) NSString *rightButtonImage; // @synthesize rightButtonImage=_rightButtonImage;
@property(readonly, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(readonly, nonatomic) MMDynamicColor *leftButtonColor; // @synthesize leftButtonColor=_leftButtonColor;
@property(readonly, nonatomic) long long leftBarButtonType; // @synthesize leftBarButtonType=_leftBarButtonType;
@property(readonly, nonatomic) MMDynamicColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, nonatomic) NSString *barTitle; // @synthesize barTitle=_barTitle;
@property(readonly, nonatomic) _Bool useBlackStatusbar; // @synthesize useBlackStatusbar=_useBlackStatusbar;
@property(readonly, nonatomic) MMDynamicColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)description;
- (id)initWithBackgroundColor:(id)arg1 useBlackStatusbar:(_Bool)arg2 barTitle:(id)arg3 titleColor:(id)arg4 leftBarButtonType:(long long)arg5 leftButtonColor:(id)arg6 rightButtonTitle:(id)arg7 rightButtonImage:(id)arg8 rightButtonColor:(id)arg9;

@end

