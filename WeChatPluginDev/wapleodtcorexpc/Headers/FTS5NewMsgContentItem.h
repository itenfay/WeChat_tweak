//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5NewMsgContentItem : NSObject
{
    unsigned int _userNameId;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _reservedInt;
    NSString *_msg;
    NSString *_reservedText;
}

+ (void)__wcdb_column_constraint_24:(void *)arg1;
+ (void)__wcdb_column_constraint_23:(void *)arg1;
+ (void)__wcdb_column_constraint_22:(void *)arg1;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
+ (void)__wcdb_virtual_table_16:(void *)arg1;
+ (void)__wcdb_virtual_table_15:(void *)arg1;
+ (id)swift_reservedText;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)reservedText;
+ (id)swift_reservedInt;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)reservedInt;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)userNameId;
+ (id)swift_msg;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)msg;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(nonatomic) unsigned int reservedInt; // @synthesize reservedInt=_reservedInt;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId=_userNameId;
@property(readonly, copy) NSString *description;

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

