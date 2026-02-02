//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSString, _TtC6WeChat17WCDBIntegerNumber;

@interface _TtC6WeChat29KaraGroupMessageHistoryRecord
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *sender;
    MISSING_TYPE *isSenderWeComContact;
    MISSING_TYPE *isWeComGroupChat;
}

+ (struct Expression)identified:(id)arg1;
+ (void)__wcdb_index_49:(void *)arg1;
+ (void)__wcdb_index_48:(void *)arg1;
+ (void)__wcdb_index_47:(void *)arg1;
+ (void)__wcdb_index_46:(void *)arg1;
+ (void)__wcdb_index_45:(void *)arg1;
+ (void)__wcdb_column_constraint_44:(void *)arg1;
+ (void)__wcdb_column_constraint_43:(void *)arg1;
+ (void)__wcdb_column_constraint_42:(void *)arg1;
+ (void)__wcdb_column_constraint_41:(void *)arg1;
+ (void)__wcdb_table_constraint_40:(void *)arg1;
+ (void)__wcdb_table_constraint_39:(void *)arg1;
+ (void)__wcdb_table_constraint_38:(void *)arg1;
+ (id)swift_isWeComGroupChat;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (const void *)isWeComGroupChat;
+ (id)swift_isSenderWeComContact;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (const void *)isSenderWeComContact;
+ (id)swift_sender;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (const void *)sender;
+ (id)swift_localID;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (const void *)localID;
+ (id)swift_session;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (const void *)session;
+ (id)swift_svrid;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (const void *)svrid;
+ (void)__wcdb_index_31:(void *)arg1;
+ (void)__wcdb_index_30:(void *)arg1;
+ (void)__wcdb_index_29:(void *)arg1;
+ (void)__wcdb_column_constraint_28:(void *)arg1;
+ (void)__wcdb_column_constraint_27:(void *)arg1;
+ (void)__wcdb_column_constraint_26:(void *)arg1;
+ (id)swift_dayOfTheWeek;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)dayOfTheWeek;
+ (id)swift_hourOfTheDay;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)hourOfTheDay;
+ (id)swift_dateThatRecalled;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)dateThatRecalled;
+ (id)swift_dateThatHappened;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)dateThatHappened;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic) _Bool isWeComGroupChat; // @synthesize isWeComGroupChat;
@property(nonatomic) _Bool isSenderWeComContact; // @synthesize isSenderWeComContact;
@property(nonatomic, copy) NSString *sender;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *localID;
@property(nonatomic, copy) NSString *session;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *svrid;

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

