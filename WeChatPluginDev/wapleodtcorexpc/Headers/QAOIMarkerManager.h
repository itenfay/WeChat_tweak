//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSCache, NSMutableDictionary, QAOILayerMarkerEngine, QMapContext, QMediator, QOverlayContainer, QUniversalMapCounter;

@interface QAOIMarkerManager : NSObject
{
    QMapContext *_context;
    QOverlayContainer *_overlayContainer;
    QMediator *_mediator;
    QUniversalMapCounter *_universalCounter;
    QAOILayerMarkerEngine *_dataEngine;
    NSMutableDictionary *_layerHolder;
    NSMutableDictionary *_markerHolder;
    NSMutableDictionary *_textMarkerHolder;
    NSCache *_poiImagePathCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *poiImagePathCache; // @synthesize poiImagePathCache=_poiImagePathCache;
@property(retain, nonatomic) NSMutableDictionary *textMarkerHolder; // @synthesize textMarkerHolder=_textMarkerHolder;
@property(retain, nonatomic) NSMutableDictionary *markerHolder; // @synthesize markerHolder=_markerHolder;
@property(retain, nonatomic) NSMutableDictionary *layerHolder; // @synthesize layerHolder=_layerHolder;
@property(retain, nonatomic) QAOILayerMarkerEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(nonatomic) __weak QUniversalMapCounter *universalCounter; // @synthesize universalCounter=_universalCounter;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
@property(nonatomic) __weak QOverlayContainer *overlayContainer; // @synthesize overlayContainer=_overlayContainer;
@property(nonatomic) __weak QMapContext *context; // @synthesize context=_context;
- (void)setPOITextImageInstruction:(id)arg1;
- (int)getMapStyleType;
- (void)calculateUltimateZoomLevel:(id)arg1;
- (id)getImageDownloadURL:(id)arg1;
- (id)getAOILayerMarkerIconPathWithName:(id)arg1;
- (id)generatePayload:(id)arg1;
- (id)getStyleDictionary:(id)arg1 withStyle:(int)arg2;
- (void)showSubPois:(id)arg1 toShow:(_Bool)arg2;
- (void)modifyAOILayerStatus:(id)arg1 hidden:(_Bool)arg2;
- (id)getPOIMarkerInfoByID:(int)arg1;
- (void)removeAOILayer:(id)arg1;
- (void)addAOILayer:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeAOILayerMarker:(id)arg1;
- (void)createAOILayerMarker:(id)arg1 withLayerID:(id)arg2;
- (void)addAOILayerPolygonView:(id)arg1 withProperty:(id)arg2;
- (id)createAOILayerSurface:(id)arg1;
- (void)loadPOIIconImagePath:(id)arg1 withLayerID:(id)arg2;
- (id)creatPOIMarkersArray:(id)arg1 withLayer:(id)arg2;
- (_Bool)loadAOILayerWithInfoDict:(id)arg1 withLayer:(id)arg2;
- (void)requestAOILayerData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

