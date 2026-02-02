//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GLProgram, GPUImageFramebuffer, NSMutableDictionary;

@interface GPUImageTwoPassFilter
{
    GPUImageFramebuffer *secondOutputFramebuffer;
    GLProgram *secondFilterProgram;
    int secondFilterPositionAttribute;
    int secondFilterTextureCoordinateAttribute;
    int secondFilterInputTextureUniform;
    int secondFilterInputTextureUniform2;
    NSMutableDictionary *secondProgramUniformStateRestorationBlocks;
}

- (void).cxx_destruct;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (void)setAndExecuteUniformStateCallbackAtIndex:(int)arg1 forProgram:(id)arg2 toBlock:(CDUnknownBlockType)arg3;
- (void)destroyFrameBuffer;
- (int)generateFrameBuffer:(_Bool)arg1 newSize:(struct CGSize)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)removeOutputFramebuffer;
- (id)framebufferForOutput;
- (void)initializeSecondaryAttributes;
- (id)initWithFirstStageFragmentShaderFromString:(id)arg1 secondStageFragmentShaderFromString:(id)arg2;
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;

@end

