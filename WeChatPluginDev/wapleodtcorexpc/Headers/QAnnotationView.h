//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, QAnnotationContainerView, QMUAnnoViewAnimationMediator, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol QAnnotation;

@interface QAnnotationView : UIView
{
    int _internalZIndex;
    unsigned long long _internalCollisionType;
    struct CGSize _previousImageViewFrame;
    _Bool _selected;
    _Bool _canShowCallout;
    _Bool _draggable;
    _Bool _selectedBeforeStarting;
    _Bool _internalMarkerHidden;
    int _dragState;
    int _collidedViewCount;
    long long _collisionRelation;
    NSString *_reuseIdentifier;
    id <QAnnotation> _annotation;
    UIView *_customCalloutView;
    UIView *_leftCalloutAccessoryView;
    UIView *_rightCalloutAccessoryView;
    QAnnotationContainerView *_containerView;
    NSMutableArray *_collisionChildren;
    NSMutableArray *_collisionChildrenToAdd;
    UITapGestureRecognizer *_tapGestureGecognizer;
    UITapGestureRecognizer *_tapTwiceGestureGecognizer;
    UILongPressGestureRecognizer *_longPressGestureGecognizer;
    UIImageView *_innerMarkerView;
    UIView *_callout;
    UIView *_innerMainMarkerSource;
    struct CGPoint _centerOffset;
    struct CGPoint _calloutOffset;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *innerMainMarkerSource; // @synthesize innerMainMarkerSource=_innerMainMarkerSource;
@property(nonatomic) int collidedViewCount; // @synthesize collidedViewCount=_collidedViewCount;
@property(nonatomic) _Bool internalMarkerHidden; // @synthesize internalMarkerHidden=_internalMarkerHidden;
@property(nonatomic) _Bool selectedBeforeStarting; // @synthesize selectedBeforeStarting=_selectedBeforeStarting;
@property(retain, nonatomic) UIView *callout; // @synthesize callout=_callout;
@property(retain, nonatomic) UIImageView *innerMarkerView; // @synthesize innerMarkerView=_innerMarkerView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureGecognizer; // @synthesize longPressGestureGecognizer=_longPressGestureGecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapTwiceGestureGecognizer; // @synthesize tapTwiceGestureGecognizer=_tapTwiceGestureGecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureGecognizer; // @synthesize tapGestureGecognizer=_tapGestureGecognizer;
@property(retain, nonatomic) NSMutableArray *collisionChildrenToAdd; // @synthesize collisionChildrenToAdd=_collisionChildrenToAdd;
@property(retain, nonatomic) NSMutableArray *collisionChildren; // @synthesize collisionChildren=_collisionChildren;
@property(nonatomic) __weak QAnnotationContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) int dragState; // @synthesize dragState=_dragState;
@property(nonatomic, getter=isDraggable) _Bool draggable; // @synthesize draggable=_draggable;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView; // @synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView; // @synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView;
@property(retain, nonatomic) UIView *customCalloutView; // @synthesize customCalloutView=_customCalloutView;
@property(nonatomic) _Bool canShowCallout; // @synthesize canShowCallout=_canShowCallout;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset=_calloutOffset;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(retain, nonatomic) id <QAnnotation> annotation; // @synthesize annotation=_annotation;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void)dealloc;
- (void)updateTransformFromPresentlayer:(id)arg1;
- (void)updateTransform:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)initGestureRecognizers;
- (void)removeMainMakerKVO:(id)arg1;
- (void)setMainMakerKVO:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)removeFromSuperview;
- (void)setAnnoViewHideOnly:(_Bool)arg1;
- (void)longPressGesture:(id)arg1;
- (void)tapTwiceGesture:(id)arg1;
- (void)tapGesture:(id)arg1;
- (id)getDefaultCalloutView;
- (void)removeDefaultCalloutEngineMarker:(id)arg1;
- (void)createDefaultCalloutEngineMarker:(id)arg1;
- (void)makeCalloutView:(id)arg1 appear:(_Bool)arg2 animated:(_Bool)arg3;
- (void)unloadCalloutAnimated:(_Bool)arg1;
- (void)loadCalloutAnimated:(_Bool)arg1;
- (id)obtainCallout;
- (id)constructDefaultCalloutView;
- (void)calloutViewClicked:(id)arg1;
- (double)calloutView:(id)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
- (void)createEngineMarkerForSubCollisionView;
- (void)updateEngineMarkersPosition;
- (void)setDragState:(int)arg1 animated:(_Bool)arg2;
- (_Bool)supportDragOperation;
- (void)updateCoordinateWhenLocked;
- (struct CGPoint)annotationLockedPosition;
- (_Bool)isAnnotationLocked;
- (void)initEngineMarkerBySelf;
- (_Bool)shouldAddEngineMarker;
- (void)updateAnnoViewCollision;
- (void)calloutViewWillDisappear:(id)arg1;
- (void)calloutViewDidAppear:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long collisionRelation; // @synthesize collisionRelation=_collisionRelation;
@property(nonatomic) unsigned long long collisionType;
@property(nonatomic) int zIndex;
- (struct CGPoint)screenPoint;
- (void)updateCenter;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)prepareForReuse;
@property(readonly, nonatomic) UIImageView *innerImageView;
@property(retain, nonatomic) UIImage *image;
- (void)calloutAccessoryAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)hasIndoorInfo;
- (void)removeAllEngineMarkers;
- (void)notifyUpdateMarkers;
- (void)notifyContainerAdjustOrder;
- (void)removeObserverForAnnotation:(id)arg1;
- (void)addObserverForAnnotation:(id)arg1;
- (void)removeTargetForControl:(id)arg1;
- (void)addTargetForControl:(id)arg1;
- (_Bool)checkCollisionChildViewIsValid:(id)arg1;
- (void)setQAnnotationViewCollisionMainView:(id)arg1;
- (void)updateQAnnotationViewCollisionChild:(id)arg1;
- (_Bool)removeQAnnotationViewCollisionChild:(id)arg1;
- (void)addCollisionChild:(id)arg1;
- (_Bool)addQAnnotationViewCollisionChild:(id)arg1;
- (double)getMarkerAngleFromViewPresentLayer:(id)arg1;
- (double)getMarkerAngleFromView:(id)arg1;
- (_Bool)getAvoidMarkerStatus:(id)arg1;
- (_Bool)getAvoidPOIStatus:(id)arg1;
- (void)modifyMarkAngleFromLayerAnle:(id)arg1;
- (void)modifyMarkAngle:(id)arg1;
- (void)setMapMarker:(id)arg1 MainMarker:(id)arg2 BindSyncVisibility:(_Bool)arg3;
- (void)updateSubMarkersBindSyncVisibility:(_Bool)arg1;
- (void)updateMarkerLocation:(id)arg1 withMapPoint:(CDStruct_c3b9c2ee)arg2;
- (void)hideEngineMarker:(id)arg1 toHide:(_Bool)arg2;
- (_Bool)engineMarkerIsHidden:(id)arg1;
- (void)updateCollisionChildZIndex;
- (void)updateEngineMarkerCollusionStatus:(id)arg1;
- (void)updateEngineMarker:(id)arg1;
- (void)updateEngineMarkers;
- (void)removeEngineMarker:(id)arg1;
- (void)addEngineMarker:(id)arg1;
- (struct CGRect)getChildViewScreenRect:(id)arg1;
- (id)mapView;
- (void)removeEngineMarkerimage:(id)arg1;
- (id)getTransparentImage:(struct CGSize)arg1 withView:(id)arg2;
- (struct CGPoint)getNormalUIViewScreenAnchor:(id)arg1;
- (struct CGPoint)getAnnoViewScreenAnchor:(id)arg1;
- (id)handlerForMarker:(id)arg1;
- (id)generateMarkerPayloadFromChildCollisionView:(id)arg1;
- (id)generateMarkerPayloadFromAnnotationView:(id)arg1;
- (id)generateMarkerPayload:(id)arg1;
@property(retain, nonatomic) QMUAnnoViewAnimationMediator *mediator;
- (void)animationWithDuration:(double)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animationWithDuration:(double)arg1 coordinates:(struct CLLocationCoordinate2D *)arg2 coordinatesCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tb_executeAnimation:(id)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)tb_constructKeyframeAnimationWithCoordinates:(struct CLLocationCoordinate2D *)arg1 coordinateCount:(unsigned long long)arg2 duration:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

