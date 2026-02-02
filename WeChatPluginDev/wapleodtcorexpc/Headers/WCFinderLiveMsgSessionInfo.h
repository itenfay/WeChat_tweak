//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveMsgSessionInfo
{
    unsigned int _liveIdentity;
    unsigned int _comparePriority;
    NSString *realChatUserName;
    NSString *selfUserName;
    unsigned long long _liveId;
    NSString *_selfEncryptedUsername;
}

+ (id)GetSelfUserNameFromSession:(id)arg1;
+ (void)__wcdb_index_20:(void *)arg1;
+ (void)__wcdb_index_19:(void *)arg1;
+ (void)__wcdb_index_18:(void *)arg1;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
+ (id)swift_jumpMsgLocalId;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)jumpMsgLocalId;
+ (id)swift_outUnreadMsgTime;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)outUnreadMsgTime;
+ (id)swift_sessionUnTopTime;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)sessionUnTopTime;
+ (id)swift_pbLastMessage;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)pbLastMessage;
+ (id)swift_sessionTopTime;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)sessionTopTime;
+ (id)swift_outUnreadCount;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)outUnreadCount;
+ (id)swift_sessionFlag;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)sessionFlag;
+ (id)swift_draftMsgTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)draftMsgTime;
+ (id)swift_draftMsg;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)draftMsg;
+ (id)swift_lastMsgUpdateTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)lastMsgUpdateTime;
+ (id)swift_unreadCount;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)unreadCount;
+ (id)swift_realChatUserName;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)realChatUserName;
+ (id)swift_selfEncryptedUsername;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)selfEncryptedUsername;
+ (id)swift_selfUserName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)selfUserName;
+ (id)swift_liveIdentity;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)liveIdentity;
+ (id)swift_liveId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)liveId;
+ (id)swift_sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)sessionId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int comparePriority; // @synthesize comparePriority=_comparePriority;
@property(retain, nonatomic) NSString *selfEncryptedUsername; // @synthesize selfEncryptedUsername=_selfEncryptedUsername;
@property(nonatomic) unsigned int liveIdentity; // @synthesize liveIdentity=_liveIdentity;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *selfUserName; // @synthesize selfUserName;
@property(retain, nonatomic) NSString *realChatUserName; // @synthesize realChatUserName;
@property(readonly, copy) NSString *description;
- (void)updateWithNewMsg:(id)arg1 needUpdateUnreadCount:(_Bool)arg2;
- (void)setPbLastMessage:(id)arg1;
- (void)setLastMessage:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithSessionId:(id)arg1 liveId:(unsigned long long)arg2 selfUserName:(id)arg3 liveIdentity:(unsigned int)arg4 realChatUserName:(id)arg5 selfEncryptedUsername:(id)arg6 lastMsg:(id)arg7 needUpdateUnreadCount:(_Bool)arg8;
- (id)initWithPbSessionInfo:(id)arg1 realChatUserName:(id)arg2 selfEncryptedUsername:(id)arg3 lastMsg:(id)arg4 needUpdateUnreadCount:(_Bool)arg5;
- (id)initWithPbSessionInfo:(id)arg1 realChatUserName:(id)arg2 selfEncryptedUsername:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

