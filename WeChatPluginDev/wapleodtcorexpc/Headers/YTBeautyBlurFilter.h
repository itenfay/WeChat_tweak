//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TXCBeautifyBaseFilter;

@interface YTBeautyBlurFilter
{
    float _verticalTexelSpacing;
    float _horizontalTexelSpacing;
    TXCBeautifyBaseFilter *_youtuBeautyBlurFilter1;
    TXCBeautifyBaseFilter *_youtuBeautyBlurFilter2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCBeautifyBaseFilter *youtuBeautyBlurFilter2; // @synthesize youtuBeautyBlurFilter2=_youtuBeautyBlurFilter2;
@property(retain, nonatomic) TXCBeautifyBaseFilter *youtuBeautyBlurFilter1; // @synthesize youtuBeautyBlurFilter1=_youtuBeautyBlurFilter1;
@property(nonatomic) float horizontalTexelSpacing; // @synthesize horizontalTexelSpacing=_horizontalTexelSpacing;
@property(nonatomic) float verticalTexelSpacing; // @synthesize verticalTexelSpacing=_verticalTexelSpacing;
- (id)processVideoFrame:(id)arg1;
- (void)setUniformsForFilter:(id)arg1 fboSize:(struct CGSize)arg2;
- (void)setOutputSize:(struct CGSize)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

