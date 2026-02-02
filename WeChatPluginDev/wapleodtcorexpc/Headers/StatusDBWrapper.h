//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTextStateDB;

@interface StatusDBWrapper
{
    _Bool _useAffDB;
    _Bool _affDBTransferFinish;
    WCTextStateDB *_platformDB;
    WCTextStateDB *_affDB;
}

+ (id)checkTextStateForAddOrModify:(id)arg1;
- (void).cxx_destruct;
@property _Bool affDBTransferFinish; // @synthesize affDBTransferFinish=_affDBTransferFinish;
@property _Bool useAffDB; // @synthesize useAffDB=_useAffDB;
@property(retain, nonatomic) WCTextStateDB *affDB; // @synthesize affDB=_affDB;
@property(retain, nonatomic) WCTextStateDB *platformDB; // @synthesize platformDB=_platformDB;
- (id)getAllUnreadReferenceInfo;
- (void)setShowNewMessageReddot:(_Bool)arg1;
- (_Bool)showNewMessageReddot;
- (id)cachedNotifyUserNames;
- (void)cacheNotifyUserName:(id)arg1;
- (void)removeAllCachedNotifyUserNames;
- (void)updateCachedCommentCount:(unsigned long long)arg1 textStateId:(id)arg2;
- (void)updateCachedCommentCount:(id)arg1;
- (id)getLikeInfoWithTextStateId:(id)arg1 withLimit:(unsigned int)arg2;
- (void)removeTextStateLikeInto:(id)arg1;
- (id)getAllUnreadLikeInfo;
- (id)getAllUnreadCommentInfoWithLimit:(unsigned int)arg1;
- (_Bool)addTextStateLikeInfo:(id)arg1;
- (_Bool)addComment:(id)arg1;
- (id)getAllLikeInfoWithTime:(unsigned int)arg1 withLimit:(unsigned int)arg2;
- (unsigned int)interactionCountWithTextStateId:(id)arg1;
- (void)markAllNotifyRead;
- (void)markAllNewMessageRead;
- (void)markAllCommentInfoRead;
- (unsigned int)getUnreadSystemNotifyCount;
- (unsigned int)commentCountWithTextStateId:(id)arg1;
- (id)getLatestNotifyInfosWithLoadCount:(unsigned int)arg1 isUnread:(_Bool)arg2 maxCreateTime:(unsigned int)arg3;
- (id)getAllUnreadLatestNotifyInfos;
- (void)markAllLikeInfoRead;
- (void)clearAllMessage;
- (void)removeComemnt:(id)arg1 byMarkCommentDeleted:(_Bool)arg2;
- (unsigned int)getTotalMessageCount;
- (unsigned int)getUnreadCommentCount;
- (unsigned int)getUnreadLikeCount;
- (unsigned int)getTotalUnreadMessageCount;
- (_Bool)addTextStateReferenceInfo:(id)arg1;
- (id)getReferenceInfoWithTextStateId:(id)arg1;
- (void)markAllReferenceRead;
- (void)removeAllTextStateReferenceInfos;
- (void)removeTextStateReferenceInto:(id)arg1;
- (id)getStatusInfoListCache;
- (id)selectTSModelWithStateId:(id)arg1;
- (void)constructStatusInfoCache;
- (id)getSelfStateInteractData:(id)arg1;
- (_Bool)batchTextStateDataToAffDB:(id)arg1;
- (id)batchTextStateListForTransform:(unsigned int)arg1 maxCount:(unsigned int)arg2;
- (_Bool)addSelfTextState:(id)arg1;
- (id)getSelfTextState;
- (_Bool)checkUseAffDB;
- (void)batchClearExpireTextStates;
- (id)textStateListForUsername:(id)arg1 maxCount:(unsigned int)arg2;
- (id)batchTextStateListWithOffset:(unsigned int)arg1 maxCount:(unsigned int)arg2;
- (_Bool)isTextStateRead:(id)arg1;
- (id)mostRecentTextStateForUsername:(id)arg1;
- (_Bool)setReadForTextStateId:(id)arg1 topicId:(id)arg2 expiredTime:(unsigned int)arg3 username:(id)arg4;
- (_Bool)batchAddOrModifyTextStateList:(id)arg1;
- (_Bool)batchForceDeleteTextStateForUsername:(id)arg1;
- (_Bool)deleteTextStateForUsername:(id)arg1 sequence:(unsigned int)arg2;
- (_Bool)deleteTextStateForId:(id)arg1 sequence:(unsigned int)arg2;
- (_Bool)deleteTextStateForId:(id)arg1;
- (_Bool)addOrModifyTextState:(id)arg1 deleteExist:(_Bool)arg2 checkSequence:(_Bool)arg3;
- (void)onServiceInit;

@end

