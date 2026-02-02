//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MAVGradientBlurEffect
{
    _Bool _centerCropBlur;
    _Bool _blurTop;
    _Bool _blurBottom;
    float _radius;
    float _blurMaskRatio;
    float _contentOffset;
    float _contentOffsetPercent;
}

@property(nonatomic) float contentOffsetPercent; // @synthesize contentOffsetPercent=_contentOffsetPercent;
@property(nonatomic) float contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) _Bool blurBottom; // @synthesize blurBottom=_blurBottom;
@property(nonatomic) _Bool blurTop; // @synthesize blurTop=_blurTop;
@property(nonatomic) float blurMaskRatio; // @synthesize blurMaskRatio=_blurMaskRatio;
@property(nonatomic) _Bool centerCropBlur; // @synthesize centerCropBlur=_centerCropBlur;
@property(nonatomic) float radius; // @synthesize radius=_radius;
- (long long)type;
- (id)init;

@end

