//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5FavRowidIndex : NSObject
{
    unsigned int _localId;
    unsigned int _updateSeq;
    int _type;
    int _subTypes;
    unsigned int _updateTime;
    long long _indexRowid;
}

+ (void)__wcdb_index_62:(void *)arg1;
+ (void)__wcdb_index_61:(void *)arg1;
+ (void)__wcdb_column_constraint_60:(void *)arg1;
+ (id)swift_indexRowid;
+ (const void *)__wcdb_synthesize_59:(void *)arg1;
+ (const void *)indexRowid;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_58:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_subTypes;
+ (const void *)__wcdb_synthesize_57:(void *)arg1;
+ (const void *)subTypes;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (const void *)type;
+ (id)swift_updateSeq;
+ (const void *)__wcdb_synthesize_55:(void *)arg1;
+ (const void *)updateSeq;
+ (id)swift_localId;
+ (const void *)__wcdb_synthesize_54:(void *)arg1;
+ (const void *)localId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) long long indexRowid; // @synthesize indexRowid=_indexRowid;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) int subTypes; // @synthesize subTypes=_subTypes;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq=_updateSeq;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;

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

