//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5IntelligentMsgItem : NSObject
{
    unsigned int _userNameId;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    NSString *_ocrText;
    NSString *_faceAlbumLabels;
    NSString *_classificationLabels;
}

+ (void)__wcdb_column_constraint_111:(void *)arg1;
+ (void)__wcdb_column_constraint_110:(void *)arg1;
+ (void)__wcdb_column_constraint_109:(void *)arg1;
+ (void)__wcdb_column_constraint_108:(void *)arg1;
+ (void)__wcdb_column_constraint_107:(void *)arg1;
+ (void)__wcdb_virtual_table_106:(void *)arg1;
+ (void)__wcdb_virtual_table_105:(void *)arg1;
+ (id)swift_classificationLabels;
+ (const void *)__wcdb_synthesize_104:(void *)arg1;
+ (const void *)classificationLabels;
+ (id)swift_faceAlbumLabels;
+ (const void *)__wcdb_synthesize_103:(void *)arg1;
+ (const void *)faceAlbumLabels;
+ (id)swift_ocrText;
+ (const void *)__wcdb_synthesize_102:(void *)arg1;
+ (const void *)ocrText;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_101:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_100:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_99:(void *)arg1;
+ (const void *)userNameId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *classificationLabels; // @synthesize classificationLabels=_classificationLabels;
@property(retain, nonatomic) NSString *faceAlbumLabels; // @synthesize faceAlbumLabels=_faceAlbumLabels;
@property(retain, nonatomic) NSString *ocrText; // @synthesize ocrText=_ocrText;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId=_userNameId;
@property(readonly, copy) NSString *description;
- (id)init;

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

