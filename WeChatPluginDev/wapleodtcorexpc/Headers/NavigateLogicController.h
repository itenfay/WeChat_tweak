//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString, NavigateItem, QMapView, QPolyline;
@protocol NavigateLogicControllerDelegate;

@interface NavigateLogicController
{
    int _scene;
    QMapView *_mapView;
    NavigateItem *_navigateFrom;
    NavigateItem *_navigateTo;
    NSMutableArray *_navigateMaps;
    QPolyline *_lastDirections;
    unsigned long long _topMapType;
    id <NavigateLogicControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NavigateLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QPolyline *lastDirections; // @synthesize lastDirections=_lastDirections;
@property(retain, nonatomic) NSMutableArray *navigateMaps; // @synthesize navigateMaps=_navigateMaps;
@property(retain, nonatomic) NavigateItem *navigateTo; // @synthesize navigateTo=_navigateTo;
@property(retain, nonatomic) NavigateItem *navigateFrom; // @synthesize navigateFrom=_navigateFrom;
@property(retain, nonatomic) QMapView *mapView; // @synthesize mapView=_mapView;
- (void)OnRequestDirectionsError:(int)arg1;
- (void)OnGetDirections:(id)arg1 RequestItem:(id)arg2;
- (id)mapNameForMap:(id)arg1;
- (void)openWeApp:(id)arg1;
- (_Bool)checkIsSelectWeAppButtonTitle:(id)arg1 OnActionSheet:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)hideDirections;
- (void)showDirections;
- (void)showDirectionsFrom:(id)arg1 To:(id)arg2;
- (void)navigateFrom:(id)arg1 To:(id)arg2 UsingMap:(id)arg3;
- (void)showWeAppMenu:(id)arg1 WeApps:(id)arg2;
- (void)showNavigateMenu:(id)arg1 From:(id)arg2 To:(id)arg3 InView:(id)arg4;
- (void)showNavigateMenu:(id)arg1 From:(id)arg2 To:(id)arg3 WithWeApp:(id)arg4 WeAppDatas:(id)arg5 InView:(id)arg6;
- (void)showNavigateMenuWithTopMapType:(unsigned long long)arg1 To:(id)arg2 InView:(id)arg3;
- (id)getUrlScheme:(id)arg1 From:(id)arg2 To:(id)arg3 MapType:(int)arg4;
- (id)getInstallButtonTitle:(id)arg1;
- (id)getOpenButtonTitle:(id)arg1;
- (_Bool)isLocationInChina:(struct CLLocationCoordinate2D)arg1;
- (void)sortMapsByTopMapType;
@property(readonly, nonatomic) NSMutableArray *displayNavigateMaps;
@property(readonly, nonatomic) NSArray *displayNavigateMapNames;
- (id)initWithMapView:(id)arg1 Scene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

