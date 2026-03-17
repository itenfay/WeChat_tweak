//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC6WeChat17WCDBIntegerNumber;

@interface _TtC6WeChat24PredownloadPriorityQuota : NSObject
{
    MISSING_TYPE *count;
    MISSING_TYPE *priority;
    MISSING_TYPE *quota;
}

+ (id)swift_quota;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)quota;
+ (id)swift_priority;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)priority;
+ (id)swift_count;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)count;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *quota;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *priority;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *count;

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

