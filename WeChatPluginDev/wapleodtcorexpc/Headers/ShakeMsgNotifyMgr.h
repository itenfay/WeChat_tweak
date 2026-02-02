//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol ShakeMsgNotifyMgrDelegate;

@interface ShakeMsgNotifyMgr
{
    NSMutableArray *_messageQueue;
    NSMutableArray *_unreadMsgQueue;
    _Bool _messageLoaded;
    id <ShakeMsgNotifyMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ShakeMsgNotifyMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)hasSameMsg:(id)arg1;
- (void)insertMsgItem:(id)arg1;
- (void)deleteAllMessages;
- (void)deleteMessageItem:(id)arg1;
- (void)markMessageListRead:(id)arg1;
- (id)getMessagesFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (id)getLastestUnreadMessage;
- (id)getUnreadMsgPidDesc;
- (id)getUnreadMessages;
- (unsigned long long)getUnreadMessageCount;
- (_Bool)hasUnreadMessages;
- (void)saveMessage;
- (void)tryLoadMessage;
- (void)dealloc;
- (id)init;

@end

