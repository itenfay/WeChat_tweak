//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QGPLatLng;

@interface QGPGetPositionReturn
{
    QGPLatLng *_value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QGPLatLng *value; // @synthesize value=_value;
- (id)initWithLat:(double)arg1 lng:(double)arg2 altitude:(double)arg3;

@end

