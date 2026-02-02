//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBStarGuideRecord : NSObject
{
    _Bool _isLocal;
    NSString *_feedID;
    long long _scene;
    unsigned long long _updatedTime;
    long long _displayTimes;
    long long _clickTimes;
}

+ (void)__wcdb_index_139:(void *)arg1;
+ (void)__wcdb_table_constraint_138:(void *)arg1;
+ (void)__wcdb_table_constraint_137:(void *)arg1;
+ (void)__wcdb_column_constraint_136:(void *)arg1;
+ (void)__wcdb_column_constraint_135:(void *)arg1;
+ (void)__wcdb_column_constraint_134:(void *)arg1;
+ (void)__wcdb_column_constraint_133:(void *)arg1;
+ (void)__wcdb_column_constraint_132:(void *)arg1;
+ (void)__wcdb_column_constraint_131:(void *)arg1;
+ (id)swift_isLocal;
+ (const void *)__wcdb_synthesize_130:(void *)arg1;
+ (const void *)isLocal;
+ (id)swift_clickTimes;
+ (const void *)__wcdb_synthesize_129:(void *)arg1;
+ (const void *)clickTimes;
+ (id)swift_displayTimes;
+ (const void *)__wcdb_synthesize_128:(void *)arg1;
+ (const void *)displayTimes;
+ (id)swift_updatedTime;
+ (const void *)__wcdb_synthesize_127:(void *)arg1;
+ (const void *)updatedTime;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_126:(void *)arg1;
+ (const void *)scene;
+ (id)swift_feedID;
+ (const void *)__wcdb_synthesize_125:(void *)arg1;
+ (const void *)feedID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) long long clickTimes; // @synthesize clickTimes=_clickTimes;
@property(nonatomic) long long displayTimes; // @synthesize displayTimes=_displayTimes;
@property(nonatomic) unsigned long long updatedTime; // @synthesize updatedTime=_updatedTime;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;

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

