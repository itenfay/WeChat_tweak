//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderUserStickyPage : NSObject
{
    NSString *_username;
    NSString *_tid;
    unsigned long long _stickyTime;
    long long _type;
}

+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)type;
+ (id)swift_stickyTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)stickyTime;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)tid;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long stickyTime; // @synthesize stickyTime=_stickyTime;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
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

