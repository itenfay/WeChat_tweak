//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WABizAttrSyncBuffer : NSObject
{
    unsigned int _lastUpdateTime;
    NSString *_userName;
    NSData *_version;
}

+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)version;
+ (id)swift_lastUpdateTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)lastUpdateTime;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *version; // @synthesize version=_version;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
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

