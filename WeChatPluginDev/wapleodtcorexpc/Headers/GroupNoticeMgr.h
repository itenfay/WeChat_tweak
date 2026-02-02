//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GroupNoticeDB, NSString;

@interface GroupNoticeMgr
{
    CDUnknownBlockType m_updateCompletionHandler;
    GroupNoticeDB *_groupNoticeDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GroupNoticeDB *groupNoticeDB; // @synthesize groupNoticeDB=_groupNoticeDB;
- (void)p_cleanTmpResource:(id)arg1;
- (void)OnGetChatRoomInfo:(id)arg1 Info:(id)arg2 showBanner:(_Bool)arg3;
- (_Bool)removeOldRevokeMessagesBefore:(unsigned int)arg1;
- (_Bool)insertRevokeMessage:(id)arg1;
- (id)getRevokeMsgBySourceId:(id)arg1;
- (id)getRevokeMsgByAnnouncementId:(id)arg1;
- (void)onRevokeMsgSuccess:(id)arg1;
- (void)revokeAnnouncementMsg:(id)arg1;
- (_Bool)canRevokeMsg;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)removeRelationWithUserName:(id)arg1;
- (void)removeRelationWithSourceId:(id)arg1;
- (unsigned int)getMsgLocalIdWithSourceId:(id)arg1;
- (void)addRelationWithSourceId:(id)arg1 msgLocalId:(unsigned int)arg2 userName:(id)arg3;
- (void)onUploadGroupNoticeItem:(id)arg1 success:(_Bool)arg2;
- (id)getCurrentItem:(id)arg1;
- (_Bool)isHistoryItem:(id)arg1;
- (_Bool)canMigrateResource;
- (long long)getMaxResourceSize;
- (void)deleteResourceWithChatName:(id)arg1;
- (void)deleteResourceWithMsg:(id)arg1;
- (_Bool)SetChatRoomDesc:(id)arg1 Item:(id)arg2 Flag:(unsigned int)arg3;
- (void)updateItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

