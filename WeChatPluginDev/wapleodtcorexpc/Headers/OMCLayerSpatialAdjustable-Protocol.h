//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol OMCLayerSpatialAdjustable <NSObject>
@property(readonly, nonatomic) _Bool isLayerAnchorPointRelative;
@property(readonly, nonatomic) struct CGPoint layerAnchorPoint;
@property(nonatomic) float layerRotation;
@property(nonatomic) struct CGPoint layerScale;
@property(nonatomic) struct CGPoint layerNormalizedPosition;
@property(nonatomic) struct CGPoint layerPosition;
@property(readonly, nonatomic) _Bool isLayerSpatialAdjustable;
- (void)setAbsoluteLayerAnchorPoint:(struct CGPoint)arg1;
- (void)setRelativeLayerAnchorPoint:(struct CGPoint)arg1;

@optional
- (void)setLayerScale:(struct CGPoint)arg1 shouldUpdateContentGenerationScaleFactor:(_Bool)arg2;
@end

