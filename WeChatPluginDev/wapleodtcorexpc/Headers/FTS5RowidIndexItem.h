//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5RowidIndexItem : NSObject
{
    unsigned int _userNameId;
    unsigned int _msgLocalId;
    unsigned int _tableId;
    long long _indexRowid;
}

+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (id)swift_indexRowid;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)indexRowid;
+ (id)swift_tableId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)tableId;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)userNameId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) long long indexRowid; // @synthesize indexRowid=_indexRowid;
@property(nonatomic) unsigned int tableId; // @synthesize tableId=_tableId;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId=_userNameId;

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

