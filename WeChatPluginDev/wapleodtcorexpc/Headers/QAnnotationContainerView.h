//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, QMapContext, QMediator, TBOrderedSafeDictionary;
@protocol QAnnotationContainerViewDelegate;

@interface QAnnotationContainerView : UIView
{
    _Bool _hasTriggerAnnoViewWithEngineMarker;
    QMediator *_mediator;
    QMapContext *_mapContext;
    id <QAnnotationContainerViewDelegate> _delegate;
    TBOrderedSafeDictionary *_annotationStorage;
    NSMutableDictionary *_collisionViewStorage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasTriggerAnnoViewWithEngineMarker; // @synthesize hasTriggerAnnoViewWithEngineMarker=_hasTriggerAnnoViewWithEngineMarker;
@property(retain, nonatomic) NSMutableDictionary *collisionViewStorage; // @synthesize collisionViewStorage=_collisionViewStorage;
@property(retain, nonatomic) TBOrderedSafeDictionary *annotationStorage; // @synthesize annotationStorage=_annotationStorage;
@property(nonatomic) __weak id <QAnnotationContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupSelf;
- (void)createEngineMarkerForAnnotationViews;
- (id)calloutViewForAnnotation:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)bringAnnotationToFront:(id)arg1;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedAnnotations;
@property(readonly, nonatomic) NSArray *annotations;
- (void)notifyAnnotationViewTapped:(id)arg1;
- (void)notifyAnnotationView:(id)arg1 calloutAccessoryControlTapped:(id)arg2;
- (void)notifyAnnotationViewCalloutTapped:(id)arg1;
- (void)notifyAnnotationView:(id)arg1 didChangeDragState:(int)arg2 fromOldState:(int)arg3;
- (void)notifyAnnotationViewDidDeselect:(id)arg1;
- (void)notifyAnnotationViewDidSelect:(id)arg1;
- (id)notifyCustomCalloutForAnnotationView:(id)arg1;
- (void)searchAnnotationViewIndex:(id)arg1 startIndex:(int)arg2 endIndex:(int)arg3 annoView:(id)arg4;
- (void)adjustOrderOfAnnotationView:(id)arg1;
- (void)scrollMapToCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (struct CLLocationCoordinate2D)coordinateForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)callDelegateAnnotationView:(id)arg1 calloutAccessoryControlTapped:(id)arg2;
- (void)callDelegateAnnotationViewTapped:(id)arg1;
- (void)callDelegateAnnotationViewCalloutTapped:(id)arg1;
- (void)callDelegateAnnotationView:(id)arg1 didChangeDragState:(int)arg2 fromOldState:(int)arg3;
- (void)callDelegateAnnotationViewDidDeselect:(id)arg1;
- (void)callDelegateAnnotationViewDidSelect:(id)arg1;
- (id)callDelegateCustomCalloutForAnnotationView:(id)arg1;
- (void)callDelegateDidAddAnnotationViews:(id)arg1;
- (id)callDelegateViewForAnnotation:(id)arg1;
- (void)updateVisibilityForAnnotationView:(id)arg1;
- (void)updateAnnotationView:(id)arg1;
- (void)updateAllAnnotations;
- (void)mapContext:(id)arg1 markerOverlayShown:(id)arg2 markerOverlayAvoided:(id)arg3;
- (void)mapContextDidMapStatusChangedAfterDraw:(id)arg1;
- (void)dealWithSubMarker:(id)arg1 showLogicWithOutoutDict:(id)arg2;
- (void)aggregateSubMarkers:(id)arg1 toResultDict:(id)arg2;
- (void)dealWithMainMarker:(id)arg1 hideLogictWithHiddenIDs:(id)arg2 andOutputDict:(id)arg3;
- (void)executeCollisionRelationAloneShowLogic:(id)arg1 showDict:(id)arg2;
- (void)aggregateMainMarkers:(id)arg1 toResultDict:(id)arg2;
- (id)getViewsThatShouldShow:(id)arg1;
- (id)getViewsThatShouldHide:(id)arg1;
- (void)callCollisionViewDidShowDelegate:(id)arg1 showViews:(id)arg2;
- (void)callCollisionViewDidHideDelegate:(id)arg1 hideViews:(id)arg2;
- (void)notifyMapViewMarkersHide:(id)arg1;
- (void)notifyMapViewMarkersShow:(id)arg1;
- (id)getCollisionViewFromMarkerID:(int)arg1;
- (void)removeCollionViewFromContainer:(id)arg1;
- (void)addCollionViewToContainer:(id)arg1;
- (void)modifyMarker:(id)arg1 angle:(double)arg2;
- (void)setMapMarker:(id)arg1 MainMarker:(id)arg2 BindSyncVisibility:(_Bool)arg3;
- (void)updateMarkerLocation:(id)arg1 withLocation:(CDStruct_c3b9c2ee)arg2;
- (void)setEngineMarkerHidden:(id)arg1 toHide:(_Bool)arg2;
- (_Bool)engineMarkerIsHidden:(id)arg1;
- (void)removeEngineMarkerimage:(id)arg1;
- (void)updateZIndex:(int)arg1 withMarkerID:(int)arg2;
- (void)updateMarkerCollisionStatus:(id)arg1 avoidAnnotation:(_Bool)arg2 avoidOtherMarker:(_Bool)arg3;
- (void)updateEngineMarker:(id)arg1 withPayload:(id)arg2;
- (void)removeEngineMarker:(id)arg1;
- (int)addEngineMarker:(id)arg1;

@end

