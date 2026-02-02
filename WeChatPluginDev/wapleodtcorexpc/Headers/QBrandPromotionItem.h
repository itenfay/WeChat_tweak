//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QBrandPromotionItem : NSObject
{
    struct CLLocationCoordinate2D _coord;
    CDStruct_34734122 _mapPoint;
    int _min_level;
    int _max_level;
    int _marker_width;
    int _marker_height;
    int _marker_anchor_x;
    int _marker_anchor_y;
    int _rank;
    NSString *_project_id;
    double _latitude;
    double _longitude;
    long long _offline_time;
    long long _online_time;
    NSString *_day_pic_url;
    NSString *_night_pic_url;
}

- (void).cxx_destruct;
@property(nonatomic) int rank; // @synthesize rank=_rank;
@property(copy, nonatomic) NSString *night_pic_url; // @synthesize night_pic_url=_night_pic_url;
@property(copy, nonatomic) NSString *day_pic_url; // @synthesize day_pic_url=_day_pic_url;
@property(nonatomic) long long online_time; // @synthesize online_time=_online_time;
@property(nonatomic) long long offline_time; // @synthesize offline_time=_offline_time;
@property(nonatomic) int marker_anchor_y; // @synthesize marker_anchor_y=_marker_anchor_y;
@property(nonatomic) int marker_anchor_x; // @synthesize marker_anchor_x=_marker_anchor_x;
@property(nonatomic) int marker_height; // @synthesize marker_height=_marker_height;
@property(nonatomic) int marker_width; // @synthesize marker_width=_marker_width;
@property(nonatomic) int max_level; // @synthesize max_level=_max_level;
@property(nonatomic) int min_level; // @synthesize min_level=_min_level;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *project_id; // @synthesize project_id=_project_id;
- (CDStruct_c3b9c2ee)mapPoint;
- (struct CLLocationCoordinate2D)coord;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid:(int)arg1 limitSizeMagnification:(int)arg2 limitMinLevel:(int)arg3 LimitMaxLevel:(int)arg4 currentZoomLevel:(int)arg5;
- (id)initWithJSON:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

