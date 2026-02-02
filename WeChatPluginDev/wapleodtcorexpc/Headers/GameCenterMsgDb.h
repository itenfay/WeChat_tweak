//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface GameCenterMsgDb : NSObject
{
    WCTDatabase *_db;
    WCTTable *_table;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *table; // @synthesize table=_table;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (void)reddotReExposure;
- (id)debugDBStatus;
- (unsigned int)getAllRecordCount;
- (_Bool)cleanMsgByShowType:(unsigned int)arg1 retainCount:(unsigned int)arg2;
- (_Bool)cleanMsgByShowType:(unsigned int)arg1 beforeTimestamp:(unsigned int)arg2;
- (void)updateInteractMsgWithLocalId:(unsigned int)arg1 isGreet:(_Bool)arg2 relationType:(unsigned int)arg3;
- (unsigned int)getCountWithReportType:(unsigned int)arg1 unRead:(_Bool)arg2;
- (id)getLastMessageWithShowType:(int)arg1;
- (unsigned int)getMsgUnreadCoutWithShowType:(int)arg1;
- (id)getLastUnreadMsgWithType:(int)arg1;
- (id)getNewMsgNeedMergeWith:(id)arg1;
- (id)getMsgNeedMergeWith:(id)arg1;
- (struct Expression)buildWhereCondition:(int)arg1 lastLocalId:(int)arg2 showType:(int)arg3 readState:(int)arg4;
- (struct Expression)buildWhereCondition:(int)arg1 lastLocalId:(int)arg2 showType:(int)arg3 onlyUnRead:(_Bool)arg4;
- (id)getDbPath;
- (void)closeDbBeforeInit;
- (id)getMsgListByPushId:(id)arg1;
- (id)getMsgBySvrMsgId:(id)arg1;
- (_Bool)isMsgExistBySvrMsgId:(id)arg1;
- (_Bool)createTable;
- (id)getAllMsg;
- (_Bool)setExistRedPointCanNotShow;
- (_Bool)setMsgReadWithLocalIdList:(id)arg1;
- (_Bool)setMsgCenterAllReadWithShowType:(unsigned int)arg1;
- (_Bool)setMsgCenterAllRead;
- (_Bool)setMsgCenterOneMsgRead:(unsigned int)arg1;
- (id)getMsgListByPage:(int)arg1 lastLocalId:(int)arg2 maxCount:(int)arg3;
- (id)getMsgListByPageForJsApi:(int)arg1 lastLocalId:(int)arg2 onlyUnRead:(_Bool)arg3 maxCount:(int)arg4 subMsgType:(int)arg5;
- (id)getMsgCenterListWithShowType:(int)arg1 readState:(int)arg2 oldThan:(unsigned int)arg3 maxCount:(unsigned int)arg4;
- (id)getMsgCenterReadListBefore:(unsigned int)arg1;
- (id)getMsgCenterUnreadList;
- (id)getAllQueueType1StateNoneMsgList;
- (id)getReExposureMsgList;
- (_Bool)updateMsg:(id)arg1 withExposureState:(unsigned long long)arg2;
- (_Bool)updateMsgWithSvrMsgId:(id)arg1 score:(float)arg2;
- (_Bool)updateMsgFirstExposureTime:(id)arg1;
- (_Bool)updateMsg:(unsigned int)arg1 msgState:(int)arg2;
- (_Bool)updateMsg:(unsigned int)arg1 completeExposureCnt:(unsigned int)arg2;
- (_Bool)updateMsg:(unsigned int)arg1 exposureCnt:(unsigned int)arg2;
- (id)getClickMsgWithSameContentIdWithMsg:(id)arg1;
- (_Bool)updateContentIdCanNotShow:(id)arg1;
- (_Bool)deleteMsgByLocalIdList:(id)arg1;
- (_Bool)unhideAllMsgByShowType:(unsigned int)arg1;
- (_Bool)hideAllMsgByShowType:(unsigned int)arg1;
- (_Bool)deleteMsgByShowType:(unsigned int)arg1;
- (_Bool)deleteMsgByReportType:(unsigned int)arg1;
- (_Bool)deleteMsgBeforeTimeStamp:(unsigned int)arg1;
- (_Bool)deleteMsgByLocalId:(int)arg1;
- (_Bool)deleteMsgByServerId:(id)arg1;
- (_Bool)deleteAllMsg;
- (id)getMsgByLocalId:(unsigned int)arg1;
- (unsigned int)saveMsgToDB:(id)arg1;
- (void)runTransaction:(CDUnknownBlockType)arg1;
- (void)batchUpdate:(id)arg1;
- (_Bool)initDb;

@end

