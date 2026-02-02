//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TXCBaseYUVDrawer
{
    const float *_colorConversionMartixPtr;
    const float *_colorConversionOffsetPtr;
    unsigned int _colorConversionOffsetUniform;
    unsigned int _colorConversionMatrixUniform;
}

@property(nonatomic) unsigned int colorConversionMatrixUniform; // @synthesize colorConversionMatrixUniform=_colorConversionMatrixUniform;
@property(nonatomic) unsigned int colorConversionOffsetUniform; // @synthesize colorConversionOffsetUniform=_colorConversionOffsetUniform;
- (void)uploadColorConversionToGPU;
- (void)setupColorConversionWithPixelBuffer:(struct __CVBuffer *)arg1;
- (void)getColorConversionMatrix:(const float **)arg1 andColorConversionOffset:(const float **)arg2 fromPixelBuffer:(struct __CVBuffer *)arg3;

@end

