//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext;
@protocol OS_dispatch_queue;

@interface LayerOpenGLContext : NSObject
{
    struct __CVOpenGLESTextureCache *_cvTextureCache;
    EAGLContext *_context;
    NSObject<OS_dispatch_queue> *_contextQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
- (void)runSyncOnOpenGLESProcessQueueTrue:(CDUnknownBlockType)arg1;
- (void)runAsyncOnOpenGLESProcessQueue:(CDUnknownBlockType)arg1;
- (void)runSyncOnOpenGLESProcessQueue:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (id)createGLContext;
- (struct __CVBuffer *)mapPixelBuffer:(struct __CVBuffer *)arg1 type:(unsigned long long)arg2;
- (struct __CVBuffer *)createGLTexture:(struct __CVBuffer *)arg1 width:(int)arg2 height:(int)arg3 nativeiOSFormat:(int)arg4 glFormat:(unsigned int)arg5 planeIndex:(unsigned long long)arg6;
@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *cvGLESTextureCache;
- (void)dealloc;
- (id)init;

@end

