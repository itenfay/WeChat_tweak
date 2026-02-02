//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface QTCAutoCodingCLLocationCoordinate2DWrapper
{
    double _latitude;
    double _longitude;
}

+ (id)qtc_supportedObjcType;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (id)qtc_decode;
- (id)qtc_encodeWithValue:(id)arg1;

@end

