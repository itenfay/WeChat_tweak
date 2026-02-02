//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, StatusLogicCommentManager, StatusStorageManager, StatusXmlParseManager;

@interface StatusAffManager
{
    StatusLogicCommentManager *_affStatusLogicCommentManager;
    StatusXmlParseManager *_statusXmlParseManager;
    StatusStorageManager *_manager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StatusStorageManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) StatusXmlParseManager *statusXmlParseManager; // @synthesize statusXmlParseManager=_statusXmlParseManager;
@property(retain, nonatomic) StatusLogicCommentManager *affStatusLogicCommentManager; // @synthesize affStatusLogicCommentManager=_affStatusLogicCommentManager;
- (int)getMMKV:(id)arg1 defValue:(int)arg2;
- (_Bool)setMMKV:(id)arg1 value:(int)arg2;
- (void)ontestComplete:(unsigned int)arg1 err:(int)arg2;
- (void)oncleanExpireDBComplete:(unsigned int)arg1 rsp:(id)arg2;
- (void)cleanExpireDB:(long long)arg1 deleteFlag:(_Bool)arg2 keepSelf:(_Bool)arg3;
- (id)updateStatusInteractData:(id)arg1 data:(id)arg2;
- (id)deleteStatusInfoWithUsername:(id)arg1 sequence:(unsigned int)arg2;
- (id)deleteStatusInfoWithId:(id)arg1 sequence:(unsigned int)arg2;
- (id)selectStatusInfoWithStatusId:(id)arg1;
- (id)selectStatusInfoWithUsername:(id)arg1 count:(int)arg2 offset:(int)arg3 timeMsLimit:(long long)arg4;
- (id)insertOrReplaceInfo:(id)arg1;
- (id)getStatusInfoListCache;
- (void)constructStatusInfoCache;
- (void)onServiceInit;
- (void)initAffManager;
- (unsigned int)getToNotifyCount;
- (_Bool)markAllMessageNotify;
- (id)getMessageByCondition:(unsigned int)arg1 isUnread:(_Bool)arg2 maxCreateTime:(unsigned long long)arg3;
- (id)getAllMessage:(_Bool)arg1;
- (unsigned int)getCommentCount:(id)arg1;
- (_Bool)clearAllMessage;
- (_Bool)markAllMessageRead;
- (_Bool)deleteMessage:(id)arg1;
- (_Bool)removeComment:(id)arg1 sequence:(unsigned long long)arg2;
- (_Bool)insertComment:(id)arg1;
- (id)getLikeInfoByStatusId:(id)arg1 limit:(unsigned int)arg2;
- (_Bool)deleteLikeByCommentId:(id)arg1 sequence:(unsigned long long)arg2;
- (_Bool)insertLike:(id)arg1;
- (_Bool)performSelfLike:(id)arg1 isLike:(_Bool)arg2;
- (_Bool)isLikeTextState:(id)arg1;
- (id)parseStatusCgiData:(id)arg1 userName:(id)arg2;
- (id)parseNewModifyStatusXml:(id)arg1;
- (id)parseStatusModelXml:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

