//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSDate, NSNumber, NSString;

@interface _TtC6WeChat28KaraSessionFlowHistoryRecord
{
    MISSING_TYPE *session;
    MISSING_TYPE *origin;
    MISSING_TYPE *destination;
}

+ (struct Expression)identified:(id)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
+ (void)__wcdb_index_15:(void *)arg1;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (id)swift_destination;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)destination;
+ (id)swift_origin;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)origin;
+ (id)swift_session;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)session;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_dayOfTheWeek;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)dayOfTheWeek;
+ (id)swift_hourOfTheDay;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)hourOfTheDay;
+ (id)swift_dateThatRecalled;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)dateThatRecalled;
+ (id)swift_dateThatHappened;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)dateThatHappened;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) NSNumber *destination;
@property(nonatomic, retain) NSNumber *origin;
@property(nonatomic, copy) NSDate *session;

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

