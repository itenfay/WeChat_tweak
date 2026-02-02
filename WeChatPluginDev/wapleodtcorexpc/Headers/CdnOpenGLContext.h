//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext;
@protocol OS_dispatch_queue;

@interface CdnOpenGLContext : NSObject
{
    int _refCnt;
    struct _opaque_pthread_mutex_t _refCntMutex;
    _Bool _isMainThreadLag2024T3StopGlContextEnabled;
    EAGLContext *_glContext;
    NSObject<OS_dispatch_queue> *_renderQueue;
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;
}

+ (_Bool)supportsFastTextureUpload;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) struct __CVOpenGLESTextureCache *coreVideoTextureCache; // @synthesize coreVideoTextureCache=_coreVideoTextureCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(retain, nonatomic) EAGLContext *glContext; // @synthesize glContext=_glContext;
@property(nonatomic) _Bool isMainThreadLag2024T3StopGlContextEnabled; // @synthesize isMainThreadLag2024T3StopGlContextEnabled=_isMainThreadLag2024T3StopGlContextEnabled;
- (void)decreaseReference;
- (void)increaseReference;
- (void)runAsyncOnRenderQueue:(CDUnknownBlockType)arg1;
- (void)runSyncOnRenderQueue:(CDUnknownBlockType)arg1;
- (_Bool)canRenderOnInactiveState;
- (id)deviceModelVersion;
- (void)stopGlContext;
@property(readonly, nonatomic) _Bool isAvailable;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)openGLContext;
- (void)setupGLContext;
- (void)dealloc;
- (id)init;

@end

