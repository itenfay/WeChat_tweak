//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ChatRoomMsgHistoryObj
{
    unsigned int _msgType;
    unsigned int _createTime;
    unsigned long long _historyId;
    long long _serverID;
    NSString *_chatRoomName;
}

+ (id)generateHistoryObjWithHistoryMsgsInfo:(id)arg1 messageWrap:(id)arg2;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (id)swift_msgType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)msgType;
+ (id)swift_chatRoomName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)chatRoomName;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_serverID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)serverID;
+ (id)swift_historyId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)historyId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) long long serverID; // @synthesize serverID=_serverID;
@property(nonatomic) unsigned long long historyId; // @synthesize historyId=_historyId;

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

