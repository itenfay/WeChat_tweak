//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBRoomHistory : NSObject
{
    NSString *_chatName;
    unsigned long long _historyId;
    long long _msgServerId;
}

+ (void)__wcdb_index_176:(void *)arg1;
+ (void)__wcdb_index_175:(void *)arg1;
+ (void)__wcdb_table_constraint_174:(void *)arg1;
+ (void)__wcdb_table_constraint_173:(void *)arg1;
+ (id)swift_msgServerId;
+ (const void *)__wcdb_synthesize_172:(void *)arg1;
+ (const void *)msgServerId;
+ (id)swift_historyId;
+ (const void *)__wcdb_synthesize_171:(void *)arg1;
+ (const void *)historyId;
+ (id)swift_chatName;
+ (const void *)__wcdb_synthesize_170:(void *)arg1;
+ (const void *)chatName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned long long historyId; // @synthesize historyId=_historyId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;

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

