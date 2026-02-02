//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer;

@interface MMLiveScrollGradientMaskingView
{
    _Bool _enableFadeoutAtBeginning;
    _Bool _enableFadeoutAtEnding;
    long long _scrollDirection;
    double _gradientInset;
    double _gradientLength;
    double _gradientFadeoutLength;
    CALayer *_fadeoutLayerForBeginning;
    CALayer *_fadeoutLayerForEnding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *fadeoutLayerForEnding; // @synthesize fadeoutLayerForEnding=_fadeoutLayerForEnding;
@property(retain, nonatomic) CALayer *fadeoutLayerForBeginning; // @synthesize fadeoutLayerForBeginning=_fadeoutLayerForBeginning;
@property(nonatomic) double gradientFadeoutLength; // @synthesize gradientFadeoutLength=_gradientFadeoutLength;
@property(nonatomic) double gradientLength; // @synthesize gradientLength=_gradientLength;
@property(nonatomic) double gradientInset; // @synthesize gradientInset=_gradientInset;
@property(nonatomic) _Bool enableFadeoutAtEnding; // @synthesize enableFadeoutAtEnding=_enableFadeoutAtEnding;
@property(nonatomic) _Bool enableFadeoutAtBeginning; // @synthesize enableFadeoutAtBeginning=_enableFadeoutAtBeginning;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

