//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderVideoTemplateInfo, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, RecommendedMusicInfo, WCFinderDataItem, WCFinderFeedContentVM, WCFinderMusicInfoModel, WCFinderMusicTopicPageViewManager, WCFinderPostMgr, WCFinderPostSourceInfo;

@protocol WCFinderMusicTopicPageViewManagerDelegate <NSObject>

@optional
- (WCFinderPostSourceInfo *)postMgrSourceInfo:(WCFinderPostMgr *)arg1;
- (NSString *)postMgrGetExtStatsReportStrValue;
- (WCFinderDataItem *)getRefDataItemForExtStatsReport;
- (void)postMgrWillOpenAlbum:(WCFinderPostMgr *)arg1;
- (_Bool)postMgrEnableOpenAlbum:(WCFinderPostMgr *)arg1;
- (NSMutableDictionary *)gen21874UdfKvDict;
- (FinderVideoTemplateInfo *)postMgrGetVideoTemplateInfo:(WCFinderPostMgr *)arg1;
- (NSString *)postMgrPatMusicGetGroupId:(WCFinderPostMgr *)arg1;
- (RecommendedMusicInfo *)postMgrGetRecommendedMusicInfoFromShoot:(_Bool)arg1 postMgr:(WCFinderPostMgr *)arg2;
- (NSString *)onPostFollowMuiscFeedId:(WCFinderPostMgr *)arg1;
- (NSString *)onPostFollowTemplateFeedId;
- (NSMutableArray *)onPostMusicIds:(WCFinderPostMgr *)arg1;
- (WCFinderMusicInfoModel *)postMgrGetMusicInfo;
- (void)finderMusicMgrFetchListSucPullType:(unsigned long long)arg1 innerTabType:(int)arg2 dataArray:(NSArray *)arg3;
- (void)finderMusicCellWillDisplayPageView:(WCFinderMusicTopicPageViewManager *)arg1 indexPath:(NSIndexPath *)arg2 contentVM:(WCFinderFeedContentVM *)arg3;
- (void)finderMusicPostAction;
- (void)finderMusicTopicInvalidWithErrorCode:(int)arg1 errMsg:(NSString *)arg2;
- (void)finderMusicReloadAllData;
- (void)finderEventFeedOrderChangedInHotTab;
- (NSString *)finderGetMusicSongId;
- (NSMutableDictionary *)getUdfKvDict;
@end

