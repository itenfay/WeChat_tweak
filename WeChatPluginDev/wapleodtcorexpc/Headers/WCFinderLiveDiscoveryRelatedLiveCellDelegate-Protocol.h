//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSURL, WCFinderContact, WCFinderFeedContentVM, WCFinderLiveDiscoveryRelatedLiveCell;

@protocol WCFinderLiveDiscoveryRelatedLiveCellDelegate <NSObject>

@optional
- (void)onNearbyRelatedLiveCellForwardAction:(WCFinderLiveDiscoveryRelatedLiveCell *)arg1;
- (void)clickRecommendUrl:(NSURL *)arg1;
- (void)onClickCoverContact:(WCFinderContact *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
@end

