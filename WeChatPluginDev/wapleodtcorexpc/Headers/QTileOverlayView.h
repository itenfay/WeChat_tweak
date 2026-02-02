//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QMapContext, QTileOverlay, QTileOverlayHandler, QTileOverlayManager;

@interface QTileOverlayView
{
    int _zIndex;
    QTileOverlay *_tileOverlay;
    QMapContext *_mapContext;
    QTileOverlayManager *_tileOverlayManager;
    QTileOverlayHandler *_handler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QTileOverlayHandler *handler; // @synthesize handler=_handler;
@property(nonatomic) __weak QTileOverlayManager *tileOverlayManager; // @synthesize tileOverlayManager=_tileOverlayManager;
@property(retain, nonatomic) QMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(retain, nonatomic) QTileOverlay *tileOverlay; // @synthesize tileOverlay=_tileOverlay;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
- (void)dealloc;
- (id)initWithTileOverlay:(id)arg1;
- (void)removeObserverForTileOverlay:(id)arg1;
- (void)addObserverForTileOverlay:(id)arg1;
- (id)variablesForInfluencingReusedMultiLevel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)keyForTilePath:(const CDStruct_7e23819f *)arg1;
- (id)fakeUrlForPath:(CDStruct_7e23819f)arg1;
- (void)reloadData;
- (void)endRender;
- (void)startRender;
- (id)generatePayload;
- (CDStruct_7e23819f)pathForInternal:(id)arg1;

@end

