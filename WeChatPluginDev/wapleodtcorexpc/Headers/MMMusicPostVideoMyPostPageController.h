//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicPostVideoCollectionFooterCell, MMMusicPostVideoMyPostDataVM, NSString, UICollectionView;

@interface MMMusicPostVideoMyPostPageController
{
    MMMusicPostVideoMyPostDataVM *_dataVM;
    UICollectionView *_listView;
    MMMusicPostVideoCollectionFooterCell *m_footerView;
    _Bool m_continueFlag;
}

- (void).cxx_destruct;
- (id)dataViewModel;
- (void)mmMusicPostVideoCollectionCell:(id)arg1 onSelectedBtnClicked:(id)arg2;
- (void)onDataVMDataChanged:(_Bool)arg1;
- (double)streamLayout:(id)arg1 heightForItemAtIndex:(id)arg2 itemWidth:(double)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)updateDataSelectedStatus;
- (void)onSwitchToThisPage:(_Bool)arg1;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (id)initWithCanMultiSelect:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

