//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPMTKView, TPMetalRenderProxy, UIView;
@protocol MTLDevice;

@interface TPMetalVideoRenderImpl : NSObject
{
    NSObject *_renderLock;
    _Bool _needUpdateRenderTarget;
    _Bool _colorManagement;
    _Bool _enableRenderOptYuv420;
    _Bool _waitingForMainThread;
    _Bool _metalActivePaused;
    _Bool _contentModeObserved;
    _Bool _enableViewContentMode;
    _Bool _atBottom;
    _Bool _backgroundRenderingEnabled;
    _Bool _isInBackground;
    int _gravity;
    int _enableRendererSharpen;
    int _enableRendererLucid;
    int _enableRendererClarity;
    int _tryLockErrorCount;
    id <MTLDevice> _metalDevice;
    TPMetalRenderProxy *_metalRender;
    TPMTKView *_mtkView;
    struct TPFrame *_videoFrame;
    struct TPFrame *_yuvFrame;
    UIView *_targetView;
    struct ITPRendererInterruptCallback *_interruptCallback;
}

- (void).cxx_destruct;
@property _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property _Bool backgroundRenderingEnabled; // @synthesize backgroundRenderingEnabled=_backgroundRenderingEnabled;
@property(nonatomic) _Bool atBottom; // @synthesize atBottom=_atBottom;
@property(nonatomic) _Bool enableViewContentMode; // @synthesize enableViewContentMode=_enableViewContentMode;
@property(nonatomic) _Bool contentModeObserved; // @synthesize contentModeObserved=_contentModeObserved;
@property(nonatomic) int tryLockErrorCount; // @synthesize tryLockErrorCount=_tryLockErrorCount;
@property _Bool metalActivePaused; // @synthesize metalActivePaused=_metalActivePaused;
@property _Bool waitingForMainThread; // @synthesize waitingForMainThread=_waitingForMainThread;
@property(nonatomic) struct ITPRendererInterruptCallback *interruptCallback; // @synthesize interruptCallback=_interruptCallback;
@property(nonatomic) int enableRendererClarity; // @synthesize enableRendererClarity=_enableRendererClarity;
@property(nonatomic) int enableRendererLucid; // @synthesize enableRendererLucid=_enableRendererLucid;
@property(nonatomic) _Bool enableRenderOptYuv420; // @synthesize enableRenderOptYuv420=_enableRenderOptYuv420;
@property(nonatomic) int enableRendererSharpen; // @synthesize enableRendererSharpen=_enableRendererSharpen;
@property(nonatomic) _Bool colorManagement; // @synthesize colorManagement=_colorManagement;
@property(nonatomic) int gravity; // @synthesize gravity=_gravity;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) struct TPFrame *yuvFrame; // @synthesize yuvFrame=_yuvFrame;
@property(nonatomic) struct TPFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(retain, nonatomic) TPMTKView *mtkView; // @synthesize mtkView=_mtkView;
@property(retain, nonatomic) TPMetalRenderProxy *metalRender; // @synthesize metalRender=_metalRender;
@property(retain, nonatomic) id <MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
- (void)changeMetalActivePausedInBackground;
- (void)setParam:(int)arg1 withBlock:(struct TPRendererParamBlock)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unObserveContentMode;
- (void)observeContentMode;
- (void)reshape:(id)arg1;
- (void)render:(id)arg1;
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
- (void)setDrawableSize;
- (int)drawFrame:(struct TPFrame *)arg1;
- (void)destory;
- (_Bool)setup;
- (void)configure:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

