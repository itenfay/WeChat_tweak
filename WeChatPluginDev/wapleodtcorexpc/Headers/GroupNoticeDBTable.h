//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GroupNoticeDBTable : NSObject
{
    unsigned int _msgLocalId;
    NSString *_sourceId;
    NSString *_userName;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)userName;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_sourceId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)sourceId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;

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

