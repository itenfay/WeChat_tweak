//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, NSString, QIndoorBuilding, QIndoorLevel, QMUClusterAnnotation, QPoiInfo, QVisualLayer, WAMapView;
@protocol QOverlay;

@protocol WAMapViewDelegate <NSObject>

@optional
- (void)onMapAuthFail:(WAMapView *)arg1 withError:(NSError *)arg2;
- (void)onMapAuthSuccess:(WAMapView *)arg1;
- (void)onVisualLayerEvent:(QVisualLayer *)arg1 inMap:(WAMapView *)arg2 eventType:(NSString *)arg3 eventInfoJson:(NSString *)arg4;
- (void)onMapIndoorChange:(WAMapView *)arg1 building:(QIndoorBuilding *)arg2 level:(QIndoorLevel *)arg3;
- (void)onMapMarkerHideByCollision:(WAMapView *)arg1 markerId:(long long)arg2;
- (void)onMapMarkerShowByCollision:(WAMapView *)arg1 markerId:(long long)arg2;
- (void)onMapMarkerClusterCreate:(WAMapView *)arg1 annotation:(QMUClusterAnnotation *)arg2;
- (void)onMapOverlayClick:(WAMapView *)arg1 overlay:(id <QOverlay>)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
- (void)onMapClusterClick:(WAMapView *)arg1 annotation:(QMUClusterAnnotation *)arg2;
- (void)onMapPoiClick:(WAMapView *)arg1 poi:(QPoiInfo *)arg2;
- (void)onMapLabelClick:(WAMapView *)arg1 data:(NSString *)arg2;
- (void)onMapCalloutClick:(WAMapView *)arg1 data:(NSString *)arg2;
- (void)onMapUserLocationTap:(WAMapView *)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)onMapTap:(WAMapView *)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)onRegionDidChange:(WAMapView *)arg1 reason:(unsigned long long)arg2 byAnimate:(_Bool)arg3 byGesture:(_Bool)arg4;
- (void)onRegionWillChange:(WAMapView *)arg1 byAnimate:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)onControlClick:(WAMapView *)arg1 data:(NSString *)arg2;
- (void)onMarkerClick:(WAMapView *)arg1 data:(NSString *)arg2;
@end

