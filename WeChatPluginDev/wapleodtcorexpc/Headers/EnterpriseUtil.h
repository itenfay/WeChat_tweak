//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EnterpriseUtil
{
}

+ (void)asyncGenerateInviteColleagesMsg:(id)arg1 resultMsgBlock:(CDUnknownBlockType)arg2;
+ (id)fillMsgSource:(id)arg1 chatId:(id)arg2 brand:(id)arg3;
+ (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
+ (id)FormTextMsg:(id)arg1 withText:(id)arg2;
+ (id)getEnterpriseSenderOfMsgWrap:(id)arg1;
+ (id)getEnterpriseChatBrandUserName:(id)arg1;
+ (_Bool)isChatRoomMsg:(id)arg1;
+ (_Bool)isMsgWrapAtAll:(id)arg1;
+ (_Bool)isMsgWrapFromMe:(id)arg1;
+ (_Bool)isMsgWrapAtMe:(id)arg1;
+ (id)batchConvertEnterpriseMsgDBItem2MsgWrap:(id)arg1;
+ (id)convertEnterpriseMsgDBItem2MsgWrap:(id)arg1;
+ (id)convertMsgWrap2EnterpriseDBItem:(id)arg1 brandUserName:(id)arg2;
+ (id)convertAddMemberPageResToContactList:(id)arg1 brand:(id)arg2;
+ (id)convertAddMemberPageResToContact:(id)arg1 extContact:(id)arg2 brand:(id)arg3;
+ (id)convertCreateChatPageResToContactList:(id)arg1 brand:(id)arg2;
+ (id)convertCreateChatPageResToContact:(id)arg1 brand:(id)arg2;
+ (id)convertSvrFullBizChat2EnterpirseContact:(id)arg1;
+ (id)GetPathOfMesAudioTrans:(id)arg1 LocalID:(unsigned int)arg2 Brand:(id)arg3 DocPath:(id)arg4;
+ (id)GetPathOfMesAudio:(id)arg1 LocalID:(unsigned int)arg2 Brand:(id)arg3 DocPath:(id)arg4;
+ (id)getPathOfEnterpriseMessageDB:(id)arg1;
+ (id)getEnterpriseChatCachePath;

@end

