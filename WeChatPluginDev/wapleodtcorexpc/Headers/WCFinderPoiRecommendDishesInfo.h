//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderJumpInfo, WCFinderPoiRecommendDishesArray;

@interface WCFinderPoiRecommendDishesInfo : NSObject
{
    int _commentScene;
    NSString *_poiId;
    unsigned long long _cacheTime;
    NSString *_title;
    WCFinderPoiRecommendDishesArray *_dishesArray;
    WCFinderJumpInfo *_footerJumpInfo;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (id)swift_footerJumpInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)footerJumpInfo;
+ (id)swift_dishesArray;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)dishesArray;
+ (id)swift_title;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)title;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_commentScene;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)commentScene;
+ (id)swift_poiId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)poiId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_footerJumpInfo;
+ (void)PBArrayAdd_dishesArray;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_commentScene;
+ (void)PBArrayAdd_poiId;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderJumpInfo *footerJumpInfo; // @synthesize footerJumpInfo=_footerJumpInfo;
@property(retain, nonatomic) WCFinderPoiRecommendDishesArray *dishesArray; // @synthesize dishesArray=_dishesArray;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

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

