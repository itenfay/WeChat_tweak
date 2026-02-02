//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAPeriodFetchToken
{
    unsigned int _lastSaveTime;
    NSString *_userName;
    NSString *_fetchToken;
}

+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_fetchToken;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)fetchToken;
+ (id)swift_lastSaveTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)lastSaveTime;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fetchToken; // @synthesize fetchToken=_fetchToken;
@property(nonatomic) unsigned int lastSaveTime; // @synthesize lastSaveTime=_lastSaveTime;
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

