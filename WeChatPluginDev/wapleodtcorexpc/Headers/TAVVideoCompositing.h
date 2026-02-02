//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVVideoCompositionRenderContext, NSDictionary, NSString, TAVRenderReportData;
@protocol OS_dispatch_queue;

@interface TAVVideoCompositing : NSObject
{
    _Bool _renderContextDidChange;
    _Bool _shouldCancelAllRequests;
    NSDictionary *_sourcePixelBufferAttributes;
    NSDictionary *_requiredPixelBufferAttributesForRenderContext;
    NSObject<OS_dispatch_queue> *_renderContextQueue;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    AVVideoCompositionRenderContext *_renderContext;
    TAVRenderReportData *_renderReportData;
}

+ (id)globalRequiredPixelBufferAttributesForRenderContext;
+ (id)globalSourcePixelBufferAttributes;
+ (void)setGlobalRequiredPixelBufferAttributesForRenderContext:(id)arg1;
+ (void)setGlobalSourcePixelBufferAttributes:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) TAVRenderReportData *renderReportData; // @synthesize renderReportData=_renderReportData;
@property(retain, nonatomic) AVVideoCompositionRenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(nonatomic) _Bool shouldCancelAllRequests; // @synthesize shouldCancelAllRequests=_shouldCancelAllRequests;
@property(nonatomic) _Bool renderContextDidChange; // @synthesize renderContextDidChange=_renderContextDidChange;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue; // @synthesize renderingQueue=_renderingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderContextQueue; // @synthesize renderContextQueue=_renderContextQueue;
@property(retain, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext; // @synthesize requiredPixelBufferAttributesForRenderContext=_requiredPixelBufferAttributesForRenderContext;
@property(retain, nonatomic) NSDictionary *sourcePixelBufferAttributes; // @synthesize sourcePixelBufferAttributes=_sourcePixelBufferAttributes;
- (struct __CVBuffer *)RBGBuffereCopyWithPixelBuffer:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)newRenderdPixelBufferForRequest:(id)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)renderContextChanged:(id)arg1;
- (id)init;
- (void)dealloc;

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

