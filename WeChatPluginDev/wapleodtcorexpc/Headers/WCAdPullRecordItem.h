//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAdPullRecordItem
{
    _Bool isAutoIncrement;
    unsigned int _localId;
    unsigned int _storeTime;
    unsigned int _isAsync;
    unsigned int _invalid;
    long long lastInsertedRowID;
    NSString *_traceId;
    NSString *_aid;
    NSString *_snsId;
    NSString *_sessionKey;
    NSString *_ext;
}

+ (id)modelPropertyWhitelistForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (id)swift_ext;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)ext;
+ (id)swift_sessionKey;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)sessionKey;
+ (id)swift_invalid;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)invalid;
+ (id)swift_isAsync;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)isAsync;
+ (id)swift_storeTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)storeTime;
+ (id)swift_snsId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)snsId;
+ (id)swift_aid;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)aid;
+ (id)swift_traceId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)traceId;
+ (id)swift_localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)localId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(nonatomic) unsigned int invalid; // @synthesize invalid=_invalid;
@property(nonatomic) unsigned int isAsync; // @synthesize isAsync=_isAsync;
@property(nonatomic) unsigned int storeTime; // @synthesize storeTime=_storeTime;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

