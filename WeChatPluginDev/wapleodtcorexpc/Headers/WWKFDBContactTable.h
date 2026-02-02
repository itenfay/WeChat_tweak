//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DBContactOpenIM, NSString, WWKFDBContactInfo;

@interface WWKFDBContactTable : NSObject
{
    _Bool _needLocation;
    unsigned int _source;
    NSString *_userName;
    NSString *_appId;
    WWKFDBContactInfo *_dbContactInfo;
    DBContactOpenIM *_dbContactOpenIM;
    unsigned long long _settingFlag;
    NSString *_headImageStatus;
    NSString *_locationType;
}

+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (id)swift_locationType;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)locationType;
+ (id)swift_needLocation;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)needLocation;
+ (id)swift_headImageStatus;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)headImageStatus;
+ (id)swift_settingFlag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)settingFlag;
+ (id)swift_source;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)source;
+ (id)swift_dbContactOpenIM;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)dbContactOpenIM;
+ (id)swift_dbContactInfo;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)dbContactInfo;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)appId;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *locationType; // @synthesize locationType=_locationType;
@property(nonatomic) _Bool needLocation; // @synthesize needLocation=_needLocation;
@property(copy, nonatomic) NSString *headImageStatus; // @synthesize headImageStatus=_headImageStatus;
@property(nonatomic) unsigned long long settingFlag; // @synthesize settingFlag=_settingFlag;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) DBContactOpenIM *dbContactOpenIM; // @synthesize dbContactOpenIM=_dbContactOpenIM;
@property(retain, nonatomic) WWKFDBContactInfo *dbContactInfo; // @synthesize dbContactInfo=_dbContactInfo;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

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

