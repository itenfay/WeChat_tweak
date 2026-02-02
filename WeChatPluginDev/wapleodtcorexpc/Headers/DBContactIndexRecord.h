//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactIndexRecord : NSObject
{
    int _type;
    NSString *_maxIndexedUserName;
    NSString *_unIndexedUsernames;
}

+ (void)__wcdb_column_constraint_57:(void *)arg1;
+ (id)swift_unIndexedUsernames;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (const void *)unIndexedUsernames;
+ (id)swift_maxIndexedUserName;
+ (const void *)__wcdb_synthesize_55:(void *)arg1;
+ (const void *)maxIndexedUserName;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_54:(void *)arg1;
+ (const void *)type;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *unIndexedUsernames; // @synthesize unIndexedUsernames=_unIndexedUsernames;
@property(retain, nonatomic) NSString *maxIndexedUserName; // @synthesize maxIndexedUserName=_maxIndexedUserName;
@property(nonatomic) int type; // @synthesize type=_type;

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

