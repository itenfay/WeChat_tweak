//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPoiBasicInfoResponse_RecommendDishesComponent, NSArray, NSString, WCFinderPoiLineComponetArray;

@interface WCFinderPoiBasicInfo : NSObject
{
    int _scene;
    int _fromScene;
    NSString *_poiId;
    unsigned long long _cacheTime;
    NSString *_poiName;
    WCFinderPoiLineComponetArray *_lineComponentList;
    NSString *_poiAddress;
    FinderPoiBasicInfoResponse_RecommendDishesComponent *_recommendDishesComponent;
    NSString *_groupBuyTitle;
    NSArray *_groupBuyArray;
    NSString *_groupFooterTitle;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (id)swift_groupFooterTitle;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)groupFooterTitle;
+ (id)swift_groupBuyArray;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)groupBuyArray;
+ (id)swift_groupBuyTitle;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)groupBuyTitle;
+ (id)swift_recommendDishesComponent;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)recommendDishesComponent;
+ (id)swift_poiAddress;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)poiAddress;
+ (id)swift_lineComponentList;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)lineComponentList;
+ (id)swift_poiName;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)poiName;
+ (id)swift_fromScene;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)fromScene;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)scene;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_poiId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)poiId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_groupFooterTitle;
+ (void)PBArrayAdd_groupBuyArray;
+ (void)PBArrayAdd_groupBuyTitle;
+ (void)PBArrayAdd_recommendDishesComponent;
+ (void)PBArrayAdd_poiAddress;
+ (void)PBArrayAdd_lineComponentList;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_poiId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *groupFooterTitle; // @synthesize groupFooterTitle=_groupFooterTitle;
@property(retain, nonatomic) NSArray *groupBuyArray; // @synthesize groupBuyArray=_groupBuyArray;
@property(copy, nonatomic) NSString *groupBuyTitle; // @synthesize groupBuyTitle=_groupBuyTitle;
@property(retain, nonatomic) FinderPoiBasicInfoResponse_RecommendDishesComponent *recommendDishesComponent; // @synthesize recommendDishesComponent=_recommendDishesComponent;
@property(copy, nonatomic) NSString *poiAddress; // @synthesize poiAddress=_poiAddress;
@property(retain, nonatomic) WCFinderPoiLineComponetArray *lineComponentList; // @synthesize lineComponentList=_lineComponentList;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
- (id)toPBPoiBasicInfo;
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

