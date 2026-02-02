//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBEmoticon : NSObject
{
    unsigned int _type;
    unsigned int _createTime;
    unsigned int _length;
    unsigned int _status;
    unsigned int _catalogId;
    unsigned int _lastUsedTime;
    unsigned int _extFlag;
    unsigned int _indexInPack;
    NSString *_md5;
    NSString *_message;
    NSString *_catalog;
    NSString *_draft;
    NSString *_extInfo;
    NSString *_packageId;
    NSString *_ConStrRes3;
}

+ (void)__wcdb_index_169:(void *)arg1;
+ (void)__wcdb_column_constraint_168:(void *)arg1;
+ (void)__wcdb_column_constraint_167:(void *)arg1;
+ (void)__wcdb_column_constraint_166:(void *)arg1;
+ (void)__wcdb_column_constraint_165:(void *)arg1;
+ (void)__wcdb_column_constraint_164:(void *)arg1;
+ (void)__wcdb_column_constraint_163:(void *)arg1;
+ (void)__wcdb_column_constraint_162:(void *)arg1;
+ (void)__wcdb_column_constraint_161:(void *)arg1;
+ (id)swift_ConStrRes3;
+ (const void *)__wcdb_synthesize_160:(void *)arg1;
+ (const void *)ConStrRes3;
+ (id)swift_packageId;
+ (const void *)__wcdb_synthesize_159:(void *)arg1;
+ (const void *)packageId;
+ (id)swift_extInfo;
+ (const void *)__wcdb_synthesize_158:(void *)arg1;
+ (const void *)extInfo;
+ (id)swift_indexInPack;
+ (const void *)__wcdb_synthesize_157:(void *)arg1;
+ (const void *)indexInPack;
+ (id)swift_extFlag;
+ (const void *)__wcdb_synthesize_156:(void *)arg1;
+ (const void *)extFlag;
+ (id)swift_lastUsedTime;
+ (const void *)__wcdb_synthesize_155:(void *)arg1;
+ (const void *)lastUsedTime;
+ (id)swift_draft;
+ (const void *)__wcdb_synthesize_154:(void *)arg1;
+ (const void *)draft;
+ (id)swift_catalogId;
+ (const void *)__wcdb_synthesize_153:(void *)arg1;
+ (const void *)catalogId;
+ (id)swift_catalog;
+ (const void *)__wcdb_synthesize_152:(void *)arg1;
+ (const void *)catalog;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_151:(void *)arg1;
+ (const void *)status;
+ (id)swift_length;
+ (const void *)__wcdb_synthesize_150:(void *)arg1;
+ (const void *)length;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_149:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_148:(void *)arg1;
+ (const void *)type;
+ (id)swift_message;
+ (const void *)__wcdb_synthesize_147:(void *)arg1;
+ (const void *)message;
+ (id)swift_md5;
+ (const void *)__wcdb_synthesize_146:(void *)arg1;
+ (const void *)md5;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3=_ConStrRes3;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int indexInPack; // @synthesize indexInPack=_indexInPack;
@property(nonatomic) unsigned int extFlag; // @synthesize extFlag=_extFlag;
@property(nonatomic) unsigned int lastUsedTime; // @synthesize lastUsedTime=_lastUsedTime;
@property(retain, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(nonatomic) unsigned int catalogId; // @synthesize catalogId=_catalogId;
@property(retain, nonatomic) NSString *catalog; // @synthesize catalog=_catalog;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int length; // @synthesize length=_length;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;

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

