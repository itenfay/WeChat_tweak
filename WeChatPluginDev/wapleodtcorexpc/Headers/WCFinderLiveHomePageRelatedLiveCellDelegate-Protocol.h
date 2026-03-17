//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSURL, WCFinderContact, WCFinderLiveGenericFeedVM, WCFinderLiveHomePageRelatedLiveCell;

@protocol WCFinderLiveHomePageRelatedLiveCellDelegate <NSObject>

@optional
- (void)onRelatedLiveCellForwardAction:(WCFinderLiveHomePageRelatedLiveCell *)arg1;
- (void)clickRecommendUrl:(NSURL *)arg1;
- (void)onClickCoverContact:(WCFinderContact *)arg1 feedVM:(WCFinderLiveGenericFeedVM *)arg2;
@end

