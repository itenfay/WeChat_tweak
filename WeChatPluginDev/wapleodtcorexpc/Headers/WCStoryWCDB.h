//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WCTDatabase, WCTTable;
@protocol NSObject, OS_dispatch_queue, WCStoryWCDBDelegate;

@interface WCStoryWCDB : NSObject
{
    id <NSObject> m_recoverObserver;
    unsigned int _lastCleanInvalidateTime;
    id <WCStoryWCDBDelegate> _delegate;
    double _lastCleanCommentInvalidateTime;
    NSObject<OS_dispatch_queue> *_dataItemCleanQueue;
    WCTDatabase *_database;
    WCTTable *_storyTable;
    WCTTable *_unReadStoryTable;
    WCTTable *_chatRoomSyncTable;
    WCTTable *_unReadCommentTable;
    WCTTable *_playRecordTable;
    WCTTable *_userDataTable;
    WCTTable *_userRelatedCommentTable;
    NSMutableDictionary *_dicZonePageTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicZonePageTable; // @synthesize dicZonePageTable=_dicZonePageTable;
@property(retain, nonatomic) WCTTable *userRelatedCommentTable; // @synthesize userRelatedCommentTable=_userRelatedCommentTable;
@property(retain, nonatomic) WCTTable *userDataTable; // @synthesize userDataTable=_userDataTable;
@property(retain, nonatomic) WCTTable *playRecordTable; // @synthesize playRecordTable=_playRecordTable;
@property(retain, nonatomic) WCTTable *unReadCommentTable; // @synthesize unReadCommentTable=_unReadCommentTable;
@property(retain, nonatomic) WCTTable *chatRoomSyncTable; // @synthesize chatRoomSyncTable=_chatRoomSyncTable;
@property(retain, nonatomic) WCTTable *unReadStoryTable; // @synthesize unReadStoryTable=_unReadStoryTable;
@property(retain, nonatomic) WCTTable *storyTable; // @synthesize storyTable=_storyTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataItemCleanQueue; // @synthesize dataItemCleanQueue=_dataItemCleanQueue;
@property(nonatomic) double lastCleanCommentInvalidateTime; // @synthesize lastCleanCommentInvalidateTime=_lastCleanCommentInvalidateTime;
@property(nonatomic) unsigned int lastCleanInvalidateTime; // @synthesize lastCleanInvalidateTime=_lastCleanInvalidateTime;
@property(nonatomic) __weak id <WCStoryWCDBDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRecoverDatabase;
- (_Bool)isRelatedComment:(id)arg1;
- (_Bool)updateRelatedCommentObj:(id)arg1;
- (_Bool)resetAllRelated;
- (_Bool)hasUserUnreadRelatedComment;
- (_Bool)cleanAllUserRelatedcomment;
- (_Bool)deleteDataItemAllUserRelatedCommentWithTid:(id)arg1;
- (id)getReadCommentIdOfDataItemTid:(id)arg1;
- (id)getAllStoryUnReadUserRelatedCommentObjWithUsername:(id)arg1;
- (_Bool)makeUsernameDataItemAllRelatedCommentRead:(id)arg1;
- (_Bool)deleteRelatedCommentWithComment:(id)arg1;
- (_Bool)addRelatedCommentWithComment:(id)arg1 dataItemOwner:(id)arg2;
- (_Bool)addEmptyRelatedCommentWithComment:(id)arg1 dataItemOwner:(id)arg2;
- (_Bool)makeStoryUserRelatedCommentReadWithTid:(id)arg1;
- (_Bool)checkStoryDataItemHasUnreadCommentWithTid:(id)arg1;
- (void)makeAllStoryUserRelatedCommentRead;
- (id)getAllStoryUnReadUserRelatedCommentObj;
- (_Bool)cleanInvalidUserRelatedComment;
- (_Bool)createUserRelatedCommentTable;
- (void)_cleanInvalidateStory;
- (void)cleanInvalidateStory;
- (void)updateOneDayStorysWithDataItems:(id)arg1 Date:(id)arg2 Zone:(int)arg3;
- (id)getZonePageObjListWithFirstTid:(id)arg1 Zone:(int)arg2 Limit:(unsigned int)arg3;
- (id)getStorysWithZonePageIndexObjs:(id)arg1;
- (id)getZonePageIndexListWithFirstTid:(id)arg1 Zone:(int)arg2 Limit:(unsigned int)arg3;
- (id)getPageDataItemsObjWithDate:(id)arg1 Zone:(int)arg2;
- (id)getPageIndexObjWithTid:(id)arg1 Zone:(int)arg2;
- (void)updateHistoryStoryPageObj:(id)arg1 Zone:(int)arg2 MaxTid:(unsigned long long)arg3 RetCode:(int)arg4;
- (void)deleteZonePageIndexWithTid:(id)arg1 Zone:(int)arg2;
- (void)addZonePageIndexWithStoryItem:(id)arg1 Zone:(int)arg2;
- (id)getOrCreateZonePageTableWithZone:(int)arg1;
- (id)getZonePageTableNameWithZoneCode:(int)arg1;
- (_Bool)updateStoryItems:(id)arg1;
- (_Bool)updateStoryCommentsWith:(id)arg1;
- (_Bool)updateStoryItem:(id)arg1;
- (id)makeStoryFailWithTid:(id)arg1 ErrorType:(long long)arg2;
- (void)updateChatRoomSyncStorys:(id)arg1;
- (void)deleteNewestStoryWithUserName:(id)arg1 NewDataItems:(id)arg2;
- (_Bool)deleteStoryDataWithItemID:(id)arg1;
- (void)deleteAllStoryDataWithUserName:(id)arg1;
- (id)getStoryDataItemsWithUserName:(id)arg1 MaxItemID:(id)arg2;
- (long long)getNumberOfUserPostInOneDay;
- (id)getStoryItemsWithUserName:(id)arg1 AfterTime:(unsigned int)arg2;
- (id)getNewestStoryDataItemWithUserName:(id)arg1;
- (id)getStoryDataItemWithId:(id)arg1;
- (id)getAllUploadingDataItems;
- (id)getChatRoomSycStorysWithUserName:(id)arg1;
- (_Bool)deleteStoryComment:(id)arg1;
- (_Bool)addStoryCommentWithComment:(id)arg1;
- (_Bool)deleteUnreadStoryComments:(unsigned int)arg1 WithTid:(id)arg2;
- (_Bool)deleteStoryUnReadCommentsWithTid:(id)arg1 CommentId:(id)arg2;
- (_Bool)deleteStoryUnReadCommentsWithTid:(id)arg1;
- (_Bool)hasUnreadStoryComments:(unsigned int)arg1 WithTid:(id)arg2;
- (_Bool)hasStoryUnReadCommentsWithCommentType:(unsigned int)arg1 tid:(id)arg2;
- (id)getStoryUnReadCommentsWithTid:(id)arg1;
- (_Bool)addStoryUnReadCommentWithStoryComment:(id)arg1;
- (_Bool)createStoryUnReadCommentTable;
- (_Bool)hasUnReadStoryComments;
- (id)getUnreadStoryInUsernameArray:(id)arg1;
- (unsigned int)earliestUnreadStoryPostTime;
- (unsigned long long)halfTimeStampStoryUnreadTid;
- (void)cleanAllReadStatus;
- (id)clearUnreadStoryWithUsername:(id)arg1;
- (id)getAllUnreadStory;
- (id)fetchStoryDataItemInUsernameArray:(id)arg1;
- (id)getAllTimelineShowUnreadStory;
- (_Bool)mmcontactHasUnReadStory;
- (id)getLastReadUserStorysWithUserNames:(id)arg1;
- (double)getLastReadUserStoryTimeStamp:(id)arg1;
- (void)deleteStoryAndMakeUnReadTogetherWithTid:(id)arg1 UserName:(id)arg2;
- (_Bool)hasUnReadSyoryWithUserName:(id)arg1;
- (void)makeStoryReadWithUserName:(id)arg1 Tid:(id)arg2;
- (void)updateUnReadStorys:(id)arg1;
- (_Bool)createUnReadStoryTable;
- (void)setUnReadMaxTidDataItem:(id)arg1 UserName:(id)arg2;
- (void)deleteUnReadStoryWithUserName:(id)arg1;
- (double)getChatRoomNextSyncTimeStamp:(id)arg1;
- (id)getChatRoomSyncData:(id)arg1;
- (_Bool)shouldChatRoomSyncStory:(id)arg1;
- (void)removeChatRoomStorySync:(id)arg1;
- (_Bool)addChatRoomStorySync:(id)arg1;
- (_Bool)createChatRoomSyncStoryTable;
- (_Bool)createStoryTableTable;
- (id)getPlayRecordWithDataItem:(id)arg1;
- (id)makeStoryPlayedWithDataItem:(id)arg1 Scene:(unsigned long long)arg2;
- (id)getPlayRecordWithUserName:(id)arg1;
- (void)updateUserDataWithDataItems:(id)arg1;
- (_Bool)createStoryUserDataTable;
- (_Bool)createStoryPlayRecordTable;
- (void)willRecoverDatabase;
- (void)closeDB;
- (void)cleanOtherZonePageIndexTable;
- (void)createTables;
- (_Bool)reloadDataBase;
- (void)dealloc;
- (id)init;

@end

