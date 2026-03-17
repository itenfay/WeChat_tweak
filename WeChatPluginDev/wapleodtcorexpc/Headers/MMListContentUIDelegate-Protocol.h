//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIColor, UIControl, UILabel, UIView;

@protocol MMListContentUIDelegate <NSObject>
- (UIControl *)accessoryControlWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 isModeOn:(_Bool)arg4;
- (UIView *)descriptionLabelWithText:(NSString *)arg1;
- (UILabel *)subtitleLabelWithText:(NSString *)arg1;
- (UIView *)labelWithText:(NSString *)arg1;
- (UIColor *)backgroundColor;
- (_Bool)shouldShowTopBottomSeparator;
- (_Bool)shouldDivide;

@optional
- (double)cornerRadius;
@end

