//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@interface QIndicatorLayer : CALayer
{
    _Bool _isDarkStyle;
    _Bool _showUpIndicator;
    _Bool _showDownIndicator;
}

@property(nonatomic) _Bool showDownIndicator; // @synthesize showDownIndicator=_showDownIndicator;
@property(nonatomic) _Bool showUpIndicator; // @synthesize showUpIndicator=_showUpIndicator;
@property _Bool isDarkStyle; // @synthesize isDarkStyle=_isDarkStyle;
- (void)DrawBottomIndicator:(struct CGContext *)arg1 withCenter:(struct CGPoint)arg2;
- (void)DrawTopIndicator:(struct CGContext *)arg1 withCenter:(struct CGPoint)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setDarkMode:(_Bool)arg1;

@end

