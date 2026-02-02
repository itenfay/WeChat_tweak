//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonLensInfo, EmoticonStoreFootView, MMUIView, NSArray, NSIndexPath, NSString, UICollectionView, UILabel;
@protocol EmoticonLensMoreViewDelegate;

@interface EmoticonLensMoreView
{
    MMUIView *_backgroundView;
    MMUIView *_topNavBar;
    MMUIView *_navBarSeparator;
    UILabel *_titleLabel;
    UICollectionView *_lensCollectionView;
    EmoticonStoreFootView *_footerView;
    id <EmoticonLensMoreViewDelegate> _lensDelegate;
    NSArray *_recentUseItems;
    NSArray *_recommandItems;
    NSIndexPath *_selectedIndex;
    long long _numberPerRow;
    EmoticonLensInfo *_selectedLens;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonLensInfo *selectedLens; // @synthesize selectedLens=_selectedLens;
@property(nonatomic) long long numberPerRow; // @synthesize numberPerRow=_numberPerRow;
@property(retain, nonatomic) NSIndexPath *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *recommandItems; // @synthesize recommandItems=_recommandItems;
@property(retain, nonatomic) NSArray *recentUseItems; // @synthesize recentUseItems=_recentUseItems;
@property(nonatomic) __weak id <EmoticonLensMoreViewDelegate> lensDelegate; // @synthesize lensDelegate=_lensDelegate;
@property(retain, nonatomic) EmoticonStoreFootView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionView *lensCollectionView; // @synthesize lensCollectionView=_lensCollectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *navBarSeparator; // @synthesize navBarSeparator=_navBarSeparator;
@property(retain, nonatomic) MMUIView *topNavBar; // @synthesize topNavBar=_topNavBar;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)reloadDataAndExposure;
- (id)lensItemAtIndex:(id)arg1;
- (void)onHalfScreenPage:(id)arg1 contentTopChanged:(double)arg2;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onEmoticonLensListRequestSuccess:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)setupContentView;
@property(readonly, nonatomic) NSArray *visiableLens;
- (void)reloadDataWithWidth:(double)arg1;
@property(readonly, nonatomic) long long selectedLensIndex;
- (void)tryAppendLens:(id)arg1;
- (void)setSelectLens:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHeight:(double)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

