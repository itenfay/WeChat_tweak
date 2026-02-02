//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5MigrateRecord : NSObject
{
    unsigned int _curMigratingTableId;
    long long _lastMigratedRowid;
}

+ (id)swift_lastMigratedRowid;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)lastMigratedRowid;
+ (id)swift_curMigratingTableId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)curMigratingTableId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) long long lastMigratedRowid; // @synthesize lastMigratedRowid=_lastMigratedRowid;
@property(nonatomic) unsigned int curMigratingTableId; // @synthesize curMigratingTableId=_curMigratingTableId;

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

