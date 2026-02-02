//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface MMGlowingLabel : UILabel
{
    double _glowSize;
    UIColor *_glowColor;
    double _innerGlowSize;
    UIColor *_innerGlowColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *innerGlowColor; // @synthesize innerGlowColor=_innerGlowColor;
@property(nonatomic) double innerGlowSize; // @synthesize innerGlowSize=_innerGlowSize;
@property(retain, nonatomic) UIColor *glowColor; // @synthesize glowColor=_glowColor;
@property(nonatomic) double glowSize; // @synthesize glowSize=_glowSize;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

