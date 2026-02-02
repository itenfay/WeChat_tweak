//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UICollectionView, UICollectionViewLayout, WCAddressPickerBtnGroupView, WCAddressPickerHeadView, WCAddressStageDataStruct;
@protocol WCAddressHalfScreenDelegate;

@interface WCAddressHalfScreenPickerView
{
    id <WCAddressHalfScreenDelegate> m_delegate;
    double m_originPickerY;
    unsigned long long m_numOfCollectionCell;
    NSMutableArray *m_arrStage;
    WCAddressStageDataStruct *m_selectProvince;
    WCAddressStageDataStruct *m_selectCity;
    WCAddressStageDataStruct *m_selectDistrict;
    WCAddressStageDataStruct *m_selectStreet;
    double _layoutOffsetY;
    unsigned long long m_currComponent;
    int m_appearComponent;
    int m_maxStageComponent;
    WCAddressPickerHeadView *_headView;
    WCAddressPickerBtnGroupView *_btnGroupView;
    UICollectionView *_collectionView;
    UICollectionViewLayout *_collectionViewLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCAddressPickerBtnGroupView *btnGroupView; // @synthesize btnGroupView=_btnGroupView;
@property(retain, nonatomic) WCAddressPickerHeadView *headView; // @synthesize headView=_headView;
- (void)updateTopBarLayout:(double)arg1;
- (void)moveTopBarWithContentOffset:(double)arg1;
- (void)layoutSubviewsWhenHeaderChange:(double)arg1;
- (void)setAddressWithProvince:(id)arg1 andCity:(id)arg2 andDistrict:(id)arg3 andStreet:(id)arg4 andDetail:(id)arg5;
- (_Bool)isNonDistrictCity:(id)arg1;
- (void)layoutBtnGroupViewsAtComponent:(unsigned long long)arg1;
- (void)chooseProvinceStageWithNonCity:(id)arg1;
- (void)chooseAddressAtComponent:(unsigned long long)arg1 withStageData:(id)arg2;
- (void)moveToStage:(unsigned long long)arg1 withAnimated:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setSelectorMode:(unsigned long long)arg1;
- (void)setSelectStageWithNationalCode:(id)arg1;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3 Street:(id)arg4 Notify:(_Bool)arg5;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3 Street:(id)arg4;
- (id)defaultStreetData;
- (id)selectedStreet;
- (id)selectedDistrict;
- (id)selectedCity;
- (id)selectedProvince;
- (id)displayCell;
- (id)componentAtIndex:(unsigned long long)arg1;
- (void)setScreenViewDelegate:(id)arg1;
- (void)setStagesInfo:(id)arg1;
- (void)setMaxStageComponent:(int)arg1;
- (void)setComponentWhenAppear:(int)arg1;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillAppear;
- (void)initData;
- (void)initView:(_Bool)arg1;
- (id)initWithAuthorizationStatus:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

