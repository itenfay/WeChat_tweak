//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WCFinderLocationInfo : NSObject
{
    double _latitude;
    double _longitude;
    NSDate *_timeStamp;
}

+ (id)locationInfoWithLocation:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_timeStamp;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_latitude;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

