//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor, UIImage;

@interface QPolylineViewPayload
{
    _Bool _drawSymbol;
    _Bool _useGradient;
    double _borderWidth;
    UIColor *_borderColor;
    UIColor *_eraseColor;
    long long _drawType;
    UIImage *_styleTextureImage;
    double _footprintStep;
    UIImage *_symbolImage;
    double _symbolGap;
}

- (void).cxx_destruct;
@property(nonatomic) double symbolGap; // @synthesize symbolGap=_symbolGap;
@property(retain, nonatomic) UIImage *symbolImage; // @synthesize symbolImage=_symbolImage;
@property(nonatomic) _Bool useGradient; // @synthesize useGradient=_useGradient;
@property(nonatomic) _Bool drawSymbol; // @synthesize drawSymbol=_drawSymbol;
@property(nonatomic) double footprintStep; // @synthesize footprintStep=_footprintStep;
@property(retain, nonatomic) UIImage *styleTextureImage; // @synthesize styleTextureImage=_styleTextureImage;
@property(nonatomic) long long drawType; // @synthesize drawType=_drawType;
@property(retain, nonatomic) UIColor *eraseColor; // @synthesize eraseColor=_eraseColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;

@end

