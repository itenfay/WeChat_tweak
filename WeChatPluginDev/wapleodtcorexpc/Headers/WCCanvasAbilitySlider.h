//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UISlider.h>

@class UIColor, UIImage;

@interface WCCanvasAbilitySlider : UISlider
{
    double _backgroundHeight;
    UIColor *_frontgroundColor;
    UIColor *_backgroundColor;
    UIImage *_backgroundImage;
    UIImage *_frontgroundImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *frontgroundImage; // @synthesize frontgroundImage=_frontgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *frontgroundColor; // @synthesize frontgroundColor=_frontgroundColor;
@property(nonatomic) double backgroundHeight; // @synthesize backgroundHeight=_backgroundHeight;
- (id)getImageWithImage:(id)arg1;
- (id)getImageWithColor:(id)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (id)init;

@end

