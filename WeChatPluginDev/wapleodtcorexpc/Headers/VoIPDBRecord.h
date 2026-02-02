//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VoIPDBRecord : NSObject
{
    unsigned int _sdkMode;
    unsigned int _expireTime;
    unsigned int _liveTime;
    NSString *_contactUserName;
}

+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (id)swift_liveTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)liveTime;
+ (id)swift_expireTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)expireTime;
+ (id)swift_sdkMode;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)sdkMode;
+ (id)swift_contactUserName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)contactUserName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int liveTime; // @synthesize liveTime=_liveTime;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned int sdkMode; // @synthesize sdkMode=_sdkMode;
@property(retain, nonatomic) NSString *contactUserName; // @synthesize contactUserName=_contactUserName;

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

