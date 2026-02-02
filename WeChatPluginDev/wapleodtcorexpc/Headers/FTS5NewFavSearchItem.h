//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5NewFavSearchItem : NSObject
{
    unsigned int localId;
    unsigned int updateTime;
    unsigned int _FavItemReservedInt;
    NSString *searchTitle;
    NSString *searchDesc;
    NSString *searchSource;
    NSString *_FavItemReservedText;
}

+ (void)__wcdb_column_constraint_78:(void *)arg1;
+ (void)__wcdb_column_constraint_77:(void *)arg1;
+ (void)__wcdb_column_constraint_76:(void *)arg1;
+ (void)__wcdb_column_constraint_75:(void *)arg1;
+ (void)__wcdb_column_constraint_74:(void *)arg1;
+ (void)__wcdb_column_constraint_73:(void *)arg1;
+ (void)__wcdb_column_constraint_72:(void *)arg1;
+ (void)__wcdb_virtual_table_71:(void *)arg1;
+ (void)__wcdb_virtual_table_70:(void *)arg1;
+ (id)swift_FavItemReservedText;
+ (const void *)__wcdb_synthesize_69:(void *)arg1;
+ (const void *)FavItemReservedText;
+ (id)swift_FavItemReservedInt;
+ (const void *)__wcdb_synthesize_68:(void *)arg1;
+ (const void *)FavItemReservedInt;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_67:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_localId;
+ (const void *)__wcdb_synthesize_66:(void *)arg1;
+ (const void *)localId;
+ (id)swift_searchSource;
+ (const void *)__wcdb_synthesize_65:(void *)arg1;
+ (const void *)searchSource;
+ (id)swift_searchDesc;
+ (const void *)__wcdb_synthesize_64:(void *)arg1;
+ (const void *)searchDesc;
+ (id)swift_searchTitle;
+ (const void *)__wcdb_synthesize_63:(void *)arg1;
+ (const void *)searchTitle;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *FavItemReservedText; // @synthesize FavItemReservedText=_FavItemReservedText;
@property(nonatomic) unsigned int FavItemReservedInt; // @synthesize FavItemReservedInt=_FavItemReservedInt;
@property(retain, nonatomic) NSString *searchSource; // @synthesize searchSource;
@property(retain, nonatomic) NSString *searchDesc; // @synthesize searchDesc;
@property(retain, nonatomic) NSString *searchTitle; // @synthesize searchTitle;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int localId; // @synthesize localId;
@property(readonly, copy) NSString *description;

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

