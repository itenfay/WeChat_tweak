//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, QMUClusterManager, QUserLocationPresentation, UIImageView, WABaseView;
@protocol WAMapViewDelegate;

@interface WAMapView
{
    QMUClusterManager *_clusterMgr;
    _Bool _isEnableDarkmode;
    _Bool _enableDefaultClusterStyle;
    _Bool _zoomOnClusterClick;
    _Bool _isShowsUserLocation;
    _Bool _isBackground;
    unsigned int _mapId;
    id <WAMapViewDelegate> _mapDelegate;
    NSMutableArray *_mapControls;
    WABaseView *_firstBaseView;
    double _zoomLevelBeforeRegionChange;
    UIImageView *_snapshotImageView;
    unsigned long long _lightMapType;
    NSMutableArray *_customLayerArray;
    NSMutableArray *_clusterMarkers;
    QUserLocationPresentation *_userLocationCfg;
    NSMutableDictionary *_visualLayerDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *visualLayerDic; // @synthesize visualLayerDic=_visualLayerDic;
@property(retain, nonatomic) QUserLocationPresentation *userLocationCfg; // @synthesize userLocationCfg=_userLocationCfg;
@property(retain, nonatomic) NSMutableArray *clusterMarkers; // @synthesize clusterMarkers=_clusterMarkers;
@property(retain, nonatomic) NSMutableArray *customLayerArray; // @synthesize customLayerArray=_customLayerArray;
@property(nonatomic) unsigned long long lightMapType; // @synthesize lightMapType=_lightMapType;
@property(retain, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) _Bool isShowsUserLocation; // @synthesize isShowsUserLocation=_isShowsUserLocation;
@property(nonatomic) double zoomLevelBeforeRegionChange; // @synthesize zoomLevelBeforeRegionChange=_zoomLevelBeforeRegionChange;
@property(nonatomic) __weak WABaseView *firstBaseView; // @synthesize firstBaseView=_firstBaseView;
@property(retain, nonatomic) NSMutableArray *mapControls; // @synthesize mapControls=_mapControls;
@property(nonatomic) _Bool zoomOnClusterClick; // @synthesize zoomOnClusterClick=_zoomOnClusterClick;
@property(nonatomic) _Bool enableDefaultClusterStyle; // @synthesize enableDefaultClusterStyle=_enableDefaultClusterStyle;
@property(nonatomic) _Bool isEnableDarkmode; // @synthesize isEnableDarkmode=_isEnableDarkmode;
@property(nonatomic) __weak id <WAMapViewDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property(nonatomic) unsigned int mapId; // @synthesize mapId=_mapId;
- (void)removeVisualLayerById:(id)arg1;
- (id)getVisualLayerById:(id)arg1;
- (void)addVisualLayer:(id)arg1;
- (id)getGroundOverlay:(long long)arg1;
- (void)addClusterMarkers:(id)arg1;
- (id)viewForMarker:(id)arg1;
@property(readonly, nonatomic) QMUClusterManager *clusterMgr;
- (void)removeCustomLayerID:(id)arg1;
- (void)addCustomLayerID:(id)arg1;
- (void)removeMarker:(long long)arg1;
- (void)removeAllMarkers;
- (void)removeMarkersWithArray:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)snapshotVideoEnd;
- (void)snapshotVideoBegin;
- (void)enterBackground:(_Bool)arg1;
- (void)setShowsUserLocation:(_Bool)arg1;
- (void)updateShowsUserLocation;
- (void)addSubview:(id)arg1;
- (void)onMapLabelClick:(id)arg1;
- (void)onTapWAClusterView:(id)arg1;
- (void)onVisualLayerLog:(id)arg1 log:(id)arg2 logLevel:(int)arg3;
- (void)onVisualLayerEvent:(id)arg1 eventType:(id)arg2 eventInfoJson:(id)arg3;
- (void)visualLayerDidFinshLoading:(id)arg1 withError:(id)arg2;
- (void)mapViewLogger:(id)arg1 logMessage:(id)arg2;
- (void)onMapAnnotationViewTap:(id)arg1;
- (void)calloutClickAction:(id)arg1;
- (void)onControlClick:(id)arg1;
- (void)addMapImageControl:(id)arg1;
- (void)addMapButtonControl:(id)arg1;
- (void)setUserLocationIcon:(id)arg1;
- (void)clearControls;
- (id)getMapMarker:(long long)arg1;
- (id)getAllVisibleMarkers;
- (id)getAllMarkers;
- (void)mapView:(id)arg1 annotationView:(id)arg2 collidedViewsDidHide:(id)arg3;
- (void)mapView:(id)arg1 annotationView:(id)arg2 collidedViewsDidShow:(id)arg3;
- (void)mapViewAuthentication:(id)arg1 didFailWithError:(id)arg2;
- (void)mapViewAuthenticationDidComplete:(id)arg1;
- (void)mapView:(id)arg1 didChangeActiveLevel:(id)arg2;
- (void)mapView:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 didTapOverlay:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
- (void)mapView:(id)arg1 didTapMyLocation:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didTapPoi:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(_Bool)arg3;
- (void)skylineUpdateCallout:(id)arg1;
- (void)updateCluster:(unsigned long long)arg1 byMarker:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)dealloc;
- (void)internalInit;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

