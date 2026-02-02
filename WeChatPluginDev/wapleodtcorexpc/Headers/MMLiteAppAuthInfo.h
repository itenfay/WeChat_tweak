//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiteAppAuthInfo
{
    NSString *host;
    NSString *param;
    NSString *paramMap;
    long long updateTime;
    NSString *headerMap;
}

+ (id)createItem:(id)arg1 param:(id)arg2 paramDic:(id)arg3 headerDic:(id)arg4;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_headerMap;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)headerMap;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_paramMap;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)paramMap;
+ (id)swift_param;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)param;
+ (id)swift_host;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)host;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *headerMap; // @synthesize headerMap;
@property(nonatomic) long long updateTime; // @synthesize updateTime;
@property(retain, nonatomic) NSString *paramMap; // @synthesize paramMap;
@property(retain, nonatomic) NSString *param; // @synthesize param;
@property(retain, nonatomic) NSString *host; // @synthesize host;
- (id)getHeaderDic;
- (id)getParamDic;
- (id)copyWithZone:(struct _NSZone *)arg1;

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

