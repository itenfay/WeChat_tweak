//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAExptPermissionInfo : NSObject
{
    NSString *_appID;
    long long _issueTime;
    NSString *_opConfig;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_opConfig;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)opConfig;
+ (id)swift_issueTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)issueTime;
+ (id)swift_appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *opConfig; // @synthesize opConfig=_opConfig;
@property(nonatomic) long long issueTime; // @synthesize issueTime=_issueTime;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

