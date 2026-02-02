//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJLocationFetchUtils : NSObject
{
}

+ (id)placeholderGeographicInfo;
+ (id)convertGeographicInfoFromLocationItem:(id)arg1;
+ (id)buildLocationItemWithDictionary:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
+ (id)buildFinderLocationWithLocationItem:(id)arg1;
+ (id)buildLocationItemWithPOIItem:(id)arg1;
+ (id)buildLocationItemWithCacheItem:(id)arg1;
+ (id)buildLocationItemWithRealtimeLocationCache;
+ (void)fetchUserLocationWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (void)fetchLocation:(struct CLLocationCoordinate2D)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)setHandler:(id)arg1;
+ (id)handler;

@end

