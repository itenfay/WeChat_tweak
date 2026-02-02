//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSHashTable, NSLock, NSMutableDictionary, NSRecursiveLock, NSString, RfxPagFile, RfxPagPlayer, RfxPagSurface, RfxPagValueAnimator;

@interface RfxPagView : UIView
{
    int deviceKind;
    RfxPagPlayer *pagPlayer;
    RfxPagSurface *pagSurface;
    RfxPagFile *pagFile;
    NSString *filePath;
    RfxPagValueAnimator *valueAnimator;
    NSMutableDictionary *textReplacementMap;
    NSMutableDictionary *imageReplacementMap;
    NSHashTable *listeners;
    _Bool _isPlaying;
    _Bool _sync;
    _Bool _isAsyncFlushing;
    _Bool _bufferPrepared;
    _Bool _isInBackground;
    _Bool _progressExplicitlySet;
    _Bool _isVisible;
    NSRecursiveLock *_updateTimeLock;
    NSLock *_listenersLock;
}

+ (Class)layerClass;
+ (void)RegisterFlushQueueDestoryMethod;
+ (_Bool)UseOpenGLBackend;
+ (id)FlushQueue;
+ (void)load;
+ (void)startHookForFinderLive;
@property(retain, nonatomic) NSLock *listenersLock; // @synthesize listenersLock=_listenersLock;
@property _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) NSRecursiveLock *updateTimeLock; // @synthesize updateTimeLock=_updateTimeLock;
@property _Bool progressExplicitlySet; // @synthesize progressExplicitlySet=_progressExplicitlySet;
@property _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property _Bool bufferPrepared; // @synthesize bufferPrepared=_bufferPrepared;
@property _Bool isAsyncFlushing; // @synthesize isAsyncFlushing=_isAsyncFlushing;
@property(nonatomic) _Bool sync; // @synthesize sync=_sync;
- (void)helloworld;
- (void)applicationWillResignActive:(id)arg1;
- (void)renderTargetBufferPrepared:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)updateViewAsync;
- (void)updateView;
- (_Bool)flush;
- (void)setProgress:(double)arg1;
- (double)getProgress;
- (long long)duration;
- (void)setMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)matrix;
- (void)setScaleMode:(int)arg1;
- (int)scaleMode;
- (void)setMaxFrameRate:(float)arg1;
- (float)maxFrameRate;
- (void)setComposition:(id)arg1;
- (id)getComposition;
- (_Bool)setPath:(id)arg1;
- (id)getPath;
- (void)setRepeatCount:(int)arg1;
- (void)stop;
- (void)doPlay;
- (void)play;
@property _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)onAnimationRepeat;
- (void)onAnimationCancel;
- (void)onAnimationEnd;
- (void)onAnimationStart;
- (void)onAnimationUpdate;
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

