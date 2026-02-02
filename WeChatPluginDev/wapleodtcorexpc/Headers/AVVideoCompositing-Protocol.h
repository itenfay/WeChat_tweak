//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAsynchronousVideoCompositionRequest, AVVideoCompositionRenderContext, AVVideoCompositionRenderHint, NSDictionary;

@protocol AVVideoCompositing <NSObject>
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(AVAsynchronousVideoCompositionRequest *)arg1;
- (void)renderContextChanged:(AVVideoCompositionRenderContext *)arg1;

@optional
@property(readonly, nonatomic) _Bool canConformColorOfSourceFrames;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool supportsHDRSourceFrames;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool supportsWideColorSourceFrames;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)prerollForRenderingUsingHint:(AVVideoCompositionRenderHint *)arg1;
- (void)anticipateRenderingUsingHint:(AVVideoCompositionRenderHint *)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
@end

