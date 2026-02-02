//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GLProgram, GPUImageFramebuffer, GPUImageMovieWriter, NSMutableArray;
@protocol GPUImageInput;

@interface GPUImageOutput : NSObject
{
    GPUImageFramebuffer *outputFramebuffer;
    NSMutableArray *targets;
    NSMutableArray *targetTextureIndices;
    struct CGSize inputTextureSize;
    struct CGSize cachedMaximumOutputSize;
    struct CGSize forcedMaximumSize;
    _Bool overrideInputSize;
    _Bool allTargetsWantMonochromeData;
    _Bool usingNextFrameForImageCapture;
    _Bool isUseRGB2YUV420;
    _Bool enableConstantTexture;
    GPUImageFramebuffer *yuv420Framebuffer;
    GLProgram *rgb2LumaProgram;
    GLProgram *rgb2ChromaNVProgram;
    _Bool _shouldSmoothlyScaleOutput;
    _Bool _shouldIgnoreUpdatesToThisTarget;
    _Bool _enabled;
    GPUImageMovieWriter *_audioEncodingTarget;
    id <GPUImageInput> _targetToIgnoreForUpdates;
    CDUnknownBlockType _frameProcessingCompletionBlock;
    struct GPUTextureOptions _outputTextureOptions;
}

- (void).cxx_destruct;
@property(nonatomic) struct GPUTextureOptions outputTextureOptions; // @synthesize outputTextureOptions=_outputTextureOptions;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType frameProcessingCompletionBlock; // @synthesize frameProcessingCompletionBlock=_frameProcessingCompletionBlock;
@property(nonatomic) id <GPUImageInput> targetToIgnoreForUpdates; // @synthesize targetToIgnoreForUpdates=_targetToIgnoreForUpdates;
@property(retain, nonatomic) GPUImageMovieWriter *audioEncodingTarget; // @synthesize audioEncodingTarget=_audioEncodingTarget;
@property(nonatomic) _Bool shouldIgnoreUpdatesToThisTarget; // @synthesize shouldIgnoreUpdatesToThisTarget=_shouldIgnoreUpdatesToThisTarget;
@property(nonatomic) _Bool shouldSmoothlyScaleOutput; // @synthesize shouldSmoothlyScaleOutput=_shouldSmoothlyScaleOutput;
- (struct CGImage *)newCGImageByFilteringImage:(id)arg1;
- (id)imageByFilteringImage:(id)arg1;
- (id)imageFromCurrentFramebufferWithOrientation:(long long)arg1;
- (id)imageFromCurrentFramebuffer;
- (_Bool)providesMonochromeOutput;
- (struct CGImage *)newCGImageByFilteringCGImage:(struct CGImage *)arg1;
- (struct CGImage *)newCGImageFromCurrentlyProcessedOutput;
- (void)useNextFrameForImageCapture;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize)arg1;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)removeAllTargets;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)addTarget:(id)arg1;
- (id)targets;
- (void)notifyTargetsAboutNewOutputTexture;
- (void)removeOutputFramebuffer;
- (id)framebufferForOutput;
- (_Bool)isUseRGB2YUV420;
- (void)setRGB2YUV420Process:(_Bool)arg1;
- (void)initRGBtoYUV420Filter;
- (void)removeYuv420Framebuffer;
- (id)yuv420FramebufferForOutput;
- (void)setInputFramebufferForTarget:(id)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

