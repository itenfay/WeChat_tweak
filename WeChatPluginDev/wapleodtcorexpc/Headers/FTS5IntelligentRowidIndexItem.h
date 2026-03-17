//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5IntelligentRowidIndexItem : NSObject
{
    unsigned int _userNameId;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _validFlag;
    unsigned int _hasDownLoadFlag;
    unsigned int _operateTime;
    unsigned int _ocrTime;
    unsigned int _classificationTime;
    unsigned int _faceClusterTime;
    unsigned int _operateCost;
    long long _indexRowid;
}

+ (void)__wcdb_table_constraint_138:(void *)arg1;
+ (void)__wcdb_index_137:(void *)arg1;
+ (void)__wcdb_index_136:(void *)arg1;
+ (void)__wcdb_index_135:(void *)arg1;
+ (void)__wcdb_index_134:(void *)arg1;
+ (void)__wcdb_table_constraint_133:(void *)arg1;
+ (void)__wcdb_table_constraint_132:(void *)arg1;
+ (id)swift_operateCost;
+ (const void *)__wcdb_synthesize_131:(void *)arg1;
+ (const void *)operateCost;
+ (id)swift_faceClusterTime;
+ (const void *)__wcdb_synthesize_130:(void *)arg1;
+ (const void *)faceClusterTime;
+ (id)swift_classificationTime;
+ (const void *)__wcdb_synthesize_129:(void *)arg1;
+ (const void *)classificationTime;
+ (id)swift_ocrTime;
+ (const void *)__wcdb_synthesize_128:(void *)arg1;
+ (const void *)ocrTime;
+ (id)swift_operateTime;
+ (const void *)__wcdb_synthesize_127:(void *)arg1;
+ (const void *)operateTime;
+ (id)swift_hasDownLoadFlag;
+ (const void *)__wcdb_synthesize_126:(void *)arg1;
+ (const void *)hasDownLoadFlag;
+ (id)swift_validFlag;
+ (const void *)__wcdb_synthesize_125:(void *)arg1;
+ (const void *)validFlag;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_124:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_indexRowid;
+ (const void *)__wcdb_synthesize_123:(void *)arg1;
+ (const void *)indexRowid;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_122:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_121:(void *)arg1;
+ (const void *)userNameId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) unsigned int operateCost; // @synthesize operateCost=_operateCost;
@property(nonatomic) unsigned int faceClusterTime; // @synthesize faceClusterTime=_faceClusterTime;
@property(nonatomic) unsigned int classificationTime; // @synthesize classificationTime=_classificationTime;
@property(nonatomic) unsigned int ocrTime; // @synthesize ocrTime=_ocrTime;
@property(nonatomic) unsigned int operateTime; // @synthesize operateTime=_operateTime;
@property(nonatomic) unsigned int hasDownLoadFlag; // @synthesize hasDownLoadFlag=_hasDownLoadFlag;
@property(nonatomic) unsigned int validFlag; // @synthesize validFlag=_validFlag;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long indexRowid; // @synthesize indexRowid=_indexRowid;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId=_userNameId;

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

