//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImage;

@interface WXHighlightableVideoSlider
{
    _Bool _hasTouched;
    UIImage *_interactiveFrontgroundImage;
    UIImage *_interactiveBackgroundImage;
    UIImage *_customDotActiveImage;
    UIImage *_customDotInactiveImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *customDotInactiveImage; // @synthesize customDotInactiveImage=_customDotInactiveImage;
@property(retain, nonatomic) UIImage *customDotActiveImage; // @synthesize customDotActiveImage=_customDotActiveImage;
@property(retain, nonatomic) UIImage *interactiveBackgroundImage; // @synthesize interactiveBackgroundImage=_interactiveBackgroundImage;
@property(retain, nonatomic) UIImage *interactiveFrontgroundImage; // @synthesize interactiveFrontgroundImage=_interactiveFrontgroundImage;
@property(nonatomic) _Bool hasTouched; // @synthesize hasTouched=_hasTouched;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)imageWithHeight:(double)arg1 alpha:(double)arg2;
- (id)getFrontgroundImage:(_Bool)arg1;
- (id)getBackgroundImage:(_Bool)arg1;
- (id)getFrontgroundImage;
- (id)getBackgroundImage;
- (id)dotImage;

@end

