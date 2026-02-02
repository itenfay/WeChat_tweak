//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WAConfigInfo : NSObject
{
    unsigned int type;
    unsigned int version;
    unsigned int updateTime;
    NSString *appID;
    NSData *configData;
}

+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_configData;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)configData;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)version;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)type;
+ (id)swift_appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(retain, nonatomic) NSData *configData; // @synthesize configData;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;

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

