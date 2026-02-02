//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MultiTalkSessionItem
{
    _Bool isAutoIncrement;
    unsigned int localID;
    unsigned int lastMessageID;
    NSString *groupID;
    NSString *clientGroupID;
    NSString *createUserName;
    long long lastInsertedRowID;
}

+ (void)__wcdb_column_constraint_36:(void *)arg1;
+ (id)swift_lastMessageID;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (const void *)lastMessageID;
+ (id)swift_createUserName;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (const void *)createUserName;
+ (id)swift_clientGroupID;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (const void *)clientGroupID;
+ (id)swift_groupID;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (const void *)groupID;
+ (id)swift_localID;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
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

@property(nonatomic) unsigned int lastMessageID; // @synthesize lastMessageID;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName;
@property(retain, nonatomic) NSString *clientGroupID; // @synthesize clientGroupID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
@property(readonly, copy) NSString *description;
- (_Bool)isSessionItemValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

