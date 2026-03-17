//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderLiveGenericFeedVM, WCFinderLiveHomePageHistoryCell, WCFinderLiveHomePageHistorySectionView;

@protocol WCFinderLiveHomePageHistorySectionViewDelegate <NSObject>

@optional
- (void)onHistorySectionView:(WCFinderLiveHomePageHistorySectionView *)arg1 deleteTid:(NSString *)arg2;
- (void)onHistorySectionViewFetchMoreLiveList:(WCFinderLiveHomePageHistorySectionView *)arg1;
- (void)onHistorySectionView:(WCFinderLiveHomePageHistorySectionView *)arg1 selectElementVM:(WCFinderLiveGenericFeedVM *)arg2 cell:(WCFinderLiveHomePageHistoryCell *)arg3;
@end

