//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MultiTalkMemberList, NSString;

@interface MultiTalkContactItem
{
    _Bool isAutoIncrement;
    unsigned int localID;
    int routID;
    unsigned int memberListCount;
    NSString *groupID;
    NSString *clientGroupID;
    NSString *wxGroupID;
    MultiTalkMemberList *contactMemberList;
    NSString *createUserName;
    NSString *nickName;
    long long lastInsertedRowID;
}

+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (id)swift_memberListCount;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)memberListCount;
+ (id)swift_nickName;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)nickName;
+ (id)swift_createUserName;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)createUserName;
+ (id)swift_contactMemberList;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)contactMemberList;
+ (id)swift_routID;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)routID;
+ (id)swift_wxGroupID;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)wxGroupID;
+ (id)swift_clientGroupID;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)clientGroupID;
+ (id)swift_groupID;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)groupID;
+ (id)swift_localID;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
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

@property(nonatomic) unsigned int memberListCount; // @synthesize memberListCount;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName;
@property(retain, nonatomic) MultiTalkMemberList *contactMemberList; // @synthesize contactMemberList;
@property(nonatomic) int routID; // @synthesize routID;
@property(retain, nonatomic) NSString *wxGroupID; // @synthesize wxGroupID;
@property(retain, nonatomic) NSString *clientGroupID; // @synthesize clientGroupID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
@property(readonly, copy) NSString *description;
- (_Bool)isContactItemValid;
- (id)getContactDisplayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

