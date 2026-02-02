//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, UILabel, WCFinderStreamFooterView;

@interface WCFinderStreamProfileDraftPage
{
    WCFinderStreamFooterView *_footerView;
    UILabel *_statusTips;
    NSMutableSet *_exposeCellIds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *exposeCellIds; // @synthesize exposeCellIds=_exposeCellIds;
@property(retain, nonatomic) UILabel *statusTips; // @synthesize statusTips=_statusTips;
@property(nonatomic) __weak WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
- (_Bool)checkLongVideoFileValid:(id)arg1;
- (void)onMusicView:(id)arg1 exposeMenuAction:(id)arg2 feedVM:(id)arg3;
- (void)onMusicViewDidClickDelete:(id)arg1 feedVM:(id)arg2;
- (void)onMusicViewDidClickRetry:(id)arg1 feedVM:(id)arg2;
- (void)onMusicViewDidSlideDelete:(id)arg1 feedVM:(id)arg2;
- (id)hostVC;
- (void)onTagRetry;
- (void)updateStatusTips:(_Bool)arg1;
- (void)updateStatusWithHasError:(_Bool)arg1;
- (void)reloadCollectionView;
- (_Bool)reloadDataWithBatchModify;
- (void)viewModel:(id)arg1 deleteItemAtIdx:(long long)arg2;
- (void)viewModel:(id)arg1 fetchDataError:(id)arg2;
- (void)viewModelDataChanged:(id)arg1;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)openFinderEditor:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

