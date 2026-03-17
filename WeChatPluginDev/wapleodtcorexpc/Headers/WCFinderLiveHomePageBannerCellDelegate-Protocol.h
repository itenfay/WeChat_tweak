//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderLiveFeedGenericCdnCellDelegate-Protocol.h"

@class NSURL, WCFinderContact, WCFinderLiveGenericFeedVM;

@protocol WCFinderLiveHomePageBannerCellDelegate <WCFinderLiveFeedGenericCdnCellDelegate>

@optional
- (void)clickRecommendUrl:(NSURL *)arg1;
- (void)onClickCoverContact:(WCFinderContact *)arg1 feedVM:(WCFinderLiveGenericFeedVM *)arg2;
@end

