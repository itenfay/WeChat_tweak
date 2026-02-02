//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderVideoTemplateInfo, NSMutableArray, NSString, RecommendedMusicInfo, WCFinderMusicInfoModel, WCFinderPostMgr, WCFinderPostSourceInfo;

@protocol WCFinderTopicListDetailViewControllerDelegate <NSObject>

@optional
- (WCFinderPostSourceInfo *)postMgrSourceInfo:(WCFinderPostMgr *)arg1;
- (FinderVideoTemplateInfo *)postMgrGetVideoTemplateInfo:(WCFinderPostMgr *)arg1;
- (WCFinderMusicInfoModel *)postMgrGetMusicInfo;
- (NSString *)postMgrPatMusicGetGroupId:(WCFinderPostMgr *)arg1;
- (RecommendedMusicInfo *)postMgrGetRecommendedMusicInfoFromShoot:(_Bool)arg1 postMgr:(WCFinderPostMgr *)arg2;
- (NSString *)onPostFollowTemplateFeedId;
- (NSMutableArray *)onPostMusicIds:(WCFinderPostMgr *)arg1;
@end

