//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact;

@interface BypMsgContentLogicController
{
    CBaseContact *_realChatContact;
    CBaseContact *_myRoleContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CBaseContact *myRoleContact; // @synthesize myRoleContact=_myRoleContact;
@property(retain, nonatomic) CBaseContact *realChatContact; // @synthesize realChatContact=_realChatContact;
- (void)CameraControllerDidTakeVideo:(id)arg1;
- (id)getMsgSendOpEntry;
- (_Bool)CanSendOriginalVideo;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (unsigned int)getInputLimitEmotionBufSize;
- (_Bool)CanSendEmoticonMessage;
- (_Bool)isMsgCanRevoke:(id)arg1;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (unsigned int)GetUnReadCount:(id)arg1;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)AdjustMsgFromToUserWithChatName:(id)arg1 MsgWrap:(id)arg2;
- (void)AdjustMsgBeforeSendWithChatName:(id)arg1 MsgWrap:(id)arg2;
- (void)AddEmoticonMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (id)getLeftBarButton;
- (id)GetUsrTitle;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (void)configWithSessionId:(id)arg1;
- (void)layoutVisibleCellsForUpdateContact:(id)arg1;

@end

