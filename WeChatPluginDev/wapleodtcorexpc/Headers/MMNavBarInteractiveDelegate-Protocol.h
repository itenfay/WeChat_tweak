//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIBarButtonItem, UIColor;

@protocol MMNavBarInteractiveDelegate <NSObject>

@optional
- (_Bool)isSetNormalToBlackStyle;
- (void)currentOn;
- (UIColor *)fadeTintColor;
- (UIColor *)normalTintColor;
- (UIBarButtonItem *)fadeRightButton;
- (UIBarButtonItem *)normalRightButton;
- (_Bool)shouldAddShadowView;
@end

