//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBInfo : NSObject
{
}

+ (void)initialize;
+ (_Bool)isMediaATSON;
+ (_Bool)isATSON;
+ (void)initATSON;
+ (id)getDeviceIdSafety;
+ (id)getMacAddress;
+ (id)getMttVendorIdSafety;
+ (id)getLatestCachedUUID;
+ (id)getARandomUUID;
+ (long long)getWifiAddress;
+ (id)APPV;
+ (id)APPN;
+ (id)IDFV;
+ (id)IDFA;
+ (id)QUAForV23;

@end

