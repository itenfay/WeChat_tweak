//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderMusicInfo, FinderVideoTemplateInfo, MMUIViewController, NSMutableArray, NSString, RecommendedMusicInfo, WCFinderDataItem, WCFinderMusicInfoModel, WCFinderPostMgr, WCFinderPostSessionModel, WCFinderPostSourceInfo;

@protocol WCFinderPostMgrDelegate <NSObject>

@optional
- (void)triggerPostActionByCheckAudioTrack:(WCFinderPostMgr *)arg1;
- (RecommendedMusicInfo *)postMgrGetRecommendedMusicInfoFromShoot:(_Bool)arg1 postMgr:(WCFinderPostMgr *)arg2;
- (WCFinderPostSourceInfo *)postMgrSourceInfo:(WCFinderPostMgr *)arg1;
- (NSString *)postMgrAttachTextContent:(WCFinderPostMgr *)arg1;
- (NSString *)onPostFollowMuiscFeedId:(WCFinderPostMgr *)arg1;
- (NSString *)onPostFollowTopicFeedId:(WCFinderPostMgr *)arg1;
- (NSString *)postMgrPatMusicGetGroupId:(WCFinderPostMgr *)arg1;
- (NSMutableArray *)onPostMusicIds:(WCFinderPostMgr *)arg1;
- (FinderVideoTemplateInfo *)postMgrGetVideoTemplateInfo:(WCFinderPostMgr *)arg1;
- (NSString *)postMgrGetExtStatsReportStrValue;
- (_Bool)postMgrEnableOpenAlbum:(WCFinderPostMgr *)arg1;
- (NSString *)onPostFollowTemplateFeedId;
- (WCFinderDataItem *)getRefDataItemForExtStatsReport;
- (WCFinderMusicInfoModel *)postMgrGetMusicInfo;
- (_Bool)isFrontCamera;
- (_Bool)postMgrForbiddenFinderLongVideoEntry;
- (FinderMusicInfo *)postMgrGetFinderMusicInfo;
- (void)onPostHandleBusinessActionPostVC:(MMUIViewController *)arg1 postSession:(WCFinderPostSessionModel *)arg2;
- (void)onPostActionFinish;
- (void)onPostMgrPresentToPostViewControllerComplete;
- (void)onPostMgrImagePickerClickCancel;
- (void)postMgrSaveDraft;
- (void)postMgrStartUpload;
- (void)postMgrWillOpenAlbum:(WCFinderPostMgr *)arg1;
- (void)postMgrClickActionSheet;
@end

