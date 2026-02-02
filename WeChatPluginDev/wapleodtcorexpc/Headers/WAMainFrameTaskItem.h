//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMainFrameTaskItem : NSObject
{
    unsigned int _debugMode;
    unsigned int _updateTime;
    NSString *_userName;
}

+ (void)__wcdb_index_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_debugMode;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)debugMode;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
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

