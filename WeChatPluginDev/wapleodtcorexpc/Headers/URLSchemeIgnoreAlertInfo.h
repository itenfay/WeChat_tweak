//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface URLSchemeIgnoreAlertInfo
{
    unsigned int _updateTime;
    NSString *_appID;
    NSString *_urlScheme;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_urlScheme;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)urlScheme;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
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

