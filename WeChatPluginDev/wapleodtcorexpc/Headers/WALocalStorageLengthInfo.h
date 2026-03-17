//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WALocalStorageLengthInfo : NSObject
{
    int _storageId;
    unsigned int _lastModifyTime;
    unsigned long long _storageLength;
}

+ (void)__wcdb_column_constraint_22:(void *)arg1;
+ (id)swift_lastModifyTime;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)lastModifyTime;
+ (id)swift_storageLength;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)storageLength;
+ (id)swift_storageId;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)storageId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned long long storageLength; // @synthesize storageLength=_storageLength;
@property(nonatomic) int storageId; // @synthesize storageId=_storageId;

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

