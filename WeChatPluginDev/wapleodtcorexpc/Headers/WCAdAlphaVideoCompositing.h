//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVVideoCompositionRenderContext, CIContext, NSDictionary, NSString, WCLoopMetricsCollector;
@protocol OS_dispatch_queue;

@interface WCAdAlphaVideoCompositing : NSObject
{
    _Bool _shouldCancelAllRequests;
    NSDictionary *_sourcePixelBufferAttributes;
    NSDictionary *_requiredPixelBufferAttributesForRenderContext;
    NSObject<OS_dispatch_queue> *_renderContextQueue;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    AVVideoCompositionRenderContext *_renderContext;
    CIContext *_ciContext;
    WCLoopMetricsCollector *_metricsCollector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCLoopMetricsCollector *metricsCollector; // @synthesize metricsCollector=_metricsCollector;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
@property(retain, nonatomic) AVVideoCompositionRenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(nonatomic) _Bool shouldCancelAllRequests; // @synthesize shouldCancelAllRequests=_shouldCancelAllRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue; // @synthesize renderingQueue=_renderingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderContextQueue; // @synthesize renderContextQueue=_renderContextQueue;
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext; // @synthesize requiredPixelBufferAttributesForRenderContext=_requiredPixelBufferAttributesForRenderContext;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes; // @synthesize sourcePixelBufferAttributes=_sourcePixelBufferAttributes;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (struct __CVBuffer *)createEmptyPixelBuffer;
- (struct __CVBuffer *)newRenderPixelBufferForRequest:(id)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)renderContextChanged:(id)arg1;
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

