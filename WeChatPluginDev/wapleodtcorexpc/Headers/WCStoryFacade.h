//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString, WCStoryCommentUploadMgr, WCStoryDataMgr, WCStoryDownloadImageCdnMgr, WCStoryDownloadVideoCdnMgr, WCStoryPostLimitObj, WCStorySetting, WCStoryUploadCdnMgr;

@interface WCStoryFacade
{
    WCStoryDataMgr *_dataMgr;
    WCStoryUploadCdnMgr *_uploadMgr;
    WCStoryCommentUploadMgr *_commentUploadMgr;
    WCStoryDownloadVideoCdnMgr *_downloadVideoCdnMgr;
    WCStoryDownloadImageCdnMgr *_downloadImageCdnMgr;
    WCStoryPostLimitObj *_limitObj;
    WCStorySetting *_storySetting;
    NSRecursiveLock *_lock;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) WCStorySetting *storySetting; // @synthesize storySetting=_storySetting;
@property(retain, nonatomic) WCStoryPostLimitObj *limitObj; // @synthesize limitObj=_limitObj;
@property(retain, nonatomic) WCStoryDownloadImageCdnMgr *downloadImageCdnMgr; // @synthesize downloadImageCdnMgr=_downloadImageCdnMgr;
@property(retain, nonatomic) WCStoryDownloadVideoCdnMgr *downloadVideoCdnMgr; // @synthesize downloadVideoCdnMgr=_downloadVideoCdnMgr;
@property(retain, nonatomic) WCStoryCommentUploadMgr *commentUploadMgr; // @synthesize commentUploadMgr=_commentUploadMgr;
@property(retain, nonatomic) WCStoryUploadCdnMgr *uploadMgr; // @synthesize uploadMgr=_uploadMgr;
@property(retain, nonatomic) WCStoryDataMgr *dataMgr; // @synthesize dataMgr=_dataMgr;
- (void)onWCGroupUpdated;
- (id)getPlayRecordWithDataItem:(id)arg1;
- (id)makeStoryPlayedWithDataItem:(id)arg1 Scene:(unsigned long long)arg2;
- (id)getPlayRecordWithUserName:(id)arg1;
- (void)onExptItemListChange;
- (_Bool)isEditVideoBGMOnTimeLine;
- (_Bool)isEditVideoBGMOnStory;
- (void)setFriendVisitUnreadCommentRedPointUnReaded:(_Bool)arg1;
- (_Bool)isFriendVisitUnreadCommentRedPointUnReaded;
- (void)didShowPrivateTips;
- (_Bool)canShowPrivateTips;
- (void)reloadShowTimelineEntrance:(_Bool)arg1;
- (_Bool)isShowTimelineEntrance;
- (void)reloadLastTimeReadMaxTid:(unsigned long long)arg1;
- (unsigned long long)getLastTimelineReadMaxTid;
- (_Bool)shouldShowFriendsStoryCellInTimeLine;
- (void)alwaysShowFriendsStoryCellInTimeline:(_Bool)arg1;
- (_Bool)hasAlwaysShowFriendsStoryCellInTimeline;
- (void)didTakePhotoAfterShowGuide;
- (_Bool)hasTakePhotoAfterShowGuide;
- (void)markShowDragDownTipInProfile;
- (_Bool)canShowDragDownTipInProfile;
- (void)showAutoPlayVideoOnce;
- (_Bool)canAutoPlayVideo;
- (void)dragDownStoryTeachView;
- (_Bool)hasFirstDragDownStoryTeachView;
- (void)showCameraGuideOnce;
- (void)setFriendVisitSwitchOn:(_Bool)arg1;
- (_Bool)friendVisitSwitchOn;
- (_Bool)clearFriendVisitVersionCameraAndMyTabRedPoint;
- (_Bool)shouleShowFriendVisitVersionCameraRedPoint;
- (_Bool)canShowCameraGuide;
- (void)showCameraTipsOnce;
- (_Bool)canShowCameraTips;
- (void)saveStorySetting;
- (void)loadStorySetting;
- (void)clearAlbumRedDot;
- (void)clearAlbumRedDotIfNeeded;
- (_Bool)hasClearAlbumRedDot;
- (_Bool)shouldShowAlbumRedDot;
- (_Bool)resetAllRelated;
- (long long)getUnreadRelatedCommentTotalCount;
- (_Bool)hasUserUnreadRelatedComment;
- (_Bool)checkStoryDataItemHasUnreadCommentWithTid:(id)arg1;
- (long long)getUnreadCommentCountOfDataItem:(id)arg1;
- (long long)getUnreadCommentCountOfRelatedCommentObj:(id)arg1;
- (id)getAllStoryUnReadDataItem;
- (long long)getReadCommentIdWithTid:(id)arg1;
- (id)getReadCommentIdOfDataItemTid:(id)arg1;
- (id)getAllStoryUnReadUserRelatedCommentObjWithUsername:(id)arg1;
- (_Bool)makeUsernameDataItemAllRelatedCommentRead:(id)arg1;
- (_Bool)deleteRelatedCommentWithComment:(id)arg1;
- (_Bool)addRelatedCommentWithComment:(id)arg1 dataItemOwner:(id)arg2;
- (_Bool)cleanAllUserRelatedcomment;
- (_Bool)makeStoryUserRelatedCommentReadWithTid:(id)arg1;
- (void)makeAllStoryUserRelatedCommentRead;
- (id)getAllStoryUnReadUserRelatedCommentObj;
- (void)reversePrivateWithDataItem:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)showCameraNewGuideOnce;
- (_Bool)canShowCameraNewGuide;
- (void)changeTimelineTipsValue;
- (_Bool)canShowTimelineTips;
- (void)showTimelineTipsOnce;
- (_Bool)mainTextSwitchOn;
- (_Bool)imagesComposeSwitchOn;
- (_Bool)timelineLyricsSwitchOn;
- (_Bool)lyricsSwitchOn;
- (void)onCommentFail:(id)arg1;
- (void)onCommentSuccess:(id)arg1;
- (void)onStoryPostSuccess:(id)arg1 LimitObj:(id)arg2;
- (void)onStoryPostFail:(id)arg1 ErrorType:(long long)arg2;
- (void)onStoryPostRetry:(id)arg1;
- (_Bool)IsStreamDownloadingWithMediaItem:(id)arg1;
- (_Bool)StopVideoDownloadWithMediaWrap:(id)arg1 downloadTaskInfo:(id *)arg2;
- (void)StartVideoDownloadWithMediaWrap:(id)arg1;
- (void)StartPreloadSNSEntranceVideo;
- (id)getArrPreloadItems;
- (void)StartPreloadChatRoomVideoWithStoryDataItem:(id)arg1;
- (void)StartPreloadChatRoomVideoWithMediaItem:(id)arg1;
- (void)StartVideoPreloadWithItems:(id)arg1;
- (void)StartDownloadImageWithMediaItem:(id)arg1 Priority:(_Bool)arg2;
- (void)StartDownloadImageWithMediaItem:(id)arg1;
- (void)StartPreloadImageWithItems:(id)arg1;
- (id)getHistoryPageIndexsWithTimeZone:(int)arg1 maxID:(unsigned long long)arg2 Limit:(unsigned int)arg3;
- (id)updateStoryUploadingStatus:(id)arg1;
- (void)uploadStoryDataItem:(id)arg1;
- (void)addStoryUnReadWithComment:(id)arg1;
- (id)insertCommentToLocalDataItem:(id)arg1;
- (void)makeAllCommentReadWithStoryItem:(id)arg1;
- (void)makeCommentWithCommentType:(unsigned int)arg1 allReadedWithSelfDataItem:(id)arg2;
- (_Bool)hasUnReadStoryComments;
- (void)removeSyncDelStoryComment:(id)arg1;
- (void)removeFailComment:(id)arg1;
- (id)getFailedComments;
- (void)removeStoryComment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)addStoryComment:(id)arg1;
- (id)getTimelineShowUnreadArray;
- (id)getAllTimelineShowUnreadStory;
- (void)makeUserNameArrayStoryRead:(id)arg1;
- (id)clearUnreadStoryWithUsername:(id)arg1;
- (unsigned int)earliestUnreadStoryPostTime;
- (void)halfTimeStampStoryUnreadTid;
- (void)cleanAllReadStatus;
- (id)getAllUnreadStory;
- (id)getLastReadUserStorysWithUserNames:(id)arg1;
- (double)getLastReadUserStoryTimeStamp:(id)arg1;
- (void)deleteStoryAndMakeUnReadTogetherWithTid:(id)arg1 UserName:(id)arg2;
- (_Bool)mmcontactHasUnReadStory;
- (_Bool)hasUnReadStoryWithUserName:(id)arg1;
- (void)makeStoryReadWithUserName:(id)arg1 Tid:(id)arg2;
- (void)addStorysFromSyncDataItems:(id)arg1;
- (double)getChatRoomNextSyncTimeStamp:(id)arg1;
- (id)getChatRoomSyncData:(id)arg1;
- (void)removeChatRoomStorySync:(id)arg1;
- (_Bool)shouldChatRoomSyncStory:(id)arg1;
- (void)addChatRoomSyncStoryWithChatName:(id)arg1 NextSyncTime:(unsigned int)arg2 Buffer:(id)arg3;
- (void)permissonHasChanged;
- (void)fetchInteractiveHeatWithDataItem:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)deleteStoryAllDataWithUserName:(id)arg1;
- (id)getChatRoomSycStorysWithUserName:(id)arg1;
- (void)updateStoryDataItem:(id)arg1;
- (void)updateStoryCommentsWithDataItem:(id)arg1;
- (void)fetchStoryDataItemDetailFromServerWithTid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)getStoryDataItemWithTid:(id)arg1;
- (id)getStorysWithUserName:(id)arg1 MaxTid:(id)arg2;
- (id)getLocalAllStorysWithUserName:(id)arg1;
- (id)getLocalNewestStoryWithUserName:(id)arg1;
- (id)getMaxTidStoryWithUserName:(id)arg1;
- (unsigned long long)getLocalStoryCountWithUserName:(id)arg1;
- (void)deleteStoryDataItem:(id)arg1 retHandler:(CDUnknownBlockType)arg2;
- (void)fetchNewestStoryWithUserName:(id)arg1 MaxId:(unsigned long long)arg2 ChatRoomName:(id)arg3 DataHandler:(CDUnknownBlockType)arg4;
- (void)fetchStoryDateDetailWithDateString:(id)arg1 timeZone:(int)arg2 DataHandler:(CDUnknownBlockType)arg3;
- (void)fetchHistoryStoryWithTimeZone:(int)arg1 MaxId:(unsigned long long)arg2 DataHandler:(CDUnknownBlockType)arg3;
- (void)uploadRetry;
- (void)refreshSyncData;
- (_Bool)hasLocalStoryWithUserName:(id)arg1;
- (_Bool)shouldShowStory;
- (void)onServiceClearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

