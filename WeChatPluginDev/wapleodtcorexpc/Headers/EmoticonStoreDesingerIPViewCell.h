//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class EmoticonLoadMoreFooterView, MMLoadMoreCollectionView, NSString, UICollectionViewFlowLayout;
@protocol EmoticonStoreDesingerIPViewCellDelegate;

@interface EmoticonStoreDesingerIPViewCell : UICollectionViewCell
{
    id <EmoticonStoreDesingerIPViewCellDelegate> _delegate;
    MMLoadMoreCollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    EmoticonLoadMoreFooterView *_loadMoreView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonLoadMoreFooterView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MMLoadMoreCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <EmoticonStoreDesingerIPViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLoadDone;
- (void)onLoadMore;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)ipSets;
- (void)onIPSetsUpdated;
- (void)initViews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

