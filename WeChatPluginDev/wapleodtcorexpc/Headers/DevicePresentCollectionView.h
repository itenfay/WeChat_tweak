//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol ScrollItemSelectionDelegate;

@interface DevicePresentCollectionView
{
    _Bool _changeIconColorOnAppearanceChange;
    id <ScrollItemSelectionDelegate> _selectDelegate;
    NSArray *_deviceArray;
    unsigned long long _numberOfItem;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_collectionView;
    struct CGSize _itemSize;
    struct UIEdgeInsets _sectionInset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) unsigned long long numberOfItem; // @synthesize numberOfItem=_numberOfItem;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(retain, nonatomic) NSArray *deviceArray; // @synthesize deviceArray=_deviceArray;
@property(nonatomic) _Bool changeIconColorOnAppearanceChange; // @synthesize changeIconColorOnAppearanceChange=_changeIconColorOnAppearanceChange;
@property(nonatomic) __weak id <ScrollItemSelectionDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
- (void)onItemClicked:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didMoveToSuperview;
- (void)configLayoutParams;
- (void)initPageSheetConfigs;
- (void)reloadWithDeviceArray:(id)arg1;
- (id)initWithDeviceArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

