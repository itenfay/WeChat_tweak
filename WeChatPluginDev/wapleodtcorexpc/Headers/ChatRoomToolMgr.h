//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatRoomFamilyEdcationDataPB, NSDictionary, NSRecursiveLock;

@interface ChatRoomToolMgr
{
    NSRecursiveLock *m_oLock;
    NSDictionary *m_nativeWeAppIconUrlDic;
    NSDictionary *m_nativeWeAppNickNameDic;
    ChatRoomFamilyEdcationDataPB *m_chatRoomFamilyEdcationData;
}

- (void).cxx_destruct;
- (void)onUpdateChatRoomtToolWeAppInfoListWithUserName:(id)arg1 roomToolsWxApps:(id)arg2 withResult:(unsigned int)arg3 errorMsg:(id)arg4;
- (long long)getGroupRoleWithGroupUserName:(id)arg1;
- (void)reportChatRoomToolEditWithGroupUserName:(id)arg1 andExitType:(unsigned long long)arg2 andTopBefore:(long long)arg3 andTopAfter:(long long)arg4;
- (void)reportChatRoomToolClickWeApptWithGroupUserName:(id)arg1 weAppInfo:(id)arg2 isTop:(_Bool)arg3;
- (void)reportChatRoomToolAttachmentClickWithGroupUserName:(id)arg1 andTopCount:(long long)arg2 andUsedCount:(long long)arg3 topAppListStr:(id)arg4 usedAppListStr:(id)arg5;
- (void)reportChatRoomToolAttachmentExposureWithGroupUserName:(id)arg1;
- (id)getNativeChatRoomToolWeAppInfo:(id)arg1;
- (_Bool)isC2CAAMsgWrap:(id)arg1;
- (void)updateChatRoomtToolWeAppInfoListFromRoomToolsWxApp:(id)arg1 roomToolsWxApp:(id)arg2;
- (id)getWeAppInfoListWithUserName:(id)arg1;
- (_Bool)updateChatRoomtToolWeAppInfoListWithUserName:(id)arg1 weAppInfoList:(id)arg2;
- (id)getMMKVUpdateChatRoomtToolWeAppHadGetContactArKey;
- (void)setUpdateFamilyChatRoomtToolHadGetContactDetail:(id)arg1;
- (_Bool)checkUpdateFamilyChatRoomtToolHadNeedGetContactDetail:(id)arg1;
- (id)genChatRoomToolWeAppInfoWithMessageWrap:(id)arg1;
- (_Bool)isWeAppMsgWithMessageWrap:(id)arg1;
- (id)getNativeWeAppInfoList;
- (id)getNickNameWithAppUserName:(id)arg1;
- (id)getIconUrlWithAppUserName:(id)arg1;
- (_Bool)isNativeWeAppWithAppUserName:(id)arg1;
- (_Bool)isNativeWeApp:(id)arg1;
- (void)initData;
- (void)initRegister;
- (id)init;

@end

