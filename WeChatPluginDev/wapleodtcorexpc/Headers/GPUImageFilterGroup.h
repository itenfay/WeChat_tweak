//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GPUImageFramebuffer, GPUImageOutput, NSArray, NSMutableArray, NSString;
@protocol GPUImageInput;

@interface GPUImageFilterGroup
{
    NSMutableArray *filters;
    _Bool isEndProcessing;
    GPUImageOutput<GPUImageInput> *_terminalFilter;
    NSArray *_initialFilters;
    GPUImageOutput<GPUImageInput> *_inputFilterToIgnoreForUpdates;
    GPUImageFramebuffer *_inputFrameBuffer;
    struct CGSize _inputSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(retain, nonatomic) GPUImageFramebuffer *inputFrameBuffer; // @synthesize inputFrameBuffer=_inputFrameBuffer;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *inputFilterToIgnoreForUpdates; // @synthesize inputFilterToIgnoreForUpdates=_inputFilterToIgnoreForUpdates;
@property(retain, nonatomic) NSArray *initialFilters; // @synthesize initialFilters=_initialFilters;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *terminalFilter; // @synthesize terminalFilter=_terminalFilter;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize)arg1;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (unsigned int)processing;
- (void)destroyFrameBuffer;
- (int)generateFrameBuffer:(_Bool)arg1 newSize:(struct CGSize)arg2;
- (void)setInput:(id)arg1 inputSize:(struct CGSize)arg2;
- (void)setInputTexture:(unsigned int)arg1 inputSize:(struct CGSize)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (CDUnknownBlockType)frameProcessingCompletionBlock;
- (void)setFrameProcessingCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setRGB2YUV420Process:(_Bool)arg1;
- (id)targets;
- (void)removeAllTargets;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)setTargetToIgnoreForUpdates:(id)arg1;
- (struct CGImage *)newCGImageFromCurrentlyProcessedOutput;
- (void)useNextFrameForImageCapture;
- (unsigned long long)filterCount;
- (id)filterAtIndex:(unsigned long long)arg1;
- (void)addFilter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

