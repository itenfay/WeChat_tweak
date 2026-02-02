//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WAIssueLaunchPermissionInfo
{
    unsigned int _beginTime;
    unsigned int _endTime;
    unsigned int _reportId;
    NSString *_appID;
    NSString *_sceneListStr;
    NSData *_launchResponseData;
    NSString *_username;
}

+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)username;
+ (id)swift_reportId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)reportId;
+ (id)swift_launchResponseData;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)launchResponseData;
+ (id)swift_endTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)endTime;
+ (id)swift_beginTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)beginTime;
+ (id)swift_sceneListStr;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)sceneListStr;
+ (id)swift_appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) NSData *launchResponseData; // @synthesize launchResponseData=_launchResponseData;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *sceneListStr; // @synthesize sceneListStr=_sceneListStr;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;

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

