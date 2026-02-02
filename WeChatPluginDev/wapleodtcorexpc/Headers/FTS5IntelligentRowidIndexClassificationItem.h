//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5IntelligentRowidIndexClassificationItem : NSObject
{
    unsigned int _userNameId;
    unsigned int _msgLocalId;
    unsigned int _classificationLabelId;
    unsigned int _faceClusterFlag;
}

+ (void)__wcdb_index_145:(void *)arg1;
+ (void)__wcdb_index_144:(void *)arg1;
+ (void)__wcdb_index_143:(void *)arg1;
+ (id)swift_faceClusterFlag;
+ (const void *)__wcdb_synthesize_142:(void *)arg1;
+ (const void *)faceClusterFlag;
+ (id)swift_classificationLabelId;
+ (const void *)__wcdb_synthesize_141:(void *)arg1;
+ (const void *)classificationLabelId;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_140:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_139:(void *)arg1;
+ (const void *)userNameId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) unsigned int faceClusterFlag; // @synthesize faceClusterFlag=_faceClusterFlag;
@property(nonatomic) unsigned int classificationLabelId; // @synthesize classificationLabelId=_classificationLabelId;
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

