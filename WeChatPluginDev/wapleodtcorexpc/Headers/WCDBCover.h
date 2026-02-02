//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCDBCover : NSObject
{
    int _codingType;
    NSString *_username;
    NSString *_tid;
    NSData *_buffer;
}

+ (void)__wcdb_column_constraint_69:(void *)arg1;
+ (void)__wcdb_column_constraint_68:(void *)arg1;
+ (void)__wcdb_column_constraint_67:(void *)arg1;
+ (void)__wcdb_column_constraint_66:(void *)arg1;
+ (void)__wcdb_column_constraint_65:(void *)arg1;
+ (id)swift_codingType;
+ (const void *)__wcdb_synthesize_64:(void *)arg1;
+ (const void *)codingType;
+ (id)swift_buffer;
+ (const void *)__wcdb_synthesize_63:(void *)arg1;
+ (const void *)buffer;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_62:(void *)arg1;
+ (const void *)tid;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_61:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) int codingType; // @synthesize codingType=_codingType;
@property(copy, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

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

