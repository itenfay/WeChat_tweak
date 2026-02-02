//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCBackupIndex : NSObject
{
    NSString *_sessionName;
    NSString *_fileName;
    long long _startTime;
    long long _endTime;
}

+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_endTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)endTime;
+ (id)swift_startTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)startTime;
+ (id)swift_fileName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)fileName;
+ (id)swift_sessionName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)sessionName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
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

