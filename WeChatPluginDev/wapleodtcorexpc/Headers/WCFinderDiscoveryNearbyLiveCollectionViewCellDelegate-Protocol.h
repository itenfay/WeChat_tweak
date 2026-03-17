//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSURL, WCFinderContact, WCFinderDiscoveryNearbyLiveCollectionViewCell, WCFinderFeedContentVM;

@protocol WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate <NSObject>
- (void)onNearbyLiveCellForwardAction:(WCFinderDiscoveryNearbyLiveCollectionViewCell *)arg1;
- (void)onPlayStateChanged:(WCFinderDiscoveryNearbyLiveCollectionViewCell *)arg1 state:(unsigned long long)arg2;
- (void)clickRecommendUrl:(NSURL *)arg1;
- (void)onClickCoverContact:(WCFinderContact *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
@end

