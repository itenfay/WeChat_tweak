//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface HistoryProcessTag
{
    unsigned long long _historyId;
    NSString *_chatRoomName;
}

+ (void)__wcdb_index_11:(void *)arg1;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (id)swift_chatRoomName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)chatRoomName;
+ (id)swift_historyId;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)historyId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(nonatomic) unsigned long long historyId; // @synthesize historyId=_historyId;
- (id)initWithHistoryID:(unsigned long long)arg1 chatName:(id)arg2;

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

