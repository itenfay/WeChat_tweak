//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAddressAnnotation, NSArray, NSMutableDictionary, QMapView;

@interface AnnotationLogicController
{
    NSMutableDictionary *_annotationDic;
    QMapView *_mapView;
    MMAddressAnnotation *_addressAnnotation;
}

- (void).cxx_destruct;
- (CDStruct_b7cb895d)getConvexRegion:(_Bool)arg1;
- (void)onlyShowMe;
- (void)removeAllFriendAnnotationCalloutAnimation;
- (void)removeAllHeadAnnotationCalloutAnimation;
- (void)setAllHeadAnnotationShowCallout:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)removeAddressAnnotation;
- (id)getAddressAnnotation;
- (id)addAddressAnnotation:(id)arg1;
- (void)removeMyselfAnnotation;
- (id)getMyselfAnnotation;
- (id)addMyselfAnnotationWithHeading:(double)arg1;
- (id)getUserLocation;
- (void)removeAllFriendAnnoations;
- (void)removeFriendAnnotationWithUsername:(id)arg1;
- (id)getFriendAnnotationWithUsername:(id)arg1;
- (id)addFriendAnnotation:(id)arg1;
@property(readonly, nonatomic) NSArray *allAnnotations;
@property(readonly, nonatomic) NSArray *allUsernames;
- (id)initWithMapView:(id)arg1;

@end

