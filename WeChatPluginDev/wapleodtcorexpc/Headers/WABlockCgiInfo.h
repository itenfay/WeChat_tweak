//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WABlockCgiInfo
{
    unsigned int _beginTime;
    unsigned int _endTime;
    unsigned int _reportId;
    NSString *_appid;
    NSString *_username;
    NSString *_blockCgiListStr;
    NSString *_blockSceneListStr;
}

+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_reportId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)reportId;
+ (id)swift_endTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)endTime;
+ (id)swift_beginTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)beginTime;
+ (id)swift_blockSceneListStr;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)blockSceneListStr;
+ (id)swift_blockCgiListStr;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)blockCgiListStr;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)username;
+ (id)swift_appid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *blockSceneListStr; // @synthesize blockSceneListStr=_blockSceneListStr;
@property(retain, nonatomic) NSString *blockCgiListStr; // @synthesize blockCgiListStr=_blockCgiListStr;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;

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

