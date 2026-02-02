//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, StoreWXaRedirectInfoItem;

@interface WCLocationInfo : NSObject
{
    _Bool _isMaterialPOI;
    int _poiClassifyType;
    int _poiClickableStatus;
    unsigned int _showFlag;
    unsigned int _showType;
    NSString *_city;
    NSString *_poiName;
    NSString *_poiAddress;
    double _poiScale;
    NSString *_poiInfoUrl;
    NSString *_poiClassifyId;
    NSData *_poiBuff;
    NSString *_buildingID;
    NSString *_floorName;
    StoreWXaRedirectInfoItem *_storeWXaRedirectInfoItem;
    NSString *_poiUrl;
    long long _sourceType;
    NSString *_country;
    NSString *_displayPoiAddressName;
    double _locationLongitude;
    double _locationLatitude;
}

+ (void)initialize;
+ (void)PBArrayAdd_floorName;
+ (void)PBArrayAdd_buildingID;
+ (void)PBArrayAdd_displayPoiAddressName;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_poiUrl;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_showFlag;
+ (void)PBArrayAdd_poiBuff;
+ (void)PBArrayAdd_poiClickableStatus;
+ (void)PBArrayAdd_poiClassifyType;
+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_poiInfoUrl;
+ (void)PBArrayAdd_poiScale;
+ (void)PBArrayAdd_poiAddress;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_locationLatitude;
+ (void)PBArrayAdd_locationLongitude;
+ (void)PBArrayAdd_city;
- (void).cxx_destruct;
@property(nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(retain, nonatomic) NSString *displayPoiAddressName; // @synthesize displayPoiAddressName=_displayPoiAddressName;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) _Bool isMaterialPOI; // @synthesize isMaterialPOI=_isMaterialPOI;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *poiUrl; // @synthesize poiUrl=_poiUrl;
@property(retain, nonatomic) StoreWXaRedirectInfoItem *storeWXaRedirectInfoItem; // @synthesize storeWXaRedirectInfoItem=_storeWXaRedirectInfoItem;
@property(nonatomic) unsigned int showType; // @synthesize showType=_showType;
@property(nonatomic) unsigned int showFlag; // @synthesize showFlag=_showFlag;
@property(copy, nonatomic) NSString *floorName; // @synthesize floorName=_floorName;
@property(copy, nonatomic) NSString *buildingID; // @synthesize buildingID=_buildingID;
@property(retain, nonatomic) NSData *poiBuff; // @synthesize poiBuff=_poiBuff;
@property(nonatomic) int poiClickableStatus; // @synthesize poiClickableStatus=_poiClickableStatus;
@property(nonatomic) int poiClassifyType; // @synthesize poiClassifyType=_poiClassifyType;
@property(retain, nonatomic) NSString *poiClassifyId; // @synthesize poiClassifyId=_poiClassifyId;
@property(retain, nonatomic) NSString *poiInfoUrl; // @synthesize poiInfoUrl=_poiInfoUrl;
@property(nonatomic) double poiScale; // @synthesize poiScale=_poiScale;
@property(retain, nonatomic) NSString *poiAddress; // @synthesize poiAddress=_poiAddress;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
- (void)setLocation:(struct CLLocationCoordinate2D)arg1;
- (struct CLLocationCoordinate2D)location;
- (_Bool)isPoiInfoClickable;
- (_Bool)isLocationValid;
- (_Bool)isValidForShow;
- (_Bool)isPoiInfo;
- (id)getDisplayPOIAddress;
- (id)getDisplayCity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

