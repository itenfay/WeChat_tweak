//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface DBCompatibleCGI : NSObject
{
    unsigned int _uiCgi;
    unsigned int _cgiType;
    NSString *_pbUniqueID;
    NSData *_pbRequestData;
    NSData *_pbResponseData;
}

+ (void)__wcdb_column_constraint_183:(void *)arg1;
+ (void)__wcdb_column_constraint_182:(void *)arg1;
+ (id)swift_cgiType;
+ (const void *)__wcdb_synthesize_181:(void *)arg1;
+ (const void *)cgiType;
+ (id)swift_uiCgi;
+ (const void *)__wcdb_synthesize_180:(void *)arg1;
+ (const void *)uiCgi;
+ (id)swift_pbResponseData;
+ (const void *)__wcdb_synthesize_179:(void *)arg1;
+ (const void *)pbResponseData;
+ (id)swift_pbRequestData;
+ (const void *)__wcdb_synthesize_178:(void *)arg1;
+ (const void *)pbRequestData;
+ (id)swift_pbUniqueID;
+ (const void *)__wcdb_synthesize_177:(void *)arg1;
+ (const void *)pbUniqueID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int cgiType; // @synthesize cgiType=_cgiType;
@property(nonatomic) unsigned int uiCgi; // @synthesize uiCgi=_uiCgi;
@property(retain, nonatomic) NSData *pbResponseData; // @synthesize pbResponseData=_pbResponseData;
@property(retain, nonatomic) NSData *pbRequestData; // @synthesize pbRequestData=_pbRequestData;
@property(retain, nonatomic) NSString *pbUniqueID; // @synthesize pbUniqueID=_pbUniqueID;

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

