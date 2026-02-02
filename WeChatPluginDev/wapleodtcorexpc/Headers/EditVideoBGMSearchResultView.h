//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditVideoBGMSearchResultCollectionViewFooterView, NSIndexPath, NSMutableArray, NSString, UICollectionView;
@protocol EditVideoBGMSearchResultViewDelegate;

@interface EditVideoBGMSearchResultView
{
    id <EditVideoBGMSearchResultViewDelegate> _delegate;
    NSMutableArray *_musicList;
    unsigned long long _maxExposureIndex;
    NSIndexPath *_selectedIndexPath;
    UICollectionView *_collectionView;
    EditVideoBGMSearchResultCollectionViewFooterView *_footerView;
    unsigned long long _replayTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long replayTime; // @synthesize replayTime=_replayTime;
@property(retain, nonatomic) EditVideoBGMSearchResultCollectionViewFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) unsigned long long maxExposureIndex; // @synthesize maxExposureIndex=_maxExposureIndex;
@property(retain, nonatomic) NSMutableArray *musicList; // @synthesize musicList=_musicList;
@property(nonatomic) __weak id <EditVideoBGMSearchResultViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onEditVideoBGMSearchResultCollectionViewFooterViewTriggerRefresh:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)resetStatus:(unsigned long long)arg1;
- (void)replay;
- (void)readyToPlay;
- (void)setSelectState:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

