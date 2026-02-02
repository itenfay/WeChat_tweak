//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCStoryWCDB;

@interface WCStoryDataMgr
{
    WCStoryWCDB *_dataBase;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStoryWCDB *dataBase; // @synthesize dataBase=_dataBase;
- (_Bool)deleteDataItemAllUserRelatedCommentWithTid:(id)arg1;
- (_Bool)hasUserUnreadRelatedComment;
- (_Bool)checkStoryDataItemHasUnreadCommentWithTid:(id)arg1;
- (id)getAllStoryUnReadUserRelatedCommentObjWithUsername:(id)arg1;
- (_Bool)makeUsernameDataItemAllRelatedCommentRead:(id)arg1;
- (_Bool)deleteRelatedCommentWithComment:(id)arg1;
- (_Bool)addRelatedCommentWithComment:(id)arg1 dataItemOwner:(id)arg2;
- (_Bool)cleanAllUserRelatedcomment;
- (_Bool)makeStoryUserRelatedCommentReadWithTid:(id)arg1;
- (void)makeAllStoryUserRelatedCommentRead;
- (id)getAllStoryUnReadUserRelatedCommentObj;
- (void)reversePrivateWithDataItem:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)onDataItemsHasUpdate:(id)arg1;
- (void)onCleanStoryUnReads:(id)arg1;
- (id)getPlayRecordWithDataItem:(id)arg1;
- (id)makeStoryPlayedWithDataItem:(id)arg1 Scene:(unsigned long long)arg2;
- (id)getPlayRecordWithUserName:(id)arg1;
- (void)updateOneDayStorysWithDataItems:(id)arg1 Date:(id)arg2 Zone:(int)arg3;
- (id)getZonePageObjListWithFirstTid:(id)arg1 Zone:(int)arg2 Limit:(unsigned int)arg3;
- (id)getPageDataItemsObjWithDate:(id)arg1 Zone:(int)arg2;
- (void)updateHistoryStoryPageObj:(id)arg1 Zone:(int)arg2 MaxTid:(unsigned long long)arg3 RetCode:(int)arg4;
- (id)getLastReadUserStorysWithUserNames:(id)arg1;
- (double)getLastReadUserStoryTimeStamp:(id)arg1;
- (_Bool)addStoryUnReadCommentWithStoryComment:(id)arg1;
- (_Bool)deleteStoryUnreadCommentsWithType:(unsigned int)arg1 tid:(id)arg2;
- (_Bool)deleteStoryUnReadCommentsWithWithTid:(id)arg1 CommentId:(id)arg2;
- (_Bool)hasUnreadStoryComments:(unsigned int)arg1 WithTid:(id)arg2;
- (_Bool)deleteStoryUnReadCommentsWithTid:(id)arg1;
- (id)getStoryUnReadCommentsWithTid:(id)arg1;
- (_Bool)hasUnReadStoryComments;
- (void)addStoryCommentWith:(id)arg1;
- (void)deleteStoryCommentFromDB:(id)arg1;
- (void)deleteStoryComment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (_Bool)addPostedStoryAndDeleteLocalWithDataItem:(id)arg1;
- (id)makeStoryFailWithTid:(id)arg1 ErrorType:(long long)arg2;
- (void)updateStoryCommentsWith:(id)arg1;
- (void)updateStoryDataItem:(id)arg1;
- (void)fetchStoryDataItemDetailFromServerWithTid:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (id)getStoryDataItemWithId:(id)arg1;
- (long long)getNumberOfUserPostInOneDay;
- (id)getChatRoomSycStorysWithUserName:(id)arg1;
- (id)getStoryItemsWithUserName:(id)arg1 AfterTime:(unsigned int)arg2;
- (id)getNewestStoryDataItemWithUserName:(id)arg1;
- (id)getStoryItemsWithUserName:(id)arg1 MaxTid:(id)arg2;
- (id)getAllUploadingDataItems;
- (void)deleteStoryAllDataWithUserName:(id)arg1;
- (id)getUnreadStoryInUsernameArray:(id)arg1;
- (id)getAllTimelineShowUnreadStory;
- (id)clearUnreadStoryWithUsername:(id)arg1;
- (unsigned int)earliestUnreadStoryPostTime;
- (unsigned long long)halfTimeStampStoryUnreadTid;
- (void)cleanAllReadStatus;
- (id)getAllUnreadStory;
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
- (void)deleteLocalStoryWithTid:(id)arg1;
- (void)deleteStoryDataItem:(id)arg1 retHandler:(CDUnknownBlockType)arg2;
- (void)fetchInteractiveHeatWithDataItem:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)fetchStoryDateDetailWithDateString:(id)arg1 timeZone:(int)arg2 DataHandler:(CDUnknownBlockType)arg3;
- (void)fetchHistoryStoryWithTimeZone:(int)arg1 MaxId:(unsigned long long)arg2 DataHandler:(CDUnknownBlockType)arg3;
- (void)fetchNewestStoryWithUserName:(id)arg1 MaxId:(unsigned long long)arg2 ChatRoomName:(id)arg3 DataHandler:(CDUnknownBlockType)arg4;
- (_Bool)resetAllRelated;
- (id)getReadCommentIdOfDataItemTid:(id)arg1;
- (void)mergeSelfUnReadCommentWithDataItems:(id)arg1;
- (void)mergeRelatedUnReadCommentWithDataItems:(id)arg1;
- (void)mergeUnReadCommentWithDataItems:(id)arg1 username:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

