//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCMaskFilter, TXCSharpFilter, TXCSmoothHorizontalFilter, TXCSmoothMixFilter, TXCSmoothVerticalFilter;

@interface TXCSmoothBeautifyFilter
{
    TXCMaskFilter *_maskFilter;
    TXCSmoothHorizontalFilter *_smoothHorizontalFilter;
    TXCSmoothVerticalFilter *_smoothVerticalFilter;
    TXCSmoothMixFilter *_smoothMixFilter;
    TXCSharpFilter *_sharpFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCSharpFilter *sharpFilter; // @synthesize sharpFilter=_sharpFilter;
@property(retain, nonatomic) TXCSmoothMixFilter *smoothMixFilter; // @synthesize smoothMixFilter=_smoothMixFilter;
@property(retain, nonatomic) TXCSmoothVerticalFilter *smoothVerticalFilter; // @synthesize smoothVerticalFilter=_smoothVerticalFilter;
@property(retain, nonatomic) TXCSmoothHorizontalFilter *smoothHorizontalFilter; // @synthesize smoothHorizontalFilter=_smoothHorizontalFilter;
@property(retain, nonatomic) TXCMaskFilter *maskFilter; // @synthesize maskFilter=_maskFilter;
- (id)processVideoFrame:(id)arg1;
- (unsigned long long)beautyStyle;
- (id)fragmentShaderString;
- (id)initWithContext:(id)arg1;

@end

