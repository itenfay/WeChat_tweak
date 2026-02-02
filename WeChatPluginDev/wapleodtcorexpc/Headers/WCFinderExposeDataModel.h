//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderExposeDataModel : NSObject
{
    NSString *_tid;
    unsigned long long _exposeDate;
    unsigned long long _exposeCount;
}

+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (id)swift_exposeCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)exposeCount;
+ (id)swift_exposeDate;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)exposeDate;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long exposeCount; // @synthesize exposeCount=_exposeCount;
@property(nonatomic) unsigned long long exposeDate; // @synthesize exposeDate=_exposeDate;
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

