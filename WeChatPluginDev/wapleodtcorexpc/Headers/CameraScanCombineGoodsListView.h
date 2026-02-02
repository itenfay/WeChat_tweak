//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CameraScanCombineGoodsListViewExpandLayout, CameraScanCombineGoodsListViewLayout, NSMutableArray, NSString, UICollectionView;
@protocol CameraScanCombineGoodsListViewDelegate;

@interface CameraScanCombineGoodsListView : UIView
{
    _Bool _isFold;
    _Bool _isProcessingViewModel;
    _Bool _bChangingLayout;
    id <CameraScanCombineGoodsListViewDelegate> _delegate;
    UIView *_collectionContainerView;
    UICollectionView *_collectionView;
    NSMutableArray *_viewModels;
    UIView *_gradientMaskView;
    NSMutableArray *_viewModelsQueue;
    CAGradientLayer *_gradientLayer;
    CameraScanCombineGoodsListViewLayout *_normalLayout;
    CameraScanCombineGoodsListViewExpandLayout *_expandLayout;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bChangingLayout; // @synthesize bChangingLayout=_bChangingLayout;
@property(retain, nonatomic) CameraScanCombineGoodsListViewExpandLayout *expandLayout; // @synthesize expandLayout=_expandLayout;
@property(retain, nonatomic) CameraScanCombineGoodsListViewLayout *normalLayout; // @synthesize normalLayout=_normalLayout;
@property(nonatomic) _Bool isProcessingViewModel; // @synthesize isProcessingViewModel=_isProcessingViewModel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) NSMutableArray *viewModelsQueue; // @synthesize viewModelsQueue=_viewModelsQueue;
@property(retain, nonatomic) UIView *gradientMaskView; // @synthesize gradientMaskView=_gradientMaskView;
@property(retain, nonatomic) NSMutableArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(nonatomic) __weak id <CameraScanCombineGoodsListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onTapView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)shouldUseDefaultUpdateAnimation;
- (double)gradienLayerMaskHeight;
- (void)onCompleteAppendItemAnimationWithItemViewModel:(id)arg1;
- (_Bool)__checkExisitViewModelAndReplaceIfNeeded:(id)arg1;
- (void)animateToInsertFirstCellWithViewModel:(id)arg1;
- (_Bool)isStringChanged:(id)arg1 andNewString:(id)arg2;
- (_Bool)shouldReplaceViewModel:(id)arg1 withNewViewModel:(id)arg2;
- (void)__enqueueWithViewModel:(id)arg1;
- (void)__checkQueue;
- (void)listViewDidFold:(_Bool)arg1;
- (void)changeListViewToFold:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateItemToFailWithViewModel:(id)arg1;
- (id)itemsNeedRetrack;
- (void)clearListView;
- (long long)indexOfCardWithItemViewModel:(id)arg1;
- (unsigned long long)listItemCardCount;
- (_Bool)isListEmpty;
- (void)appendNewItemWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)appendItemWithViewModel:(id)arg1;
- (void)initMaskViewWithHeight:(double)arg1;
- (void)initSubviews;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

