//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameLifeContact, NSString;

@interface GameLifeConversation
{
    unsigned int _digestFlag;
    NSString *talker;
    NSString *selfUsername;
    NSString *digest;
    NSString *_digestPrefix;
    GameLifeContact *_gameLifeContact;
}

+ (void)__wcdb_column_constraint_17:(void *)arg1;
+ (id)swift_digestPrefix;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)digestPrefix;
+ (id)swift_digestFlag;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)digestFlag;
+ (id)swift_digest;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)digest;
+ (id)swift_selfUsername;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)selfUsername;
+ (id)swift_talker;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)talker;
+ (id)swift_jumpMsgLocalId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)jumpMsgLocalId;
+ (id)swift_outUnreadMsgTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)outUnreadMsgTime;
+ (id)swift_sessionUnTopTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)sessionUnTopTime;
+ (id)swift_pbLastMessage;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)pbLastMessage;
+ (id)swift_sessionTopTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)sessionTopTime;
+ (id)swift_outUnreadCount;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)outUnreadCount;
+ (id)swift_sessionFlag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)sessionFlag;
+ (id)swift_draftMsgTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)draftMsgTime;
+ (id)swift_draftMsg;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)draftMsg;
+ (id)swift_lastMsgUpdateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)lastMsgUpdateTime;
+ (id)swift_unreadCount;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)unreadCount;
+ (id)swift_sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)sessionId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) GameLifeContact *gameLifeContact; // @synthesize gameLifeContact=_gameLifeContact;
@property(retain, nonatomic) NSString *digestPrefix; // @synthesize digestPrefix=_digestPrefix;
@property(nonatomic) unsigned int digestFlag; // @synthesize digestFlag=_digestFlag;
@property(retain, nonatomic) NSString *digest; // @synthesize digest;
@property(retain, nonatomic) NSString *selfUsername; // @synthesize selfUsername;
@property(retain, nonatomic) NSString *talker; // @synthesize talker;
@property(readonly, copy) NSString *description;
- (_Bool)isHistory;
- (unsigned int)getReportSessionType;
- (void)bindWithGameLifeContact:(id)arg1;
- (void)updateDigestFlag:(id)arg1;
- (void)setPbLastMessage:(id)arg1;
- (void)setLastMessage:(id)arg1;
- (void)updateWithNewMsg:(id)arg1 needUpdateUnreadCount:(_Bool)arg2;
- (id)initWithSessionId:(id)arg1 talker:(id)arg2 selfUsername:(id)arg3 lastMsg:(id)arg4 needUpdateUnreadCount:(_Bool)arg5;

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

