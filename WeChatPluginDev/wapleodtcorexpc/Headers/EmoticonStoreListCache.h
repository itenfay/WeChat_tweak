//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface EmoticonStoreListCache
{
    unsigned int _m_topHotNum;
    unsigned int _m_recentHotNum;
    NSMutableArray *_itemList;
    NSMutableArray *_m_adArray;
    NSMutableArray *_m_cellSetList;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_cellSetList;
+ (void)PBArrayAdd_m_adArray;
+ (void)PBArrayAdd_m_recentHotNum;
+ (void)PBArrayAdd_m_topHotNum;
+ (void)PBArrayAdd_itemList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_cellSetList; // @synthesize m_cellSetList=_m_cellSetList;
@property(nonatomic) unsigned int m_recentHotNum; // @synthesize m_recentHotNum=_m_recentHotNum;
@property(nonatomic) unsigned int m_topHotNum; // @synthesize m_topHotNum=_m_topHotNum;
@property(retain, nonatomic) NSMutableArray *m_adArray; // @synthesize m_adArray=_m_adArray;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

