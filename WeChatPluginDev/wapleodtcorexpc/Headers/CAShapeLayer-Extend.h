//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CAShapeLayer.h>

@class UIColor;

@interface CAShapeLayer (Extend)
- (void)coordinateUIViewAnimationWithPath:(id)arg1;
- (id)colorForKey:(id)arg1;
- (void)setColor:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) UIColor *uiStrokeColor;
@property(retain, nonatomic) UIColor *uiFillColor;
- (struct CGColor *)getCGColorFrom:(id)arg1 forDarkMode:(_Bool)arg2;
- (void)applyUiColors:(_Bool)arg1;
- (void)addDarkModeObserverForKey:(id)arg1;
- (id)init;
@end

