//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVVideoCompositionRenderContext, CIContext, MMContext, NSDictionary, NSString, WCPIPVideoFrame;
@protocol OS_dispatch_queue;

@interface LiveCustomRenderPIPVideoCompositing : NSObject
{
    _Bool _shouldCancelAllRequests;
    NSDictionary *_sourcePixelBufferAttributes;
    NSDictionary *_requiredPixelBufferAttributesForRenderContext;
    MMContext *_context;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    AVVideoCompositionRenderContext *_renderContext;
    CIContext *_ciContext;
    WCPIPVideoFrame *_emptyVideoFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPIPVideoFrame *emptyVideoFrame; // @synthesize emptyVideoFrame=_emptyVideoFrame;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
@property(retain, nonatomic) AVVideoCompositionRenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(nonatomic) _Bool shouldCancelAllRequests; // @synthesize shouldCancelAllRequests=_shouldCancelAllRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue; // @synthesize renderingQueue=_renderingQueue;
@property(retain, nonatomic) MMContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext; // @synthesize requiredPixelBufferAttributesForRenderContext=_requiredPixelBufferAttributesForRenderContext;
@property(retain, nonatomic) NSDictionary *sourcePixelBufferAttributes; // @synthesize sourcePixelBufferAttributes=_sourcePixelBufferAttributes;
- (id)createCIContext;
- (void)clearEmptyVideoFrame;
- (struct __CVBuffer *)createEmptyPixelBuffer;
- (void)finishVideoCompositionRequest:(id)arg1 withPixelBuffer:(struct __CVBuffer *)arg2;
- (void)defaultHandleVideoCompositionRequest:(id)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)renderContextChanged:(id)arg1;
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

