//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, WCPayOverseaReadActivityList, WCPayOverseaTypeInfoObject;

@interface WCPayOverseaMainWalletPayFunctionData
{
    _Bool _m_hasFooterView;
    _Bool _m_rightTopNew;
    NSArray *_m_functionList;
    WCPayOverseaTypeInfoObject *_m_typeInfo;
    WCPayOverseaReadActivityList *_m_readList;
    NSArray *_m_walletRegionDescArray;
    double _m_currentTotalHeight;
    unsigned long long _m_rowCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_rightTopNew; // @synthesize m_rightTopNew=_m_rightTopNew;
@property(nonatomic) unsigned long long m_rowCount; // @synthesize m_rowCount=_m_rowCount;
@property(nonatomic) double m_currentTotalHeight; // @synthesize m_currentTotalHeight=_m_currentTotalHeight;
@property(nonatomic) _Bool m_hasFooterView; // @synthesize m_hasFooterView=_m_hasFooterView;
@property(retain, nonatomic) NSArray *m_walletRegionDescArray; // @synthesize m_walletRegionDescArray=_m_walletRegionDescArray;
@property(retain, nonatomic) WCPayOverseaReadActivityList *m_readList; // @synthesize m_readList=_m_readList;
@property(retain, nonatomic) WCPayOverseaTypeInfoObject *m_typeInfo; // @synthesize m_typeInfo=_m_typeInfo;
@property(retain, nonatomic) NSArray *m_functionList; // @synthesize m_functionList=_m_functionList;
- (double)totalHeight;
- (unsigned long long)rowCount;
- (id)totalRegionDesc;
- (double)footerViewHeight;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)caluateDynamicCellHeight:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

@end

