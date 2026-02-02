//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class ICBatchFetchingContext, UIView;
@protocol ICFlowBatchFetchingDelegate;

@interface ICCollectionView : UICollectionView
{
    id <ICFlowBatchFetchingDelegate> _batchFetchingDelegate;
    double _leadingScreensForBatching;
    UIView *_collectionHeaderView;
    UIView *_collectionFooterView;
    UIView *_collectionFooterContainerView;
    UIView *_collectionHeaderContainerView;
    ICBatchFetchingContext *_batchFetchingContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICBatchFetchingContext *batchFetchingContext; // @synthesize batchFetchingContext=_batchFetchingContext;
@property(retain, nonatomic) UIView *collectionHeaderContainerView; // @synthesize collectionHeaderContainerView=_collectionHeaderContainerView;
@property(retain, nonatomic) UIView *collectionFooterContainerView; // @synthesize collectionFooterContainerView=_collectionFooterContainerView;
@property(retain, nonatomic) UIView *collectionFooterView; // @synthesize collectionFooterView=_collectionFooterView;
@property(retain, nonatomic) UIView *collectionHeaderView; // @synthesize collectionHeaderView=_collectionHeaderView;
@property(nonatomic) double leadingScreensForBatching; // @synthesize leadingScreensForBatching=_leadingScreensForBatching;
@property(nonatomic) __weak id <ICFlowBatchFetchingDelegate> batchFetchingDelegate; // @synthesize batchFetchingDelegate=_batchFetchingDelegate;
- (void)stopBatchFetching;
- (void)_beginBatchFetching;
- (void)beginBatchFetchingIfNeeded:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)checkForBatchFetching;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (struct CGRect)updateContainerViewFrame:(id)arg1 contentView:(id)arg2;
- (void)updateCollectionFooterViewFrame;
- (void)updateCollectionHeaderViewFrame;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

