//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemoryMappedKV, WCTDatabase, WCTTable;

@interface BrandTimelineMsgDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_tableTimeline;
    WCTTable *m_tableTimelineNotification;
    MemoryMappedKV *_mappedKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)openTable;
- (void)clearDB;
- (void)close;
- (void)open;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;
- (id)convertNotificaitonDBMsg2CMsgWrap:(id)arg1;
- (id)convertNotificationDBMsgArr2CMsgWrapArr:(id)arg1;
- (_Bool)updateMainSessionNotificationMsgWrapShouldShowPriorityNotification:(_Bool)arg1 byMsgSvrId:(unsigned long long)arg2;
- (_Bool)updateMainSessionNotificationMsgWrapIsClickPriorityNotificationInTL:(_Bool)arg1 byMsgSvrId:(unsigned long long)arg2;
- (_Bool)updateMainSessionMsgWrapOnDisappear:(id)arg1 exposeTimeMs:(unsigned int)arg2;
- (_Bool)updateMainSessionMsgWrapOnExpose:(id)arg1;
- (void)clearAllNotificationUnreadStatus;
- (void)deleteUnreadNotificationForSession:(id)arg1;
- (_Bool)setNotificationDelFlagForUsername:(id)arg1;
- (_Bool)setNotificationDelFlag:(id)arg1 msgWrap:(id)arg2;
- (_Bool)deleteNotification:(id)arg1;
- (_Bool)insertNotification:(id)arg1;
- (id)getNotificationByMsgSvrId:(unsigned long long)arg1;
- (id)getNotificationByMsgSvrId:(unsigned long long)arg1 userName:(id)arg2;
- (id)getNotificationFromCreateTime:(unsigned int)arg1 limit:(unsigned int)arg2 leftCount:(unsigned int *)arg3;
- (id)getUnreadNotificationFromCreateTime:(unsigned int)arg1 limit:(unsigned int)arg2 leftCount:(unsigned int *)arg3;
- (unsigned int)getNotificationUnreadCountByUserName:(id)arg1;
- (unsigned int)getNotificationUnreadCount;
- (id)getLastUnreadNotification;
- (void)reportInsertAtPosDupSeqId:(unsigned int)arg1;
- (void)reportEvent:(unsigned int)arg1;
- (unsigned long long)getDividerLineSequenceIdFromDB;
- (void)refreshDividerLineSequenceIdFromDB;
- (unsigned long long)getDividerLineSequenceId;
- (void)setDividerLineSequenceId:(unsigned long long)arg1;
- (_Bool)isExistRecommendMsgInMaxGroup;
- (_Bool)isExistCanvasAdCardInTL;
- (_Bool)updateAdContentWithMsgWrap:(id)arg1;
- (id)getFirstCanvasAdCard;
- (id)getFirstCanvasAdCardInMaxGroup;
- (id)getFirstUnexposedCanvasAdCard;
- (id)deleteMsgWhere:(struct Expression)arg1;
- (id)deleteAllCanvasAdCardCreatedBefore:(unsigned int)arg1;
- (id)deleteAllExpiredCanvasAdCard;
- (id)deleteAllExposedCanvasAdCard;
- (id)getMsgByCanvasId:(id)arg1;
- (id)convertTLDBMsg2CMsgWrap:(id)arg1;
- (id)convertTLDBMsg2CMsgWrap:(id)arg1 changeForDisplay:(_Bool)arg2;
- (id)convertTLDBMsgArr2CMsgWrapArr:(id)arg1;
- (void)resetMaxGroupBaseTime;
- (unsigned int)getMaxGroupBaseTime;
- (unsigned int)getMaxGroupRelativeTimeByCreateTime:(unsigned int)arg1;
- (void)deleteTooOldMsg:(unsigned int)arg1;
- (void)deleteSessionMsg:(id)arg1;
- (_Bool)deleteMsgByMsgId:(unsigned int)arg1;
- (void)deleteMsg:(id)arg1 msgWrap:(id)arg2;
- (_Bool)updateMsgWrapOnByteBuffer:(id)arg1;
- (_Bool)updateMsgWrapOnExpandStatusByMsgId:(unsigned int)arg1 isExpand:(_Bool)arg2;
- (_Bool)updateMsgWrapOnExpandStatus:(id)arg1;
- (_Bool)updateMainSessionMsgWrapOnDisappear:(id)arg1 posistion:(unsigned int)arg2 exposeTimeMs:(unsigned int)arg3;
- (_Bool)updateMainSessionMsgWrapOnExpose:(id)arg1 posistion:(unsigned int)arg2;
- (_Bool)updateMsgWrapOnValidExposeByMsgId:(unsigned int)arg1 isValidExpose:(_Bool)arg2;
- (_Bool)updateMsgWrapOnValidExposure:(id)arg1;
- (_Bool)updateMsgWrapOnExposureInTimeline:(id)arg1;
- (_Bool)updateMainSessionMsgWrapIsBrandResortNewDigestBold:(_Bool)arg1 byBrandTimelineMsgId:(unsigned int)arg2;
- (_Bool)resetMsgWrapOnHasResortStatus:(id)arg1;
- (_Bool)updateResortMsgDigestWithItemArr:(id)arg1 count:(unsigned int *)arg2;
- (_Bool)resortTLMsgWithResortItemArr:(id)arg1 maxGroupId:(unsigned int)arg2 rankSessionId:(id)arg3 pGetNewMsgArr:(id *)arg4;
- (id)getFirstUnExposeMsgUnderSeqId:(unsigned long long)arg1;
- (unsigned int)getMsgCountAboveSeqId:(unsigned long long)arg1;
- (_Bool)setStarContactMsgUnreadStatus:(id)arg1;
- (_Bool)clearStarContactMsgUnreadStatus:(id)arg1;
- (_Bool)clearTimelineUnreadFromSequenceId:(unsigned long long)arg1;
- (unsigned int)getTimelineUnreadMsgCount;
- (unsigned int)getStarUnreadMsgCount;
- (unsigned int)getTimelineMsgCountByCondition:(struct Expression)arg1;
- (_Bool)migrateMsgWrap:(id)arg1;
- (_Bool)updateMsgToPos:(id)arg1 pos:(unsigned int)arg2;
- (_Bool)__insertMsgWrap_insertDBMsg:(id)arg1;
- (id)__insertMsgWrap_getOrderParamsOrderByWeight:(unsigned int)arg1 createTime:(unsigned int)arg2 bCreateNewGroup:(_Bool)arg3 assignLimitWeight:(_Bool)arg4;
- (id)__insertMsgWrap_getOrderParamsOrderByPos:(unsigned int)arg1 groupId:(unsigned int)arg2 limitMaxWeight:(unsigned int)arg3 canInsertToOldGroup:(_Bool)arg4 createTime:(unsigned int)arg5;
- (id)__insertMsgWrap_getDBMsgFromMsgWrap:(id)arg1 isStar:(_Bool)arg2;
- (_Bool)insertMsgWrap:(id)arg1 config:(id)arg2;
- (id)genMsgOrderParamsWithInsertConfig:(id)arg1;
- (_Bool)isMsgOverLimitMaxWeightWithInsertConfig:(id)arg1;
- (_Bool)insertMsgWrap:(id)arg1 createNewGroup:(_Bool)arg2 topContact:(_Bool)arg3;
- (unsigned int)getTimelineMsgMaxGroupId;
- (id)getMsgForNewResortPlanWithMsgCount:(unsigned int)arg1 maxSequenceId:(unsigned long long)arg2 retrieveInvalidExposed:(_Bool)arg3 bAllNewMsgResorted:(_Bool *)arg4;
- (id)getMsgIdByRecCardByRecyleType:(unsigned int)arg1;
- (id)getMsgByRecCardId:(id)arg1;
- (struct Expression)recomendMsgCondition;
- (id)getMsgToSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 msgType:(long long)arg3;
- (id)getMsgDescendingBySequenceIdAtPos:(unsigned int)arg1;
- (id)getMsgBySeqId:(unsigned long long)arg1;
- (id)getMsgByMsgSvrId:(unsigned long long)arg1 userName:(id)arg2;
- (id)getMsgArrByMsgIdArr:(id)arg1;
- (id)getMsgByMsgId:(unsigned int)arg1;
- (id)getMsgForOldResortPlanBySequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 retrieveInvalidExposed:(_Bool)arg3 notInSeqIdArr:(id)arg4;
- (id)getMsgFromSequenceId:(unsigned long long)arg1 toCreateTime:(unsigned int)arg2 limit:(unsigned int)arg3 leftCount:(unsigned int *)arg4;
- (id)getMsgFromSequenceId:(unsigned long long)arg1 toSequenceId:(unsigned long long)arg2 limit:(unsigned int)arg3 leftCount:(unsigned int *)arg4;
- (id)getMsgToSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 leftCount:(unsigned int *)arg3 excludeMsgTypeArr:(id)arg4;
- (id)getMsgToSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 leftCount:(unsigned int *)arg3;
- (id)getMsgFromSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 validexposedType:(unsigned long long)arg3 mainSessionExposedType:(unsigned long long)arg4 includeMsgTypeArr:(id)arg5;
- (id)getMsgFromSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 exposedType:(unsigned long long)arg3 mainSessionExposedType:(unsigned long long)arg4 includeMsgTypeArr:(id)arg5;
- (id)getMsgFromSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 exposedType:(unsigned long long)arg3 includeMsgTypeArr:(id)arg4;
- (id)getMsgFromSeqId:(unsigned long long)arg1 toGroupId:(id)arg2 limit:(unsigned int)arg3 excludeMsgTypeArr:(id)arg4;
- (id)getMsgFromSequenceId:(unsigned long long)arg1 groupId:(id)arg2 limit:(unsigned int)arg3 excludeMsgTypeArr:(id)arg4;
- (id)getMsgFromSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 excludeMsgTypeArr:(id)arg3;
- (id)getMsgFromSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 leftCount:(unsigned int *)arg3;
- (unsigned int)getTimelineMsgMaxCreateTime;
- (id)getLastTimelineMsgByCreateTime:(id)arg1;
- (id)getLastTimelineMsgByCreateTime:(id)arg1 changeForDisplay:(_Bool)arg2;
- (id)getLastTimelineMsgByCreateTime;
- (id)getLastTimelineMsgBySequenceId;
- (unsigned long long)getTimelineMsgTotalCount;

@end

