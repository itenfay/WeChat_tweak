//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFeedPlayStatusModel : NSObject
{
    NSString *_tid;
    unsigned long long _scene;
    unsigned long long _hadReadTimestamp;
}

+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (id)swift_hadReadTimestamp;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)hadReadTimestamp;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)scene;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long hadReadTimestamp; // @synthesize hadReadTimestamp=_hadReadTimestamp;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
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

