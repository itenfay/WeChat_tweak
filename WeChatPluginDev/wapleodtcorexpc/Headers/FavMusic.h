//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FavMusic : NSObject
{
    _Bool isAutoIncrement;
    unsigned int _itemLocalId;
    NSString *_musicId;
}

+ (void)__wcdb_column_constraint_91:(void *)arg1;
+ (void)__wcdb_index_90:(void *)arg1;
+ (void)__wcdb_column_constraint_89:(void *)arg1;
+ (id)swift_musicId;
+ (const void *)__wcdb_synthesize_88:(void *)arg1;
+ (const void *)musicId;
+ (id)swift_itemLocalId;
+ (const void *)__wcdb_synthesize_87:(void *)arg1;
+ (const void *)itemLocalId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int itemLocalId; // @synthesize itemLocalId=_itemLocalId;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

