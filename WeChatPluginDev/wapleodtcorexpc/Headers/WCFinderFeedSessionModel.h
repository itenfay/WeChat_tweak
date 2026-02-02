//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFeedSessionModel : NSObject
{
    int _scene;
    NSString *_tid;
    NSString *_sessionBuffer;
    unsigned long long _cacheTime;
    unsigned long long _exposeTimeInMS;
    unsigned long long _exposeCount;
    NSString *_extraKey;
}

+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (id)swift_extraKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)extraKey;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)scene;
+ (id)swift_sessionBuffer;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)sessionBuffer;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extraKey; // @synthesize extraKey=_extraKey;
@property(nonatomic) unsigned long long exposeCount; // @synthesize exposeCount=_exposeCount;
@property(nonatomic) unsigned long long exposeTimeInMS; // @synthesize exposeTimeInMS=_exposeTimeInMS;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

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

