//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TXCSmoothVerticalFilter
{
    float _sampleFactor;
}

@property(nonatomic) float sampleFactor; // @synthesize sampleFactor=_sampleFactor;
- (void)setUniformsForFilter:(id)arg1 fboSize:(struct CGSize)arg2;
- (id)vertexShaderString;
- (id)fragmentShaderString;
- (id)initWithContext:(id)arg1;

@end

