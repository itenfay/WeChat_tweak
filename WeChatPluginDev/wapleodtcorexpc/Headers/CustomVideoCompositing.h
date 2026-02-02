//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVVideoCompositionRenderContext, CADisplayLink, CIContext, MMContext, NSDictionary, NSMutableArray, NSString, WCPIPVideoFrame;
@protocol OS_dispatch_queue;

@interface CustomVideoCompositing : NSObject
{
    _Bool _shouldCancelAllRequests;
    _Bool _isRenderContextChanged;
    _Bool _isInAutoRefreshMode;
    _Bool _isDefaultPixelTimeToRefresh;
    NSDictionary *_sourcePixelBufferAttributes;
    NSDictionary *_requiredPixelBufferAttributesForRenderContext;
    MMContext *_context;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    AVVideoCompositionRenderContext *_renderContext;
    CIContext *_ciContext;
    WCPIPVideoFrame *_emptyVideoFrame;
    NSMutableArray *_compositionRequestList;
    CADisplayLink *_displayLink;
    unsigned long long _lastPIPRenderTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastPIPRenderTime; // @synthesize lastPIPRenderTime=_lastPIPRenderTime;
@property(nonatomic) _Bool isDefaultPixelTimeToRefresh; // @synthesize isDefaultPixelTimeToRefresh=_isDefaultPixelTimeToRefresh;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool isInAutoRefreshMode; // @synthesize isInAutoRefreshMode=_isInAutoRefreshMode;
@property(retain, nonatomic) NSMutableArray *compositionRequestList; // @synthesize compositionRequestList=_compositionRequestList;
@property(retain, nonatomic) WCPIPVideoFrame *emptyVideoFrame; // @synthesize emptyVideoFrame=_emptyVideoFrame;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
@property(retain, nonatomic) AVVideoCompositionRenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(nonatomic) _Bool isRenderContextChanged; // @synthesize isRenderContextChanged=_isRenderContextChanged;
@property(nonatomic) _Bool shouldCancelAllRequests; // @synthesize shouldCancelAllRequests=_shouldCancelAllRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue; // @synthesize renderingQueue=_renderingQueue;
@property(retain, nonatomic) MMContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext; // @synthesize requiredPixelBufferAttributesForRenderContext=_requiredPixelBufferAttributesForRenderContext;
@property(retain, nonatomic) NSDictionary *sourcePixelBufferAttributes; // @synthesize sourcePixelBufferAttributes=_sourcePixelBufferAttributes;
- (void)logForLastPIPRenderTime:(_Bool)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)refreshWithDisplayLink:(id)arg1;
- (void)onEnableDisplayVideoSrcChange:(_Bool)arg1;
- (void)directlyHandleCurrentVideoCompositionRequest;
- (void)onStartCustomPixelTransferChange;
- (void)finishVideoCompositionRequest;
- (void)onAttachWidgetsChange;
- (void)onNewPixelBufferRefresh;
- (_Bool)checkEnableHandleCompositionRequest;
- (id)createCIContext;
- (void)stopAutoRefreshDisplayLink;
- (void)stopAutoRefreshPixelBuffer;
- (void)startAutoRefreshDisplayLink;
- (void)startAutoRefreshPixelBuffer;
- (void)clearEmptyVideoFrame;
- (struct __CVBuffer *)createEmptyPixelBuffer;
- (void)onCustomPixelBufferRenderCompleted;
- (struct __CVBuffer *)newRenderdPixelBufferForRequest:(id)arg1;
- (id)getBlendedImageWithInputImage:(id)arg1 inputBackgroundImage:(id)arg2 maskImage:(id)arg3;
- (id)getAspectedMaskImage:(id)arg1 renderSize:(struct CGSize)arg2;
- (id)getAspectedBackImage:(struct CGSize)arg1;
- (struct CGRect)transferNormalizedFrameFromCGModeToCIMode:(struct CGRect)arg1;
- (struct CGRect)getDisplayRectWithNormalizedFrame:(struct CGRect)arg1 renderSize:(struct CGSize)arg2;
- (id)getAspectedImage:(id)arg1 withRenderObj:(id)arg2 renderSize:(struct CGSize)arg3;
- (id)createRenderImageWithAttachWidget:(id)arg1 renderSize:(struct CGSize)arg2;
- (id)createRenderImageWithVideoFrame:(id)arg1 attachRender:(id)arg2 renderSize:(struct CGSize)arg3;
- (id)createFitFrameImageWithRenderSize:(struct CGSize)arg1;
- (struct __CVBuffer *)applyPixelBuffer:(struct __CVBuffer *)arg1 renderContext:(id)arg2;
- (void)finishVideoCompositionRequest:(id)arg1 withPixelBuffer:(struct __CVBuffer *)arg2;
- (void)handleVideoCompositionRequest:(id)arg1;
- (void)defaultHandleVideoCompositionRequest:(id)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)renderContextChanged:(id)arg1;
- (void)initNotifications;
- (void)registerExtension;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool canConformColorOfSourceFrames;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsHDRSourceFrames;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool supportsWideColorSourceFrames;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N


@end

