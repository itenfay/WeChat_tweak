//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLGeocoder;

@interface OVCLocationManager : NSObject
{
    _Bool _isReversingGeocodeLocation;
    CLGeocoder *_geocoder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(nonatomic) _Bool isReversingGeocodeLocation; // @synthesize isReversingGeocodeLocation=_isReversingGeocodeLocation;
- (void)startLocatingWithLocations:(id)arg1 timeoutInSeconds:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

