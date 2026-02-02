//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WADBContactPack;

@interface WADBContactTable : NSObject
{
    unsigned int _type;
    unsigned int _wxAppOpt;
    NSString *_userName;
    NSString *_brandIconURL;
    NSString *_externalInfo;
    WADBContactPack *_contactPack;
    NSString *_headImageStatus;
    NSString *_appId;
}

+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)appId;
+ (id)swift_headImageStatus;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)headImageStatus;
+ (id)swift_wxAppOpt;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)wxAppOpt;
+ (id)swift_contactPack;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)contactPack;
+ (id)swift_externalInfo;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)externalInfo;
+ (id)swift_brandIconURL;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)brandIconURL;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)type;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *headImageStatus; // @synthesize headImageStatus=_headImageStatus;
@property(nonatomic) unsigned int wxAppOpt; // @synthesize wxAppOpt=_wxAppOpt;
@property(retain, nonatomic) WADBContactPack *contactPack; // @synthesize contactPack=_contactPack;
@property(retain, nonatomic) NSString *externalInfo; // @synthesize externalInfo=_externalInfo;
@property(retain, nonatomic) NSString *brandIconURL; // @synthesize brandIconURL=_brandIconURL;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

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

