//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EdgeComputingCacheDataModel
{
    NSString *_configID;
    unsigned long long _reportTimeEC;
    NSString *_data;
}

+ (id)swift_data;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)data;
+ (id)swift_reportTimeEC;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)reportTimeEC;
+ (id)swift_configID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)configID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_data;
+ (void)PBArrayAdd_reportTimeEC;
+ (void)PBArrayAdd_configID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long reportTimeEC; // @synthesize reportTimeEC=_reportTimeEC;
@property(retain, nonatomic) NSString *configID; // @synthesize configID=_configID;
- (id)toString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

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

