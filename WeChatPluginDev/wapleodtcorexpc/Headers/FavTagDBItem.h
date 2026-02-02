//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FavTagDBItem : NSObject
{
    unsigned int _tagId;
    NSString *_name;
}

+ (void)__wcdb_table_constraint_86:(void *)arg1;
+ (void)__wcdb_column_constraint_85:(void *)arg1;
+ (void)__wcdb_column_constraint_84:(void *)arg1;
+ (id)swift_name;
+ (const void *)__wcdb_synthesize_83:(void *)arg1;
+ (const void *)name;
+ (id)swift_tagId;
+ (const void *)__wcdb_synthesize_82:(void *)arg1;
+ (const void *)tagId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int tagId; // @synthesize tagId=_tagId;

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

