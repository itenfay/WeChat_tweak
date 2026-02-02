//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CALayer, NSMapTable, NSOrderedSet;
@protocol MJReusableTileLayersManager, MJTileStripViewDelegate, OMCThumbnailProvider;

@interface MJTileStripView : UIView
{
    _Bool _doneFirstLayout;
    NSOrderedSet *_activeTileAttributesSet;
    id <MJReusableTileLayersManager> _reusableTileManager;
    id <MJTileStripViewDelegate> _delegate;
    id <OMCThumbnailProvider> _thumbnailProvider;
    CALayer *_contentLayer;
    NSMapTable *_tileLayersByAttrs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *tileLayersByAttrs; // @synthesize tileLayersByAttrs=_tileLayersByAttrs;
@property(readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(retain, nonatomic) id <OMCThumbnailProvider> thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
@property(nonatomic) __weak id <MJTileStripViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MJReusableTileLayersManager> reusableTileManager; // @synthesize reusableTileManager=_reusableTileManager;
@property(readonly, nonatomic) NSOrderedSet *activeTileAttributesSet; // @synthesize activeTileAttributesSet=_activeTileAttributesSet;
- (void)flushTileLayerThumbnail:(id)arg1;
- (void)addTileLayer:(id)arg1 withAttributes:(id)arg2;
- (id)internalDequeueTileLayerWithAttributes:(id)arg1;
- (void)recycleTileLayersWithActiveTileAttributesSet:(id)arg1 animationDuration:(double)arg2;
- (void)recycleTilesWithShiftingAttributes:(vector_e62d36fb)arg1 appendingTileAttributes:(vector_1d27761d)arg2;
- (void)recycleTileLayersWithActiveTileAttributesSet:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)recycleTilesWithAttributesSet:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)recycleTilesWithAttributesSet:(id)arg1;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithThumbnailProvider:(id)arg1 reusableTileManager:(id)arg2;

@end

