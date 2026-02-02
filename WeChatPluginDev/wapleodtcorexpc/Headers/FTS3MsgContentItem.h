//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS3MsgContentItem : NSObject
{
    unsigned int userNameId;
    unsigned int msgLocalId;
    unsigned int createTime;
    unsigned int _reservedInt;
    NSString *msg;
    NSString *_reservedText;
}

+ (void)__wcdb_column_constraint_38:(void *)arg1;
+ (void)__wcdb_column_constraint_37:(void *)arg1;
+ (void)__wcdb_column_constraint_36:(void *)arg1;
+ (void)__wcdb_table_constraint_35:(void *)arg1;
+ (void)__wcdb_table_constraint_34:(void *)arg1;
+ (void)__wcdb_table_constraint_33:(void *)arg1;
+ (void)__wcdb_virtual_table_32:(void *)arg1;
+ (void)__wcdb_virtual_table_31:(void *)arg1;
+ (id)swift_reservedText;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (const void *)reservedText;
+ (id)swift_reservedInt;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (const void *)reservedInt;
+ (id)swift_msg;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (const void *)msg;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)userNameId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(nonatomic) unsigned int reservedInt; // @synthesize reservedInt=_reservedInt;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId;

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

