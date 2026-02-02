//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol MediaFullScreenInterface <NSObject>
- (void)resizeToFrame:(struct CGRect)arg1;
- (UIView *)getQuitAnimationView;
- (void)displayWithFrame:(struct CGRect)arg1;

@optional
- (void)beginQuitFullScreenAnimation;
- (void)finishFullScreenAnimation:(struct CGRect)arg1;
- (void)beginFullScreenAnimation:(UIView *)arg1;
- (void)becomeInvisible;
- (void)becomeVisible;
@end

