//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderPoiStreamNearbyInfo, NSArray;

@protocol WCFinderPoiStreamExt <NSObject>
- (void)onFinderPoiStreamAppendData:(NSArray *)arg1 nearbyFlag:(_Bool)arg2 nearbyInfo:(FinderPoiStreamNearbyInfo *)arg3;
- (void)onFinderPoiStreamReloadAllData:(NSArray *)arg1 nearbyFlag:(_Bool)arg2 nearbyInfo:(FinderPoiStreamNearbyInfo *)arg3;
@end

