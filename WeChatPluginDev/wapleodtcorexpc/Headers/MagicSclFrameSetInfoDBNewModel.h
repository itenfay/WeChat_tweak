//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MagicSclFrameSetInfoDBNewModel : NSObject
{
    int _frameSetHeight;
    NSString *_bizName;
    NSString *_frameSetName;
    NSString *_frameSetRootPath;
}

+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
+ (id)swift_frameSetHeight;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)frameSetHeight;
+ (id)swift_frameSetRootPath;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)frameSetRootPath;
+ (id)swift_frameSetName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)frameSetName;
+ (id)swift_bizName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)bizName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) int frameSetHeight; // @synthesize frameSetHeight=_frameSetHeight;
@property(copy, nonatomic) NSString *frameSetRootPath; // @synthesize frameSetRootPath=_frameSetRootPath;
@property(copy, nonatomic) NSString *frameSetName; // @synthesize frameSetName=_frameSetName;
@property(copy, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;

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

