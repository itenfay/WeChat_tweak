//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnchorCloseLivePageDataUnit, NSString, UICollectionView, WCFinderLiveCompleteDataModel;

@interface WCFinderLiveCompleteDataPageView
{
    CDUnknownBlockType _itemSelectBlock;
    CDUnknownBlockType _dataViewBlock;
    CDUnknownBlockType _dataViewExposeBlock;
    AnchorCloseLivePageDataUnit *_pageDataUnit;
    WCFinderLiveCompleteDataModel *_dataModel;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCFinderLiveCompleteDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) AnchorCloseLivePageDataUnit *pageDataUnit; // @synthesize pageDataUnit=_pageDataUnit;
@property(copy, nonatomic) CDUnknownBlockType dataViewExposeBlock; // @synthesize dataViewExposeBlock=_dataViewExposeBlock;
@property(copy, nonatomic) CDUnknownBlockType dataViewBlock; // @synthesize dataViewBlock=_dataViewBlock;
@property(copy, nonatomic) CDUnknownBlockType itemSelectBlock; // @synthesize itemSelectBlock=_itemSelectBlock;
- (void)dataViewClick;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)isClickEnable:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithPageData:(id)arg1 dataModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

