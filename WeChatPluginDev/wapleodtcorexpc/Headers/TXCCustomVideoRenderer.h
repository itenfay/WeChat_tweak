//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CIContext, NSString, TXCDispatchQueue, TXCFramebufferDrawer, TXCGlFrameBuffer, TXCPixelBufferPool, TXCRgbToYuvFilter, TXCVideoFrame, TXCVideoFrameCoords, TXCVideoRenderConfig;
@protocol TXCCustomVideoRendererDelegate, TXIGlContext;

@interface TXCCustomVideoRenderer
{
    CIContext *_ciContext;
    TXCDispatchQueue *_queue;
    TXCVideoRenderConfig *_config;
    id <TXCCustomVideoRendererDelegate> _delegate;
    TXCGlFrameBuffer *_frameBuffer;
    id <TXIGlContext> _context;
    TXCVideoFrameCoords *_frameCoords;
    TXCFramebufferDrawer *_drawer;
    TXCRgbToYuvFilter *_rgbToYuvFilter;
    TXCPixelBufferPool *_pbPool;
    TXCVideoFrame *_tempNV12Fame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCVideoFrame *tempNV12Fame; // @synthesize tempNV12Fame=_tempNV12Fame;
@property(retain, nonatomic) TXCPixelBufferPool *pbPool; // @synthesize pbPool=_pbPool;
@property(retain, nonatomic) TXCRgbToYuvFilter *rgbToYuvFilter; // @synthesize rgbToYuvFilter=_rgbToYuvFilter;
@property(retain, nonatomic) TXCFramebufferDrawer *drawer; // @synthesize drawer=_drawer;
@property(retain, nonatomic) TXCVideoFrameCoords *frameCoords; // @synthesize frameCoords=_frameCoords;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
@property(retain, nonatomic) TXCGlFrameBuffer *frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(readonly, nonatomic) __weak id <TXCCustomVideoRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TXCVideoRenderConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
- (void)callbackFrame:(id)arg1;
- (void)processInBackground:(id)arg1;
- (_Bool)isOutputDimensionsSwapped;
- (_Bool)needTransform;
- (_Bool)canSkipFrame:(id)arg1;
- (_Bool)isGLSupportFormat:(unsigned long long)arg1;
- (id)dataFrameFromFrame:(id)arg1;
- (void)setGSensorMode:(unsigned long long)arg1 homeOrientation:(int)arg2;
- (void)setRotation:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)setFillMode:(unsigned long long)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (_Bool)createGlObjectsIfNeeded;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 context:(id)arg2 config:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

