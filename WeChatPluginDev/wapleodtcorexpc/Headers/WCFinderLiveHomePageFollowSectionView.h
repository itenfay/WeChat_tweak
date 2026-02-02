//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderLiveHomePageFollowSectionViewModel, WCFinderLiveHomePageFooterView;
@protocol WCFinderLiveHomePageFollowSectionViewDelegate;

@interface WCFinderLiveHomePageFollowSectionView
{
    id <WCFinderLiveHomePageFollowSectionViewDelegate> _delegate;
    WCFinderLiveHomePageFooterView *_footerView;
}

+ (double)viewHeight:(_Bool)arg1 styleInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveHomePageFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <WCFinderLiveHomePageFollowSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMFetchFailWithErroCode:(long long)arg1;
- (void)onContainerSectionVMNoMoreData;
- (void)onContainerSectionVMFetchNextPageData:(id)arg1;
- (void)onContainerSectionVMRefreshAllData:(id)arg1;
- (_Bool)isEnableFooterTrigerLoading:(id)arg1;
- (void)didClickFooterRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)resetState;
- (void)prepareForReuse;
- (void)updateWithVM:(id)arg1;
- (id)generateCollectionView;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) WCFinderLiveHomePageFollowSectionViewModel *vm; // @dynamic vm;

@end

