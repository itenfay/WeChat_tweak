//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FavFileRetainCount : NSObject
{
    unsigned int _itemLocalId;
    NSString *_md5;
    NSString *_dataFmt;
}

+ (void)__wcdb_column_constraint_81:(void *)arg1;
+ (void)__wcdb_index_80:(void *)arg1;
+ (void)__wcdb_index_79:(void *)arg1;
+ (id)swift_dataFmt;
+ (const void *)__wcdb_synthesize_78:(void *)arg1;
+ (const void *)dataFmt;
+ (id)swift_itemLocalId;
+ (const void *)__wcdb_synthesize_77:(void *)arg1;
+ (const void *)itemLocalId;
+ (id)swift_md5;
+ (const void *)__wcdb_synthesize_76:(void *)arg1;
+ (const void *)md5;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(nonatomic) unsigned int itemLocalId; // @synthesize itemLocalId=_itemLocalId;
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

