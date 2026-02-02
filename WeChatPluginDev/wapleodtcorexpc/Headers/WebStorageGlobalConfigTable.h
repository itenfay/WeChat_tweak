//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebStorageGlobalConfigTable
{
    unsigned int _realWeight;
    NSString *_appId;
    NSString *_weightStr;
}

+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (id)swift_realWeight;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)realWeight;
+ (id)swift_weightStr;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)weightStr;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int realWeight; // @synthesize realWeight=_realWeight;
@property(retain, nonatomic) NSString *weightStr; // @synthesize weightStr=_weightStr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

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

