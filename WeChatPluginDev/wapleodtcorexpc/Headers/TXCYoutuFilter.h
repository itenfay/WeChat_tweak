//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCTwoInputFilter, YTBeautyBlurFilter, YTBeautySmoothFilter;

@interface TXCYoutuFilter
{
    YTBeautyBlurFilter *_smoothBlurFilter;
    YTBeautyBlurFilter *_borderBlurFilter;
    TXCTwoInputFilter *_borderFilter;
    YTBeautySmoothFilter *_smoothFilter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTBeautySmoothFilter *smoothFilter; // @synthesize smoothFilter=_smoothFilter;
@property(readonly, nonatomic) TXCTwoInputFilter *borderFilter; // @synthesize borderFilter=_borderFilter;
@property(readonly, nonatomic) YTBeautyBlurFilter *borderBlurFilter; // @synthesize borderBlurFilter=_borderBlurFilter;
@property(readonly, nonatomic) YTBeautyBlurFilter *smoothBlurFilter; // @synthesize smoothBlurFilter=_smoothBlurFilter;
- (id)processVideoFrame:(id)arg1;
- (unsigned long long)beautyStyle;
- (id)fragmentShaderString;
- (id)initWithContext:(id)arg1;

@end

