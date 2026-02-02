//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, PAGAnimator, PAGFile, PAGPlayer, PAGSurface;

@interface PAGView : UIView
{
    PAGPlayer *pagPlayer;
    PAGSurface *pagSurface;
    PAGFile *pagFile;
    NSString *filePath;
    PAGAnimator *animator;
    _Bool _isVisible;
}

+ (Class)layerClass;
+ (void)load;
+ (void)startHookForFinderLive;
- (void)AsyncSurfacePrepared:(id)arg1;
- (struct CGRect)getBounds:(id)arg1;
- (struct __CVBuffer *)makeSnapshot;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)freeCache;
- (id)getLayersUnderPoint:(struct CGPoint)arg1;
- (_Bool)flush;
- (long long)currentFrame;
- (void)setProgress:(double)arg1;
- (double)getProgress;
- (long long)duration;
- (void)setMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)matrix;
- (void)setScaleMode:(int)arg1;
- (int)scaleMode;
- (void)setMaxFrameRate:(float)arg1;
- (float)maxFrameRate;
- (void)setCacheScale:(float)arg1;
- (float)cacheScale;
- (void)setUseDiskCache:(_Bool)arg1;
- (_Bool)useDiskCache;
- (void)setCacheEnabled:(_Bool)arg1;
- (_Bool)cacheEnabled;
- (void)setVideoEnabled:(_Bool)arg1;
- (_Bool)videoEnabled;
- (void)setComposition:(id)arg1;
- (id)getComposition;
- (void)setPathAsync:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)setPath:(id)arg1;
- (id)getPath;
- (void)stop;
- (void)pause;
- (void)play;
- (_Bool)isPlaying;
- (void)setRepeatCount:(int)arg1;
- (int)repeatCount;
- (void)setSync:(_Bool)arg1;
- (_Bool)sync;
- (void)onAnimationFlush:(double)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)initPAGSurface;
- (void)checkVisible;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)didMoveToWindow;
- (void)setContentScaleFactor:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (void)initPAG;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)mm_flush;
- (void)setFinderLivePAGRepeatCount:(int)arg1;
- (int)finderLivePAGRepeatCount;
- (void)mm_setRepeatCount:(int)arg1;
- (id)mm_initWithFrame:(struct CGRect)arg1;
- (void)setFinderLiveRenderStatistics:(id)arg1;
- (id)finderLiveRenderStatistics;

@end

