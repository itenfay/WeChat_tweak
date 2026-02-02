//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLocatingCoordinateLogic, MMPOIAnnotation, NSArray, NSMutableArray, NSString, POIItem, QIndoorInfo, QPoiInfo;
@protocol MMPickLocationDataActionDelegate;

@interface PickLocationManager
{
    _Bool _disablePoiDirectionDesc;
    unsigned int _scene;
    id <MMPickLocationDataActionDelegate> _actionDelegate;
    NSString *_roughAddress;
    NSString *_address;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSString *_subAddr;
    NSString *_poiId;
    double _distanceToLandmark;
    QIndoorInfo *_indoorInfo;
    QPoiInfo *_selectPoiInfo;
    unsigned long long _selectedPoiIndex;
    long long _selectedSearchIndex;
    MMPOIAnnotation *_lastSelectedSearchAnnotation;
    MMPOIAnnotation *_selectedSearchAnnotation;
    POIItem *_userLocationItem;
    MMPOIAnnotation *_myPoiAnnotation;
    NSMutableArray *_m_poiAnnotationList;
    NSMutableArray *_m_searchAnnotationList;
    NSMutableArray *_m_displayAnnotationList;
    POIItem *_myPoiItem;
    MMLocatingCoordinateLogic *_locatingLogic;
    struct CLLocationCoordinate2D _coordinate;
}

+ (double)adjustDegreeForSearchAnnoations:(id)arg1;
+ (double)getMaxZoomLevelForEnlargeReclosingDisplayRect:(CDStruct_02837cd9)arg1 RestEdgePaddingDegree:(double)arg2 Center:(struct CLLocationCoordinate2D *)arg3 InMapView:(id)arg4;
+ (double)zoomLevelForDisplayAnnotations:(id)arg1 Center:(struct CLLocationCoordinate2D *)arg2 LimitMaxZoomLevel:(_Bool *)arg3 InMapView:(id)arg4;
+ (_Bool)isCoordinate1:(struct CLLocationCoordinate2D)arg1 EqualToCoordinate2:(struct CLLocationCoordinate2D)arg2;
+ (double)getMapPointPerCGPointForAnnotationsWhenConcide:(id)arg1 underZoomLevel:(double)arg2 IgnoreSamePOIDistance:(double)arg3;
+ (double)maxDistanceBetweenAnnotations:(id)arg1;
+ (double)getMapPointPerCGPointForAnnotation:(id)arg1 AndAnnotations:(id)arg2 UnderZoomLevel:(double)arg3 IgnoreSamePOIDistance:(double)arg4;
+ (_Bool)isDisplayDisBetween:(id)arg1 AndAnnotations:(id)arg2 inMapView:(id)arg3 LimitIn:(double)arg4 IgnoreSamePOIDistance:(double)arg5;
+ (id)filterAnnotations:(id)arg1 NearAnnotation:(id)arg2;
+ (struct CLLocationCoordinate2D)centerForAnnotations:(id)arg1;
+ (double)getDistanceBetween:(struct CLLocationCoordinate2D)arg1 AndTarget:(struct CLLocationCoordinate2D)arg2;
+ (id)createAnnotationForPOIItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool disablePoiDirectionDesc; // @synthesize disablePoiDirectionDesc=_disablePoiDirectionDesc;
@property(retain, nonatomic) MMLocatingCoordinateLogic *locatingLogic; // @synthesize locatingLogic=_locatingLogic;
@property(retain, nonatomic) POIItem *myPoiItem; // @synthesize myPoiItem=_myPoiItem;
@property(retain, nonatomic) NSMutableArray *m_displayAnnotationList; // @synthesize m_displayAnnotationList=_m_displayAnnotationList;
@property(retain, nonatomic) NSMutableArray *m_searchAnnotationList; // @synthesize m_searchAnnotationList=_m_searchAnnotationList;
@property(retain, nonatomic) NSMutableArray *m_poiAnnotationList; // @synthesize m_poiAnnotationList=_m_poiAnnotationList;
@property(retain, nonatomic) MMPOIAnnotation *myPoiAnnotation; // @synthesize myPoiAnnotation=_myPoiAnnotation;
@property(retain, nonatomic) POIItem *userLocationItem; // @synthesize userLocationItem=_userLocationItem;
@property(retain, nonatomic) MMPOIAnnotation *selectedSearchAnnotation; // @synthesize selectedSearchAnnotation=_selectedSearchAnnotation;
@property(retain, nonatomic) MMPOIAnnotation *lastSelectedSearchAnnotation; // @synthesize lastSelectedSearchAnnotation=_lastSelectedSearchAnnotation;
@property(nonatomic) long long selectedSearchIndex; // @synthesize selectedSearchIndex=_selectedSearchIndex;
@property(nonatomic) unsigned long long selectedPoiIndex; // @synthesize selectedPoiIndex=_selectedPoiIndex;
@property(retain, nonatomic) QPoiInfo *selectPoiInfo; // @synthesize selectPoiInfo=_selectPoiInfo;
@property(retain, nonatomic) QIndoorInfo *indoorInfo; // @synthesize indoorInfo=_indoorInfo;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) double distanceToLandmark; // @synthesize distanceToLandmark=_distanceToLandmark;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(copy, nonatomic) NSString *subAddr; // @synthesize subAddr=_subAddr;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *roughAddress; // @synthesize roughAddress=_roughAddress;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <MMPickLocationDataActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (_Bool)shouldUseAddressWithDirection;
- (void)requestUserAddress:(struct CLLocationCoordinate2D)arg1 indoorInfo:(id)arg2 lastSelectedPoiInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)createCurrUserLocationAnnotation;
- (_Bool)isLocationNearToUserLocationItem:(struct CLLocationCoordinate2D)arg1;
- (_Bool)isUserLocationComplete;
- (void)updateUserLocation:(id)arg1 Pronvince:(id)arg2 City:(id)arg3;
- (void)addNotCheckInPOIItemWithLatitude:(double)arg1 Longitude:(double)arg2;
- (void)addNearbyPOIAnnotation:(id)arg1;
- (void)addUserPOIItemWithLatitude:(double)arg1 Longitude:(double)arg2;
- (id)getSelectedPOIAnnotation;
- (id)getPOIAnnotationAtIndex:(unsigned long long)arg1;
- (_Bool)isCityEqualToUserLocation:(id)arg1;
- (unsigned int)getMyPOIItemIndex;
- (id)getSelectedPOIItem;
- (id)getMyPOIItem;
- (void)updateMyPOIItem;
- (_Bool)isMyPOIItem:(id)arg1;
- (void)resetSearchResultItems;
- (void)resetNearbyPOIItems;
- (_Bool)hasContainNearbyPOIItem:(id)arg1;
- (void)addNearbyPOIItem:(id)arg1 searchId:(id)arg2;
- (id)nearbyPOIItemAt:(unsigned long long)arg1;
- (id)getSelectedSearchPOIItem;
- (unsigned long long)indexForSearchAnnotation:(id)arg1;
- (id)searchAnnotationAtIndex:(unsigned long long)arg1;
- (id)poiAnnotationSearchIDAtIndex:(unsigned long long)arg1;
- (id)searchResultSearchIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfDisplayAnnotation:(id)arg1;
@property(readonly, nonatomic) NSArray *displayAnnotationList;
- (unsigned long long)searchAnnotationCount;
@property(readonly, nonatomic) NSArray *searchAnnotationList;
@property(readonly, nonatomic) NSArray *poiAnnotationList;
- (id)searchPOIItemAt:(unsigned long long)arg1;
- (unsigned long long)searchPOIResultCount;
@property(readonly, nonatomic) NSArray *searchPOIResultList;
- (void)removeDisplayAnnotations;
- (void)addDisplayAnnotations:(id)arg1;
- (void)removeSearchAnnotations;
- (void)addSearchAnnotations:(id)arg1;
- (id)init;

@end

