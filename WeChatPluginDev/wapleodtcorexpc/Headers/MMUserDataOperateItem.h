//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMUserDataOperateItem
{
    unsigned int _dataType;
    unsigned int _businessType;
    unsigned long long _operateTime;
}

+ (id)itemWithBusinessType:(unsigned int)arg1 dataType:(unsigned int)arg2;
+ (void)__wcdb_index_5:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_index_3:(void *)arg1;
+ (id)swift_operateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)operateTime;
+ (id)swift_businessType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)businessType;
+ (id)swift_dataType;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)dataType;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) unsigned long long operateTime; // @synthesize operateTime=_operateTime;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
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

