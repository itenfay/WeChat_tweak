//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAWebViewPlugin_EmbedMap
{
    _Bool m_isDarkmodeEnabled;
}

- (_Bool)enableOverseaServerProtocol;
- (void)onMapIndoorChange:(id)arg1 building:(id)arg2 level:(id)arg3;
- (id)makeIndoorInfoByMapId:(unsigned int)arg1 building:(id)arg2 level:(id)arg3;
- (id)makeClusterInfo:(id)arg1;
- (void)onMapAuthFail:(id)arg1 withError:(id)arg2;
- (void)onMapAuthSuccess:(id)arg1;
- (void)onVisualLayerEvent:(id)arg1 inMap:(id)arg2 eventType:(id)arg3 eventInfoJson:(id)arg4;
- (void)onMapMarkerHideByCollision:(id)arg1 markerId:(long long)arg2;
- (void)onMapMarkerShowByCollision:(id)arg1 markerId:(long long)arg2;
- (void)onMapMarkerClusterCreate:(id)arg1 annotation:(id)arg2;
- (void)onMapOverlayClick:(id)arg1 overlay:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
- (void)onMapClusterClick:(id)arg1 annotation:(id)arg2;
- (void)onMapPoiClick:(id)arg1 poi:(id)arg2;
- (void)onMapLabelClick:(id)arg1 data:(id)arg2;
- (void)onMapCalloutClick:(id)arg1 data:(id)arg2;
- (void)onMapUserLocationTap:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)onMapTap:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)onRegionDidChange:(id)arg1 reason:(unsigned long long)arg2 byAnimate:(_Bool)arg3 byGesture:(_Bool)arg4;
- (void)onRegionWillChange:(id)arg1 byAnimate:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)onControlClick:(id)arg1 data:(id)arg2;
- (void)onMarkerClick:(id)arg1 data:(id)arg2;
- (void)sendEvent:(id)arg1 param:(id)arg2 sendWebview:(_Bool)arg3;
- (_Bool)removeMap:(unsigned int)arg1;
- (id)getMapView:(unsigned int)arg1;
- (void)innerInsertMapAfterAuth:(id)arg1 showLocation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertMap:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onWeAppEnterForeground:(id)arg1;
- (void)onWeAppEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

