//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderShopShelfLabelClassifyInfo, NSMutableArray, NSString, UICollectionView;
@protocol MMFinderLiveShopGoodsSectionHeaderClassifyViewDelegate;

@interface MMFinderLiveShopGoodsSectionHeaderClassifyView
{
    id <MMFinderLiveShopGoodsSectionHeaderClassifyViewDelegate> _delegate;
    NSMutableArray *_classifyInfos;
    FinderShopShelfLabelClassifyInfo *_selectedClassifyInfo;
    UICollectionView *_classifyCollectionView;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *classifyCollectionView; // @synthesize classifyCollectionView=_classifyCollectionView;
@property(retain, nonatomic) FinderShopShelfLabelClassifyInfo *selectedClassifyInfo; // @synthesize selectedClassifyInfo=_selectedClassifyInfo;
@property(retain, nonatomic) NSMutableArray *classifyInfos; // @synthesize classifyInfos=_classifyInfos;
@property(nonatomic) __weak id <MMFinderLiveShopGoodsSectionHeaderClassifyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)select:(id)arg1;
- (void)setClassifyInfos:(id)arg1 selected:(id)arg2;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

