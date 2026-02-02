//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface QVisModelLayerPayload
{
    _Bool _autoScale;
    double _altitude;
    double _rotationX;
    double _rotationY;
    double _rotationZ;
    double _scale;
    long long _animationType;
    NSArray *_pedestal;
    NSString *_format;
    NSString *_name;
    NSString *_modelID;
    NSString *_url;
    NSString *_astcUrl;
    NSString *_ktx2Url;
    NSString *_target_name;
    double _exposure;
    struct CLLocationCoordinate2D _coordinate;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) double exposure; // @synthesize exposure=_exposure;
@property(copy, nonatomic) NSString *target_name; // @synthesize target_name=_target_name;
@property(copy, nonatomic) NSString *ktx2Url; // @synthesize ktx2Url=_ktx2Url;
@property(copy, nonatomic) NSString *astcUrl; // @synthesize astcUrl=_astcUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *modelID; // @synthesize modelID=_modelID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSArray *pedestal; // @synthesize pedestal=_pedestal;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double rotationZ; // @synthesize rotationZ=_rotationZ;
@property(nonatomic) double rotationY; // @synthesize rotationY=_rotationY;
@property(nonatomic) double rotationX; // @synthesize rotationX=_rotationX;
@property(nonatomic) _Bool autoScale; // @synthesize autoScale=_autoScale;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)getAppropriateModelURL;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

