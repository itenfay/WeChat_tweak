//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WASessionInfo
{
}

+ (id)baseSessionInfoWithUsrName:(id)arg1 contact:(id)arg2 lastMessage:(id)arg3;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
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
- (void)clearOutUnreadCount;
- (void)updateOutUnreadCount;
- (void)updateSessionInfo;
- (id)genContact;
- (void)setContact:(id)arg1;

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

