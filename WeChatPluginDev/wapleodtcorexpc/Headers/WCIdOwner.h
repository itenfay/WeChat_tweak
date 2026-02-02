//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCIdOwner : NSObject
{
    NSString *_Id;
    NSString *_username;
}

+ (void)__wcdb_column_constraint_78:(void *)arg1;
+ (void)__wcdb_column_constraint_77:(void *)arg1;
+ (void)__wcdb_column_constraint_76:(void *)arg1;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_75:(void *)arg1;
+ (const void *)username;
+ (id)swift_Id;
+ (const void *)__wcdb_synthesize_74:(void *)arg1;
+ (const void *)Id;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *Id; // @synthesize Id=_Id;

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

