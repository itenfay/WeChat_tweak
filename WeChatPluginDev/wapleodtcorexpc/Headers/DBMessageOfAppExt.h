//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBMessageOfAppExt : NSObject
{
    unsigned int _msgLocalId;
    unsigned int _msgInnerType;
    NSString *_chatUsername;
}

+ (void)__wcdb_index_115:(void *)arg1;
+ (void)__wcdb_table_constraint_114:(void *)arg1;
+ (void)__wcdb_table_constraint_113:(void *)arg1;
+ (id)swift_msgInnerType;
+ (const void *)__wcdb_synthesize_112:(void *)arg1;
+ (const void *)msgInnerType;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_111:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_chatUsername;
+ (const void *)__wcdb_synthesize_110:(void *)arg1;
+ (const void *)chatUsername;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int msgInnerType; // @synthesize msgInnerType=_msgInnerType;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *chatUsername; // @synthesize chatUsername=_chatUsername;

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

