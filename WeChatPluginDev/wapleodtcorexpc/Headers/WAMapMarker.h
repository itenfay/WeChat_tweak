//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, QMUClusterAnnotation, UIImage, UIView, WAMapAnnotationView;

@interface WAMapMarker
{
    _Bool _valid;
    _Bool _calloutUseCoverView;
    _Bool _joinCluster;
    WAMapAnnotationView *_annotationView;
    QMUClusterAnnotation *_cluster;
    long long _markerId;
    UIImage *_image;
    double _rotate;
    double _alpha;
    double _zIndex;
    UIView *_calloutCoverView;
    UIView *_targetCalloutCoverView;
    NSDictionary *_callout;
    NSDictionary *_label;
    NSString *_userData;
    NSString *_ariaLabel;
    unsigned long long _collisionType;
    unsigned long long _collisionTypeCallout;
    unsigned long long _collisionTypeLabel;
    long long _collisionRelation;
    struct CGSize _size;
    struct CGPoint _anchor;
    struct CGPoint _calloutAnchor;
}

+ (void)copyLayerProperty:(id)arg1 toView:(id)arg2;
+ (void)collectBaseView:(id)arg1 inArr:(id)arg2;
+ (id)copyCoverView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long collisionRelation; // @synthesize collisionRelation=_collisionRelation;
@property(nonatomic) unsigned long long collisionTypeLabel; // @synthesize collisionTypeLabel=_collisionTypeLabel;
@property(nonatomic) unsigned long long collisionTypeCallout; // @synthesize collisionTypeCallout=_collisionTypeCallout;
@property(nonatomic) unsigned long long collisionType; // @synthesize collisionType=_collisionType;
@property(nonatomic) _Bool joinCluster; // @synthesize joinCluster=_joinCluster;
@property(retain, nonatomic) NSString *ariaLabel; // @synthesize ariaLabel=_ariaLabel;
@property(retain, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSDictionary *label; // @synthesize label=_label;
@property(retain, nonatomic) NSDictionary *callout; // @synthesize callout=_callout;
@property(retain, nonatomic) UIView *targetCalloutCoverView; // @synthesize targetCalloutCoverView=_targetCalloutCoverView;
@property(retain, nonatomic) UIView *calloutCoverView; // @synthesize calloutCoverView=_calloutCoverView;
@property(nonatomic) _Bool calloutUseCoverView; // @synthesize calloutUseCoverView=_calloutUseCoverView;
@property(nonatomic) struct CGPoint calloutAnchor; // @synthesize calloutAnchor=_calloutAnchor;
@property(nonatomic) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double rotate; // @synthesize rotate=_rotate;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long markerId; // @synthesize markerId=_markerId;
@property(nonatomic) __weak QMUClusterAnnotation *cluster; // @synthesize cluster=_cluster;
@property(nonatomic) __weak WAMapAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)clearCoverView;
- (void)tryToCopyCoverViewIfNeed;
- (id)createCalloutView;

@end

