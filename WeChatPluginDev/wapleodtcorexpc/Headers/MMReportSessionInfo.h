//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMReportSessionInfo
{
    _Bool _bMuteChat;
    _Bool _bTopChat;
    _Bool _bNewChat;
    _Bool _bHasReply;
    unsigned int _unreadCount;
    unsigned int _chatIndex;
    unsigned int _enterTime;
    unsigned int _leaveTime;
    NSString *_username;
}

+ (void)initialize;
+ (void)PBArrayAdd_chatIndex;
+ (void)PBArrayAdd_bTopChat;
+ (void)PBArrayAdd_bMuteChat;
+ (void)PBArrayAdd_unreadCount;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(nonatomic) _Bool bHasReply; // @synthesize bHasReply=_bHasReply;
@property(nonatomic) unsigned int leaveTime; // @synthesize leaveTime=_leaveTime;
@property(nonatomic) unsigned int enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool bNewChat; // @synthesize bNewChat=_bNewChat;
@property(nonatomic) unsigned int chatIndex; // @synthesize chatIndex=_chatIndex;
@property(nonatomic) _Bool bTopChat; // @synthesize bTopChat=_bTopChat;
@property(nonatomic) _Bool bMuteChat; // @synthesize bMuteChat=_bMuteChat;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)initWithSessionInfo:(id)arg1 withChatIndex:(unsigned int)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

