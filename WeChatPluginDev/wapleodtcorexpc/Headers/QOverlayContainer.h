//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QMapContext, QMediator, QTextManager, TBOrderedSafeDictionary;

@interface QOverlayContainer : NSObject
{
    QMediator *_mediator;
    QMapContext *_mapContext;
    QTextManager *_textManager;
    TBOrderedSafeDictionary *_viewContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TBOrderedSafeDictionary *viewContainer; // @synthesize viewContainer=_viewContainer;
@property(retain, nonatomic) QTextManager *textManager; // @synthesize textManager=_textManager;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
- (void)setNeedsDisplay;
- (id)createPolylineViewFromArcView:(id)arg1;
- (id)circleImageForPolygonStroke:(id)arg1;
- (void)setUpPolygonStrokelineProperty:(id)arg1 polygonView:(id)arg2;
- (id)generatePolyline:(id)arg1;
- (id)getTexturePolylineViewForPolygon:(id)arg1;
- (id)getPolylineViewForPolygon:(id)arg1;
- (id)strokePayloadForPolygonView:(id)arg1;
- (id)handlerForCircleView:(id)arg1;
- (id)handlerForPolygonView:(id)arg1;
- (id)handlerForPolylineView:(id)arg1;
- (id)payloadForCircle:(id)arg1;
- (id)payloadForPolygon:(id)arg1;
- (id)payloadForPolyline:(id)arg1;
- (id)checkClickInfoAtMapPoint:(CDStruct_c3b9c2ee)arg1;
- (void)updateCircleView:(id)arg1;
- (void)updatePolygonViewFillStyle:(id)arg1;
- (void)updatePolygonStrokePoints:(id)arg1;
- (void)updatePolygonViewStrokeStyle:(id)arg1;
- (void)updateArcViewRGBAColorStyle:(id)arg1;
- (void)updatePolylineCollideLabel:(id)arg1;
- (void)updatePolylineArrowSpacing:(id)arg1;
- (void)updatePolylineGradientStyle:(id)arg1;
- (void)updatePolylineView:(id)arg1 turnArrowColor:(id)arg2 borderColor:(id)arg3;
- (void)updatePolylineView:(id)arg1 turnArrowIndex:(int)arg2;
- (void)updatePolylineView:(id)arg1 changeStyleFromStartToCurrentPoint:(struct CLLocationCoordinate2D)arg2 searchFrom:(int)arg3 toColor:(_Bool)arg4;
- (void)updatePolylineViewSegColor:(id)arg1;
- (void)updatePolylineViewRGBAColorStyle:(id)arg1;
- (void)updatePolylineViewSegStyle:(id)arg1;
- (void)updatePolyLineViewPoints:(id)arg1;
- (void)updateCollideLabel:(id)arg1;
- (void)updateAlpha:(id)arg1;
- (void)updateDisplayLevel:(id)arg1;
- (id)overlays;
- (id)viewForOverlay:(id)arg1;
- (void)refreshOverlayView:(id)arg1;
- (void)removeOverlayView:(id)arg1;
- (void)setOverlayScaleRange:(id)arg1 minScale:(int)arg2 maxScale:(int)arg3;
- (void)setHiddenForOverlayView:(id)arg1 hidden:(_Bool)arg2;
- (void)addArcView:(id)arg1;
- (void)addCircleView:(id)arg1;
- (void)addPolygonView:(id)arg1;
- (void)addPolylineView:(id)arg1;
- (void)addOverlayView:(id)arg1;
- (void)updateOverlayIfIndoor:(id)arg1;
- (void)updateAllOverlays;
- (void)updateOverlayZIndex:(int)arg1 overlayView:(id)arg2;
- (id)searchClickedOverlay:(int)arg1;
- (void)update:(double)arg1;
- (void)setupTextSystem;
- (id)init;

@end

