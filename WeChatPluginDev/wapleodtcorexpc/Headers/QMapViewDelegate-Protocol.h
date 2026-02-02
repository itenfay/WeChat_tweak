//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, QAnnotationView, QMapView, QOverlayView, QPoiInfo, QUserLocation, UIControl, UIView;
@protocol QAnnotation, QOverlay;

@protocol QMapViewDelegate <NSObject>

@optional
- (void)mapViewLogger:(QMapView *)arg1 logMessage:(NSString *)arg2;
- (void)locationManagerDidChangeAuthorization:(QMapView *)arg1;
- (void)mapView:(QMapView *)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(QMapView *)arg1 didFailToLocateUserWithError:(NSError *)arg2;
- (void)mapView:(QMapView *)arg1 didUpdateUserLocation:(QUserLocation *)arg2 fromHeading:(_Bool)arg3;
- (void)mapViewDidStopLocatingUser:(QMapView *)arg1;
- (void)mapViewWillStartLocatingUser:(QMapView *)arg1;
- (void)mapView:(QMapView *)arg1 didAddOverlayViews:(NSArray *)arg2;
- (QOverlayView *)mapView:(QMapView *)arg1 viewForOverlay:(id <QOverlay>)arg2;
- (void)mapView:(QMapView *)arg1 annotationViewCalloutTapped:(QAnnotationView *)arg2;
- (void)mapView:(QMapView *)arg1 annotationView:(QAnnotationView *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (void)mapView:(QMapView *)arg1 annotationView:(QAnnotationView *)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)mapView:(QMapView *)arg1 annotationView:(QAnnotationView *)arg2 collidedViewsDidHide:(NSArray *)arg3;
- (void)mapView:(QMapView *)arg1 annotationView:(QAnnotationView *)arg2 collidedViewsDidShow:(NSArray *)arg3;
- (void)mapView:(QMapView *)arg1 didDeselectAnnotationView:(QAnnotationView *)arg2;
- (void)mapView:(QMapView *)arg1 didAnnotationViewTapped:(QAnnotationView *)arg2;
- (void)mapView:(QMapView *)arg1 didSelectAnnotationView:(QAnnotationView *)arg2;
- (void)mapView:(QMapView *)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (UIView *)mapView:(QMapView *)arg1 customCalloutForAnnotationView:(QAnnotationView *)arg2;
- (QAnnotationView *)mapView:(QMapView *)arg1 viewForAnnotation:(id <QAnnotation>)arg2;
- (void)mapView:(QMapView *)arg1 didTapMyLocation:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(QMapView *)arg1 didTapOverlay:(id <QOverlay>)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
- (void)mapView:(QMapView *)arg1 didTapOverlay:(id <QOverlay>)arg2;
- (void)mapView:(QMapView *)arg1 didTapPoi:(QPoiInfo *)arg2;
- (void)mapView:(QMapView *)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapViewDrawFrame:(QMapView *)arg1;
- (void)mapView:(QMapView *)arg1 gestureDidEnd:(unsigned long long)arg2;
- (void)mapView:(QMapView *)arg1 gestureDidTrigger:(unsigned long long)arg2;
- (void)mapView:(QMapView *)arg1 scaleViewChanged:(double)arg2;
- (void)mapView:(QMapView *)arg1 didZoomAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(QMapView *)arg1 willZoomAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(QMapView *)arg1 didMoveAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(QMapView *)arg1 willMoveAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(QMapView *)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapViewRegionChange:(QMapView *)arg1;
- (void)mapView:(QMapView *)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapViewDidFailLoadingMap:(QMapView *)arg1 withError:(NSError *)arg2;
- (void)mapViewFirstRenderDidComplete:(QMapView *)arg1;
- (void)mapViewInitComplete:(QMapView *)arg1;
- (void)mapViewAuthentication:(QMapView *)arg1 didFailWithError:(NSError *)arg2;
- (void)mapViewAuthenticationDidComplete:(QMapView *)arg1;
@end

