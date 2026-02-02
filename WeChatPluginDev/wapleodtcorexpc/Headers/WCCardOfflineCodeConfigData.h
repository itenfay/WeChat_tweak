//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardOfflineCodeConfigData
{
    _Bool needInsertShowTimestamp;
    unsigned int lowerBound;
    unsigned int expireTimeInterval;
    unsigned int showExpireInterval;
    unsigned int localUpdateTime;
    NSString *cardId;
    NSString *showTimestampEncryptKey;
}

+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_showTimestampEncryptKey;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)showTimestampEncryptKey;
+ (id)swift_needInsertShowTimestamp;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)needInsertShowTimestamp;
+ (id)swift_localUpdateTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)localUpdateTime;
+ (id)swift_showExpireInterval;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)showExpireInterval;
+ (id)swift_expireTimeInterval;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)expireTimeInterval;
+ (id)swift_lowerBound;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)lowerBound;
+ (id)swift_cardId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)cardId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *showTimestampEncryptKey; // @synthesize showTimestampEncryptKey;
@property(nonatomic) unsigned int localUpdateTime; // @synthesize localUpdateTime;
@property(nonatomic) _Bool needInsertShowTimestamp; // @synthesize needInsertShowTimestamp;
@property(nonatomic) unsigned int showExpireInterval; // @synthesize showExpireInterval;
@property(nonatomic) unsigned int expireTimeInterval; // @synthesize expireTimeInterval;
@property(nonatomic) unsigned int lowerBound; // @synthesize lowerBound;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;

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

