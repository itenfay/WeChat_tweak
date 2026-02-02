//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAPeriodFetchInfo
{
    unsigned int _lastFetchTime;
    NSString *_userName;
    NSString *_fetchData;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_fetchData;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)fetchData;
+ (id)swift_lastFetchTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)lastFetchTime;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fetchData; // @synthesize fetchData=_fetchData;
@property(nonatomic) unsigned int lastFetchTime; // @synthesize lastFetchTime=_lastFetchTime;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

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

