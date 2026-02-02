//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderWindowProductInfo_SkuAttrInfoList, MMFinderLiveGoodsSKUSelectViewTail, NSString, UICollectionView;
@protocol MMFinderLiveGoodsSKUSelectViewDelegate;

@interface MMFinderLiveGoodsSKUSelectView : UIView
{
    _Bool _shouldShowImages;
    id <MMFinderLiveGoodsSKUSelectViewDelegate> _delegate;
    MMFinderLiveGoodsSKUSelectViewTail *_tail;
    UICollectionView *_skuCollectionView;
    unsigned long long _labelsMaxLine;
    FinderWindowProductInfo_SkuAttrInfoList *_skus;
    struct CGSize _cellSizeWithImage;
}

+ (double)heightFor:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderWindowProductInfo_SkuAttrInfoList *skus; // @synthesize skus=_skus;
@property(nonatomic) struct CGSize cellSizeWithImage; // @synthesize cellSizeWithImage=_cellSizeWithImage;
@property(nonatomic) unsigned long long labelsMaxLine; // @synthesize labelsMaxLine=_labelsMaxLine;
@property(retain, nonatomic) UICollectionView *skuCollectionView; // @synthesize skuCollectionView=_skuCollectionView;
@property(retain, nonatomic) MMFinderLiveGoodsSKUSelectViewTail *tail; // @synthesize tail=_tail;
@property(nonatomic) _Bool shouldShowImages; // @synthesize shouldShowImages=_shouldShowImages;
@property(nonatomic) __weak id <MMFinderLiveGoodsSKUSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForReuse;
- (void)onTailTapped;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)fillWithSkuList:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

