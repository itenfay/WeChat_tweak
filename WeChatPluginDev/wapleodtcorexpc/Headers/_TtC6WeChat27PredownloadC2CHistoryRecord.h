//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSString, _TtC6WeChat17WCDBIntegerNumber;

@interface _TtC6WeChat27PredownloadC2CHistoryRecord
{
    MISSING_TYPE *svrID;
    MISSING_TYPE *localID;
    MISSING_TYPE *chatName;
    MISSING_TYPE *media;
}

+ (struct Expression)identified:(id)arg1;
+ (void)__wcdb_table_constraint_22:(void *)arg1;
+ (void)__wcdb_table_constraint_21:(void *)arg1;
+ (void)__wcdb_table_constraint_20:(void *)arg1;
+ (void)__wcdb_table_constraint_19:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (id)swift_media;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)media;
+ (void)__wcdb_column_constraint_16:(void *)arg1;
+ (id)swift_chatName;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)chatName;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (id)swift_localID;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)localID;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_svrID;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)svrID;
+ (void)__wcdb_index_10:(void *)arg1;
+ (id)swift_skipQuota;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)skipQuota;
+ (id)swift_sizeThatStartPredownload;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)sizeThatStartPredownload;
+ (id)swift_downloadRetries;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)downloadRetries;
+ (id)swift_downloadState;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)downloadState;
+ (id)swift_clientPriority;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)clientPriority;
+ (id)swift_serverPriority;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)serverPriority;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_size;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)size;
+ (void)__wcdb_column_constraint_1:(void *)arg1;
+ (id)swift_date;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)date;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, copy) NSString *media;
@property(nonatomic, copy) NSString *chatName;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *localID;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *svrID;

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

