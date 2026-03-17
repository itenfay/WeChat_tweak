//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderVideoTemplateInfo, NSIndexPath, NSMutableArray, NSString, RecommendedMusicInfo, UITableViewCell, UIView, WCFinderFeedContentVM, WCFinderFeedListView, WCFinderMusicInfoModel, WCFinderPostMgr, WCFinderPostSourceInfo;

@protocol WCFinderFeedListViewDataSource <NSObject>
- (long long)finderFeedListView:(WCFinderFeedListView *)arg1 sectionOfTid:(NSString *)arg2;
- (long long)numberOfContentVMsInTableView;
- (WCFinderFeedContentVM *)finderFeedListView:(WCFinderFeedListView *)arg1 contentVMOfTid:(NSString *)arg2;
- (WCFinderFeedContentVM *)finderFeedListView:(WCFinderFeedListView *)arg1 contentVMAtSection:(long long)arg2;

@optional
- (WCFinderPostSourceInfo *)postMgrSourceInfo:(WCFinderPostMgr *)arg1;
- (FinderVideoTemplateInfo *)postMgrGetVideoTemplateInfo:(WCFinderPostMgr *)arg1;
- (WCFinderMusicInfoModel *)postMgrGetMusicInfo;
- (NSString *)postMgrPatMusicGetGroupId:(WCFinderPostMgr *)arg1;
- (RecommendedMusicInfo *)postMgrGetRecommendedMusicInfoFromShoot:(_Bool)arg1 postMgr:(WCFinderPostMgr *)arg2;
- (NSString *)onPostFollowTemplateFeedId;
- (NSMutableArray *)onPostMusicIds:(WCFinderPostMgr *)arg1;
- (NSIndexPath *)finderFeedListView:(WCFinderFeedListView *)arg1 nextMediaIndexPath:(NSIndexPath *)arg2;
- (double)finderFeedListView:(WCFinderFeedListView *)arg1 heightForCustomFooterInSection:(long long)arg2;
- (double)finderFeedListView:(WCFinderFeedListView *)arg1 heightForCustomHeaderInSection:(long long)arg2;
- (UIView *)finderFeedListView:(WCFinderFeedListView *)arg1 viewForCustomFooterInSection:(long long)arg2;
- (UITableViewCell *)finderFeedListView:(WCFinderFeedListView *)arg1 customCellForRowAtIndexPath:(NSIndexPath *)arg2;
- (double)finderFeedListView:(WCFinderFeedListView *)arg1 heightForCustomRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)finderFeedListView:(WCFinderFeedListView *)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (NSString *)finderFeedListViewGetMiaoJianPrefix:(WCFinderFeedListView *)arg1;
- (NSString *)finderFeedListViewGetSongId:(WCFinderFeedListView *)arg1;
- (_Bool)finderFeedListView:(WCFinderFeedListView *)arg1 customViewAtSection:(long long)arg2;
@end

