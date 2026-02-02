//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GPUImageFramebuffer;

@interface GPUImageThreeInputFilter
{
    GPUImageFramebuffer *thirdInputFramebuffer;
    int filterThirdTextureCoordinateAttribute;
    int filterInputTextureUniform3;
    unsigned long long inputRotation3;
    unsigned int filterSourceTexture3;
    CDStruct_1b6d18a9 thirdFrameTime;
    _Bool hasSetSecondTexture;
    _Bool hasReceivedThirdFrame;
    _Bool thirdFrameWasVideo;
    _Bool thirdFrameCheckDisabled;
}

- (void).cxx_destruct;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (struct CGSize)rotatedSize:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)destroyFrameBuffer;
- (int)generateFrameBuffer:(_Bool)arg1 newSize:(struct CGSize)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)disableThirdFrameCheck;
- (void)initializeAttributes;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

