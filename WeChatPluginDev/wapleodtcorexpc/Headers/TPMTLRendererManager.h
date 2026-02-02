//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TPMTLDisplayConfig, TPMTLDisplayView, TPMTLGeneralFrameRenderer, UIView;
@protocol MTLDevice;

@interface TPMTLRendererManager : NSObject
{
    _Bool _waitingForMainThread;
    _Bool _metalActivePaused;
    _Bool _contentModeObserved;
    _Bool _enableViewContentMode;
    _Bool _needUpdateRenderTarget;
    _Bool _atBottom;
    _Bool _backgroundRenderingEnabled;
    _Bool _isInBackground;
    int _gravity;
    int _tryLockErrorCount;
    id <MTLDevice> _mtlDevice;
    TPMTLGeneralFrameRenderer *_renderer;
    TPMTLDisplayView *_mtkView;
    TPMTLDisplayConfig *_displayConfig;
    UIView *_targetView;
    struct ITPRendererInterruptCallback *_interruptCallback;
    NSObject *_renderLock;
}

- (void).cxx_destruct;
@property _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property _Bool backgroundRenderingEnabled; // @synthesize backgroundRenderingEnabled=_backgroundRenderingEnabled;
@property(nonatomic) _Bool atBottom; // @synthesize atBottom=_atBottom;
@property(nonatomic) _Bool needUpdateRenderTarget; // @synthesize needUpdateRenderTarget=_needUpdateRenderTarget;
@property(retain, nonatomic) NSObject *renderLock; // @synthesize renderLock=_renderLock;
@property(nonatomic) _Bool enableViewContentMode; // @synthesize enableViewContentMode=_enableViewContentMode;
@property(nonatomic) _Bool contentModeObserved; // @synthesize contentModeObserved=_contentModeObserved;
@property(nonatomic) int tryLockErrorCount; // @synthesize tryLockErrorCount=_tryLockErrorCount;
@property _Bool metalActivePaused; // @synthesize metalActivePaused=_metalActivePaused;
@property _Bool waitingForMainThread; // @synthesize waitingForMainThread=_waitingForMainThread;
@property(nonatomic) struct ITPRendererInterruptCallback *interruptCallback; // @synthesize interruptCallback=_interruptCallback;
@property(nonatomic) int gravity; // @synthesize gravity=_gravity;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) TPMTLDisplayConfig *displayConfig; // @synthesize displayConfig=_displayConfig;
@property(retain, nonatomic) TPMTLDisplayView *mtkView; // @synthesize mtkView=_mtkView;
@property(retain, nonatomic) TPMTLGeneralFrameRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) id <MTLDevice> mtlDevice; // @synthesize mtlDevice=_mtlDevice;
- (void)changeMetalActivePausedInBackground;
- (void)setParam:(int)arg1 withBlock:(struct TPRendererParamBlock)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unObserveContentMode;
- (void)observeContentMode;
- (void)unregisterApplicationObservers;
- (void)registerApplicationObservers;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (long long)getContentModeFromGravity:(int)arg1;
- (void)setVideoGravity:(int)arg1;
- (int)waitForMainThread;
- (int)updateRenderTarget;
- (void)setRenderTarget:(void *)arg1;
- (struct CGSize)getDrawableSize:(struct TPFrame *)arg1;
- (id)getDisplayConfig:(struct TPFrame *)arg1;
- (int)drawFrame:(struct TPFrame *)arg1;
- (void)destory;
- (_Bool)setup;
- (void)configure:(id)arg1;
- (void)dealloc;
- (id)init;

@end

