//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCDurationLogItem
{
    _Bool isAutoIncrement;
    unsigned int localId;
    unsigned int activeStartTime;
    unsigned int activeEndTime;
    long long lastInsertedRowID;
}

+ (id)stringFromItems:(id)arg1;
+ (id)logItemFromDescription:(id)arg1;
+ (id)logItem;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_activeEndTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)activeEndTime;
+ (id)swift_activeStartTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)activeStartTime;
+ (id)swift_localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)localId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(nonatomic) unsigned int activeEndTime; // @synthesize activeEndTime;
@property(nonatomic) unsigned int activeStartTime; // @synthesize activeStartTime;
@property(nonatomic) unsigned int localId; // @synthesize localId;
@property(readonly, copy) NSString *description;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

