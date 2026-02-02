//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MultiTalkMessageItem
{
    _Bool isAutoIncrement;
    unsigned int localID;
    unsigned int createTime;
    unsigned int messageType;
    unsigned int hasGenWCMessage;
    NSString *groupID;
    NSString *clientGroupID;
    NSString *createUserName;
    NSString *messageContent;
    long long lastInsertedRowID;
}

+ (void)__wcdb_column_constraint_30:(void *)arg1;
+ (id)swift_hasGenWCMessage;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (const void *)hasGenWCMessage;
+ (id)swift_messageContent;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (const void *)messageContent;
+ (id)swift_messageType;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (const void *)messageType;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_createUserName;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)createUserName;
+ (id)swift_clientGroupID;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)clientGroupID;
+ (id)swift_groupID;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)groupID;
+ (id)swift_localID;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)localID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(nonatomic) unsigned int hasGenWCMessage; // @synthesize hasGenWCMessage;
@property(retain, nonatomic) NSString *messageContent; // @synthesize messageContent;
@property(nonatomic) unsigned int messageType; // @synthesize messageType;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName;
@property(retain, nonatomic) NSString *clientGroupID; // @synthesize clientGroupID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
@property(readonly, copy) NSString *description;
- (_Bool)isMessageItemValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

