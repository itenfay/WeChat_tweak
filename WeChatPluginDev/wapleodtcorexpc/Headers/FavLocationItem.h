//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface FavLocationItem
{
    _Bool _isFromPoiList;
    double _lng;
    double _lat;
    double _scale;
    NSString *_label;
    NSString *_poiname;
    NSString *_poiId;
    NSString *_buildingId;
    NSString *_floorName;
    NSDictionary *_dicLocationName;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dicLocationName; // @synthesize dicLocationName=_dicLocationName;
@property(retain, nonatomic) NSString *floorName; // @synthesize floorName=_floorName;
@property(retain, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
@property(nonatomic) _Bool isFromPoiList; // @synthesize isFromPoiList=_isFromPoiList;
@property(retain, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(retain, nonatomic) NSString *poiname; // @synthesize poiname=_poiname;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) double lng; // @synthesize lng=_lng;
- (id)identifier;

@end

