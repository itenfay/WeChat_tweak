//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EnterpriseSessionInfo
{
    unsigned int atMeCount;
    unsigned int newUnreadCount;
    unsigned int newAtMeCount;
    unsigned int sessionTopTime;
    unsigned int lastExposeTime;
    unsigned int chatType;
    unsigned int _atAllCount;
    unsigned int _newAtAllCount;
    NSString *_brandUserName;
}

+ (id)sessionInfoWithContact:(id)arg1 lastMessage:(id)arg2 Brand:(id)arg3;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (id)swift_newAtAllCount;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)newAtAllCount;
+ (id)swift_atAllCount;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)atAllCount;
+ (id)swift_lastExposeTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)lastExposeTime;
+ (id)swift_sessionTopTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)sessionTopTime;
+ (id)swift_newAtMeCount;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)newAtMeCount;
+ (id)swift_newUnreadCount;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)newUnreadCount;
+ (id)swift_atMeCount;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)atMeCount;
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
@property(retain, nonatomic) NSString *brandUserName; // @synthesize brandUserName=_brandUserName;
@property(nonatomic) unsigned int newAtAllCount; // @synthesize newAtAllCount=_newAtAllCount;
@property(nonatomic) unsigned int atAllCount; // @synthesize atAllCount=_atAllCount;
@property(nonatomic) unsigned int chatType; // @synthesize chatType;
@property(nonatomic) unsigned int lastExposeTime; // @synthesize lastExposeTime;
- (void)setSessionTopTime:(unsigned int)arg1;
- (unsigned int)sessionTopTime;
@property(nonatomic) unsigned int newAtMeCount; // @synthesize newAtMeCount;
@property(nonatomic) unsigned int newUnreadCount; // @synthesize newUnreadCount;
@property(nonatomic) unsigned int atMeCount; // @synthesize atMeCount;
- (void)clearNewAtAllCount;
- (void)incNewAtAllCount;
- (void)clearAtAllCount;
- (void)incAtAllCount;
- (void)clearNewAtMeCount;
- (void)incNewAtMeCount;
- (void)clearAtMeCount;
- (void)incAtMeCount;
- (void)clearNewUnreadCount;
- (void)incNewUnreadCount;
- (void)clearUnreadCount;
- (void)incUnreadCount;
- (_Bool)isSessionTop;
- (unsigned int)GetUnReadCount:(id)arg1;
- (id)genLastMessage;
- (id)genContact;
- (void)fixCount;
- (void)checkExposeTime:(unsigned int)arg1;
- (void)updateNewUnreadCount;
- (void)updateExposeTime;
- (void)updateUnreadCount;
- (void)updateLastMessage;
- (_Bool)updateContactAndTopTime;
- (void)updateContactAndDraft;
- (void)updateContact;
- (id)contact;
- (id)lastMessage;
- (id)initWithContact:(id)arg1 lastMessage:(id)arg2 Brand:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

