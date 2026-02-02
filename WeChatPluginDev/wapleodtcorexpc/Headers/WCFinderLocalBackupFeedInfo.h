//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLocalBackupFeedInfo : NSObject
{
    int _commentScene;
    unsigned long long _localId;
    NSString *_tid;
    unsigned long long _expiredTime;
    unsigned long long _feedSource;
    unsigned long long _funcFlag;
}

+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (id)swift_funcFlag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)funcFlag;
+ (id)swift_expiredTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)expiredTime;
+ (id)swift_feedSource;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)feedSource;
+ (id)swift_commentScene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)commentScene;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)tid;
+ (id)swift_localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)localId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long funcFlag; // @synthesize funcFlag=_funcFlag;
@property(nonatomic) unsigned long long feedSource; // @synthesize feedSource=_feedSource;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long localId; // @synthesize localId=_localId;
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

