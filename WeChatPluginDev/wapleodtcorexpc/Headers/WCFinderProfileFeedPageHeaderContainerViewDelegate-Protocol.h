//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderCollectionInfo, NSArray, UIView, WCFinderProfileFeedPageHeaderContainerView, WCFinderTopicInfo;

@protocol WCFinderProfileFeedPageHeaderContainerViewDelegate <NSObject>
- (void)headerContainerExpandChangedChanged:(WCFinderProfileFeedPageHeaderContainerView *)arg1 isExpand:(_Bool)arg2;
- (void)headerContainerViewContentHeightChanged:(WCFinderProfileFeedPageHeaderContainerView *)arg1;
- (void)headerContainerView:(WCFinderProfileFeedPageHeaderContainerView *)arg1 selectedTopic:(WCFinderTopicInfo *)arg2;

@optional
- (void)setupCollectionReportWithCollectionItemButtons:(NSArray *)arg1;
- (void)setupCollectionReportWithNextEpisodeBtn:(UIView *)arg1 allEpisodeBtn:(UIView *)arg2 moreBtn:(UIView *)arg3;
- (void)headerContainerClickedCollectionMoreButton:(WCFinderProfileFeedPageHeaderContainerView *)arg1;
- (void)headerContainer:(WCFinderProfileFeedPageHeaderContainerView *)arg1 clickedCollectionItemWithInfo:(FinderCollectionInfo *)arg2;
- (void)headerContainerClickedCollectionAllEpisodeButton:(WCFinderProfileFeedPageHeaderContainerView *)arg1;
- (void)headerContainerClickedCollectionNextEpisodeButton:(WCFinderProfileFeedPageHeaderContainerView *)arg1;
@end

