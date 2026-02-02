//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSMutableDictionary, NSString, PAGAnimator, PAGComposition, PAGDecoder, UIImage;

@interface PAGImageView : UIImageView
{
    NSString *filePath;
    PAGAnimator *animator;
    PAGComposition *pagComposition;
    PAGDecoder *pagDecoder;
    long long duartion;
    float renderScaleFactor;
    NSMutableDictionary *imagesMap;
    struct mutex imageViewLock;
    struct __CVPixelBufferPool *diskBufferPool;
    _Bool _memoryCacheEnabled;
    _Bool _isVisible;
    _Bool _memeoryCacheFinished;
    float _maxFrameRate;
    long long _currentFrameIndex;
    UIImage *_currentUIImage;
    long long _pagContentVersion;
    long long _fileWidth;
    long long _fileHeight;
    struct CGSize _viewSize;
}

+ (void)SetMaxDiskSize:(unsigned long long)arg1;
+ (unsigned long long)MaxDiskSize;
+ (void)RegisterFlushQueueDestoryMethod;
+ (id)ImageViewFlushQueue;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) float maxFrameRate; // @synthesize maxFrameRate=_maxFrameRate;
@property(nonatomic) long long fileHeight; // @synthesize fileHeight=_fileHeight;
@property(nonatomic) long long fileWidth; // @synthesize fileWidth=_fileWidth;
@property(nonatomic) _Bool memeoryCacheFinished; // @synthesize memeoryCacheFinished=_memeoryCacheFinished;
@property long long pagContentVersion; // @synthesize pagContentVersion=_pagContentVersion;
@property(retain) UIImage *currentUIImage; // @synthesize currentUIImage=_currentUIImage;
@property long long currentFrameIndex; // @synthesize currentFrameIndex=_currentFrameIndex;
@property _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) _Bool memoryCacheEnabled; // @synthesize memoryCacheEnabled=_memoryCacheEnabled;
- (_Bool)flush;
- (unsigned long long)currentFrame;
- (void)setCurrentFrame:(unsigned long long)arg1;
- (void)setComposition:(id)arg1 maxFrameRate:(float)arg2;
- (void)setComposition:(id)arg1;
- (id)getComposition;
- (void)setPathAsync:(id)arg1 maxFrameRate:(float)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setPathAsync:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)setPath:(id)arg1 maxFrameRate:(float)arg2;
- (_Bool)setPath:(id)arg1;
- (id)getPath;
- (void)setRepeatCount:(int)arg1;
- (int)repeatCount;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)isPlaying;
- (id)currentImage;
- (unsigned long long)numFrames;
- (void)pause;
- (void)play;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)setCacheAllFramesInMemory:(_Bool)arg1;
- (_Bool)cacheAllFramesInMemory;
- (void)setContentScaleFactor:(double)arg1;
- (float)renderScale;
- (void)setRenderScale:(float)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)imageForCVPixelBuffer:(struct __CVBuffer *)arg1;
- (void)reset;
- (void)freeCache;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)submitToImageView;
- (_Bool)checkPAGCompositionChanged;
- (_Bool)updateImageViewFrom:(struct __CVBuffer *)arg1 atIndex:(long long)arg2;
- (void)checkVisible;
- (void)didMoveToWindow;
- (void)onAnimationFlush:(double)arg1;
- (id)getPAGDecoder;
- (struct __CVBuffer *)getMemoryCacheCVPixelBuffer;
- (struct __CVBuffer *)getDiskCacheCVPixelBuffer;
- (void)setCompositionInternal:(id)arg1 maxFrameRate:(float)arg2;
- (void)dealloc;
- (void)initPAG;
- (id)initWithFrame:(struct CGRect)arg1;

@end

