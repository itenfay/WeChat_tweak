//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV;

@interface StatusDBImpl
{
    MemoryMappedKV *_mmkv;
}

+ (id)checkTextStateForAddOrModify:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
- (id)getSelfStateInteractData:(id)arg1;
- (id)getStatusInfoListCache;
- (void)constructStatusInfoCache;
- (void)setShowNewMessageReddot:(_Bool)arg1;
- (_Bool)showNewMessageReddot;
- (id)getLikeInfoWithTextStateId:(id)arg1 withLimit:(unsigned int)arg2;
- (void)updateCachedCommentCount:(unsigned long long)arg1 textStateId:(id)arg2;
- (void)updateCachedCommentCount:(id)arg1;
- (unsigned int)commentCountWithTextStateId:(id)arg1;
- (unsigned int)interactionCountWithTextStateId:(id)arg1;
- (id)selectTSModelWithStateId:(id)arg1;
- (id)selectTextStateWithStateId:(id)arg1;
- (id)getAllUnreadLatestNotifyInfos;
- (void)markAllNotifyRead;
- (void)onReceiveInfoWithTextStateId:(id)arg1;
- (unsigned int)getUnreadSystemNotifyCount;
- (unsigned int)getUnreadCommentCount;
- (unsigned int)getUnreadLikeCount;
- (unsigned int)getTotalUnreadMessageCount;
- (unsigned int)getTotalMessageCount;
- (id)getLatestNotifyInfosWithLoadCount:(unsigned int)arg1 isUnread:(_Bool)arg2 maxCreateTime:(unsigned int)arg3;
- (id)batchTextStateListWithOffset:(unsigned int)arg1 maxCount:(unsigned int)arg2;
- (void)batchClearExpireTextStates;
- (void)removeAllCachedNotifyUserNames;
- (void)cacheNotifyUserName:(id)arg1;
- (id)cachedNotifyUserNames;
- (_Bool)batchAddOrModifyTextStateList:(id)arg1;
- (void)markAllNewMessageRead;
- (void)clearAllMessage;
- (void)removeTextStateLikeInto:(id)arg1;
- (void)removeComemnt:(id)arg1 byMarkCommentDeleted:(_Bool)arg2;
- (_Bool)addTextStateLikeInfo:(id)arg1;
- (_Bool)addComment:(id)arg1;
- (_Bool)batchForceDeleteTextStateForUsername:(id)arg1;
- (_Bool)deleteTextStateForUsername:(id)arg1 sequence:(unsigned int)arg2;
- (_Bool)deleteTextStateForId:(id)arg1 sequence:(unsigned int)arg2;
- (id)textStateListForUsername:(id)arg1 maxCount:(unsigned int)arg2;
- (_Bool)setReadForTextStateId:(id)arg1 topicId:(id)arg2 expiredTime:(unsigned int)arg3 username:(id)arg4;
- (_Bool)isTextStateRead:(id)arg1;
- (id)mostRecentTextStateForUsername:(id)arg1;
- (_Bool)addOrModifyTextState:(id)arg1 deleteExist:(_Bool)arg2 checkSequence:(_Bool)arg3;
- (id)getAllCommentsWithLimit:(unsigned int)arg1 maxCreateTime:(unsigned int)arg2;
- (id)getAllLikeInfoLimit:(unsigned int)arg1 maxCreateTime:(unsigned int)arg2;
- (id)getAllUnreadCommentInfoWithLimit:(unsigned int)arg1;
- (id)getAllUnreadLikeInfo;
- (void)markAllCommentInfoRead;
- (void)markAllLikeInfoRead;
- (void)removeAllComments;
- (void)removeAllTextStateLikeInfos;
- (id)getAllLikeInfoWithTime:(unsigned int)arg1 withLimit:(unsigned int)arg2;
- (id)getAllUnreadReferenceInfo;
- (_Bool)deleteTextStateForId:(id)arg1;
- (_Bool)addTextStateReferenceInfo:(id)arg1;
- (id)getReferenceInfoWithTextStateId:(id)arg1;
- (void)markAllReferenceRead;
- (void)removeAllTextStateReferenceInfos;
- (void)removeTextStateReferenceInto:(id)arg1;

@end

