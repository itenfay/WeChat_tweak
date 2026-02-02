//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WAMapAnnotationView;
@protocol WAClusterViewDelegate;

@interface WAClusterView
{
    id <WAClusterViewDelegate> _delegate;
    UIButton *_tapButton;
    WAMapAnnotationView *_markerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAMapAnnotationView *markerView; // @synthesize markerView=_markerView;
@property(retain, nonatomic) UIButton *tapButton; // @synthesize tapButton=_tapButton;
@property(nonatomic) __weak id <WAClusterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAnnotationZIndexChangeTo:(int)arg1;
- (void)onMapLabelClick:(id)arg1;
- (void)onMapAnnotationViewTap:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)calloutClickAction:(id)arg1;
- (void)onClicked;
- (void)setClusterMarker:(id)arg1;
- (void)setClusterCount:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

