//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GCLiteAppConfigDbModel : NSObject
{
    _Bool _hasLiteConf;
    unsigned int _expireDuration;
    unsigned int _refreshDuration;
    NSString *_url;
    NSString *_appid;
    NSString *_path;
    NSString *_pkgId;
    double _updateTime;
}

+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_refreshDuration;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)refreshDuration;
+ (id)swift_expireDuration;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)expireDuration;
+ (id)swift_pkgId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)pkgId;
+ (id)swift_path;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)path;
+ (id)swift_appid;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)appid;
+ (id)swift_hasLiteConf;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)hasLiteConf;
+ (id)swift_url;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)url;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int refreshDuration; // @synthesize refreshDuration=_refreshDuration;
@property(nonatomic) unsigned int expireDuration; // @synthesize expireDuration=_expireDuration;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) _Bool hasLiteConf; // @synthesize hasLiteConf=_hasLiteConf;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy) NSString *description;
- (_Bool)isExpired;

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

