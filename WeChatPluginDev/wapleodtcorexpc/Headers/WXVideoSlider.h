//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UISlider.h>

@class UIColor, UIImage;

@interface WXVideoSlider : UISlider
{
    UIImage *_dotImage;
    UIImage *_frontgroundImage;
    UIImage *_backgroundImage;
    UIColor *_frontgroundColor;
    UIColor *_backgroundColor;
    double _cornerRadius;
    double _dotImgOverScrollMode;
    double _sliderHeight;
    double _additionalSliderHeightWhenHighlighted;
}

- (void).cxx_destruct;
@property(nonatomic) double additionalSliderHeightWhenHighlighted; // @synthesize additionalSliderHeightWhenHighlighted=_additionalSliderHeightWhenHighlighted;
@property(nonatomic) double sliderHeight; // @synthesize sliderHeight=_sliderHeight;
@property(nonatomic) double dotImgOverScrollMode; // @synthesize dotImgOverScrollMode=_dotImgOverScrollMode;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *frontgroundColor; // @synthesize frontgroundColor=_frontgroundColor;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *frontgroundImage; // @synthesize frontgroundImage=_frontgroundImage;
@property(retain, nonatomic) UIImage *dotImage; // @synthesize dotImage=_dotImage;
- (id)getFrontgroundImage:(_Bool)arg1;
- (id)getBackgroundImage:(_Bool)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)setAnimateHighlighted:(_Bool)arg1 dotImage:(id)arg2;
- (void)initView;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)initWithFrame:(struct CGRect)arg1;

@end

