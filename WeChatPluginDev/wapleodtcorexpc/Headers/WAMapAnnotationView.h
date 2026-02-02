//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, PaddingLabel, UIButton, UIImageView, UIView, WAMapCalloutView, WAMapMarker;
@protocol WAMapAnnotationViewDelegate;

@interface WAMapAnnotationView
{
    _Bool _fixedCallout;
    _Bool _isCalloutViewShow;
    WAMapMarker *_marker;
    id <WAMapAnnotationViewDelegate> _delegate;
    UIButton *_tapButton;
    UIImageView *_markerImage;
    NSDictionary *_calloutParam;
    UIView *_calloutCoverView;
    id _calloutTarget;
    SEL _calloutAction;
    unsigned long long _calloutControlEvents;
    WAMapCalloutView *_calloutView;
    PaddingLabel *_paddingLabel;
    UIView *_pointView;
    struct CGAffineTransform _calloutTrans;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *pointView; // @synthesize pointView=_pointView;
@property(retain, nonatomic) PaddingLabel *paddingLabel; // @synthesize paddingLabel=_paddingLabel;
@property(nonatomic) struct CGAffineTransform calloutTrans; // @synthesize calloutTrans=_calloutTrans;
@property(nonatomic) _Bool isCalloutViewShow; // @synthesize isCalloutViewShow=_isCalloutViewShow;
@property(retain, nonatomic) WAMapCalloutView *calloutView; // @synthesize calloutView=_calloutView;
@property(nonatomic) unsigned long long calloutControlEvents; // @synthesize calloutControlEvents=_calloutControlEvents;
@property(nonatomic) SEL calloutAction; // @synthesize calloutAction=_calloutAction;
@property(nonatomic) __weak id calloutTarget; // @synthesize calloutTarget=_calloutTarget;
@property(retain, nonatomic) UIView *calloutCoverView; // @synthesize calloutCoverView=_calloutCoverView;
@property(retain, nonatomic) NSDictionary *calloutParam; // @synthesize calloutParam=_calloutParam;
@property(retain, nonatomic) UIImageView *markerImage; // @synthesize markerImage=_markerImage;
@property(retain, nonatomic) UIButton *tapButton; // @synthesize tapButton=_tapButton;
@property(nonatomic) __weak id <WAMapAnnotationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fixedCallout; // @synthesize fixedCallout=_fixedCallout;
@property(retain, nonatomic) WAMapMarker *marker; // @synthesize marker=_marker;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onMapLabelClick:(id)arg1;
- (void)onCalloutClicked;
- (void)onClicked;
- (void)initLabel;
- (void)updateCalloutView;
- (void)tryToGetCalloutViewIfNeed;
- (void)removeCalloutView;
- (void)addCalloutView;
- (void)addCalloutTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)initCallout;
- (void)updateCalloutLayout;
- (void)updateMarkerRotate;
- (void)updateMarkerLayout;
- (void)initMarkerImage;
- (void)setZIndex:(int)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)buildMarkerContent;
- (void)initPointView;
- (void)initWithMarker:(id)arg1;
- (id)initWithMarker:(id)arg1 reuseIdentifier:(id)arg2;

@end

