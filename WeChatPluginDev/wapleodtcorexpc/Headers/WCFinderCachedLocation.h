//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLLocation;

@interface WCFinderCachedLocation : NSObject
{
    CLLocation *_location;
    double _cachedTimeStamp;
}

+ (id)cachedLocationWithLocation:(id)arg1 cachedTime:(double)arg2;
+ (id)cachedLocationWithLocation:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double cachedTimeStamp; // @synthesize cachedTimeStamp=_cachedTimeStamp;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void)updateCachedTimeToNow;

@end

