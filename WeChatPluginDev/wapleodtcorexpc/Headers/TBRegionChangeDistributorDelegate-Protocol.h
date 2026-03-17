//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TBRegionChangeDistributor;

@protocol TBRegionChangeDistributorDelegate <NSObject>

@optional
- (void)distributor:(TBRegionChangeDistributor *)arg1 didZoomAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)distributor:(TBRegionChangeDistributor *)arg1 willZoomAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)distributor:(TBRegionChangeDistributor *)arg1 didMoveAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)distributor:(TBRegionChangeDistributor *)arg1 willMoveAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)distributor:(TBRegionChangeDistributor *)arg1 regionDidChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)distributor:(TBRegionChangeDistributor *)arg1 regionWillChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
@end

