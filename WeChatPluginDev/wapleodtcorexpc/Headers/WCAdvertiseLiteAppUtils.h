//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdvertiseLiteAppUtils : NSObject
{
}

+ (id)getLiteAppPackageVersion:(id)arg1;
+ (void)reportIdKey:(id)arg1 reportStep:(unsigned int)arg2;
+ (_Bool)checkAdLiteAppABTestOn:(id)arg1;
+ (void)asyncCreateLiteAppViewController:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (id)createLiteAppViewController:(id)arg1 page:(id)arg2 query:(id)arg3;
+ (_Bool)jumpLiteApp:(id)arg1 page:(id)arg2 query:(id)arg3;
+ (long long)fetchTimelineAdLiteAppPkgUpdateIntervalNoPkg;
+ (long long)fetchTimelineAdLiteAppPkgUpdateIntervalNormal;
+ (void)checkAdLiteAppPackageUpdate:(id)arg1 forceUpdate:(_Bool)arg2;
+ (void)checkAdLiteAppPackageUpdate:(id)arg1;
+ (_Bool)isLiteAppValid:(id)arg1;

@end

