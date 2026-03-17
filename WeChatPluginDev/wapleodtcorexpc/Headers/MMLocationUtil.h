//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLocationUtil : NSObject
{
}

+ (id)poiInfoFromCardInfo:(id)arg1;
+ (id)poiInfoFromWcLocationInfo:(id)arg1;
+ (id)poiInfoFromFavLocationItem:(id)arg1;
+ (id)favLocationItemFromPoiInfo:(id)arg1;
+ (id)poiInfoFromMsgWrap:(id)arg1;
+ (id)locationMsgWrapFromPoiInfo:(id)arg1;
+ (id)locationMsgWrapFromMsgWrap:(id)arg1;
+ (void)clearLBSCache;
+ (void)clearLBSCacheIfNeeded;

@end

