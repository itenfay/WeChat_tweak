//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface OpLog : NSObject
{
    _Bool isAutoIncrement;
    unsigned int oplogID;
    unsigned int oplogCmdID;
    NSData *oplogBuffer;
    long long lastInsertedRowID;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_oplogBuffer;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)oplogBuffer;
+ (id)swift_oplogCmdID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)oplogCmdID;
+ (id)swift_oplogID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)oplogID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(retain, nonatomic) NSData *oplogBuffer; // @synthesize oplogBuffer;
@property(nonatomic) unsigned int oplogCmdID; // @synthesize oplogCmdID;
@property(nonatomic) unsigned int oplogID; // @synthesize oplogID;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

