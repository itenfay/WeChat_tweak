//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSArray;

@interface POIStreamUpdateData : NSObject
{
    _Bool _containsNearby;
    _Bool _isReload;
    NSArray *_finderObjectPBDataArray;
    FlutterStandardTypedData *_nearbyInfoPBData;
    long long _prefetchCount;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFinderObjectPBDataArray:(id)arg1 nearbyInfoPBData:(id)arg2 containsNearby:(_Bool)arg3 isReload:(_Bool)arg4 prefetchCount:(long long)arg5;
- (void).cxx_destruct;
@property(nonatomic) long long prefetchCount; // @synthesize prefetchCount=_prefetchCount;
@property(nonatomic) _Bool isReload; // @synthesize isReload=_isReload;
@property(nonatomic) _Bool containsNearby; // @synthesize containsNearby=_containsNearby;
@property(retain, nonatomic) FlutterStandardTypedData *nearbyInfoPBData; // @synthesize nearbyInfoPBData=_nearbyInfoPBData;
@property(copy, nonatomic) NSArray *finderObjectPBDataArray; // @synthesize finderObjectPBDataArray=_finderObjectPBDataArray;
- (id)toList;

@end

