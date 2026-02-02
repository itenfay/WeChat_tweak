//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GPUImageFramebuffer;

@interface GPUImageTwoInputFilter
{
    GPUImageFramebuffer *secondInputFramebuffer;
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
    unsigned long long inputRotation2;
    CDStruct_1b6d18a9 firstFrameTime;
    CDStruct_1b6d18a9 secondFrameTime;
    _Bool hasSetFirstTexture;
    _Bool hasReceivedFirstFrame;
    _Bool hasReceivedSecondFrame;
    _Bool firstFrameWasVideo;
    _Bool secondFrameWasVideo;
    _Bool firstFrameCheckDisabled;
    _Bool secondFrameCheckDisabled;
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
- (void)disableSecondFrameCheck;
- (void)disableFirstFrameCheck;
- (void)initializeAttributes;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

