//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface MMLiveColorfulLabel : UILabel
{
    UIColor *_fromColor;
    UIColor *_middleColor;
    UIColor *_toColor;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain, nonatomic) UIColor *toColor; // @synthesize toColor=_toColor;
@property(retain, nonatomic) UIColor *middleColor; // @synthesize middleColor=_middleColor;
@property(retain, nonatomic) UIColor *fromColor; // @synthesize fromColor=_fromColor;
- (void)configWithColorHexArray:(id)arg1 fallbackColor:(id)arg2;
- (void)clearAllGradientColors;
- (void)drawRect:(struct CGRect)arg1;

@end

