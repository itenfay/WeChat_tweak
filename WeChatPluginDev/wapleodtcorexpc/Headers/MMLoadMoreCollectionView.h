//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class UIView;
@protocol MMLoadMoreCollectionViewDelegate;

@interface MMLoadMoreCollectionView : UICollectionView
{
    _Bool _disableLoadMore;
    _Bool _isLoading;
    id <MMLoadMoreCollectionViewDelegate> _loadMoreDelegate;
    double _beginLoadMoreOffset;
    double _loadingTimeOutDuration;
    double _startLoadingAnimationDuration;
    double _stopLoadingAnimationDuration;
    double _customOffset;
    UIView *_loadingView;
    long long _currentDirection;
    struct UIEdgeInsets _insetsBefore;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentDirection; // @synthesize currentDirection=_currentDirection;
@property _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) struct UIEdgeInsets insetsBefore; // @synthesize insetsBefore=_insetsBefore;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) double customOffset; // @synthesize customOffset=_customOffset;
@property(nonatomic) double stopLoadingAnimationDuration; // @synthesize stopLoadingAnimationDuration=_stopLoadingAnimationDuration;
@property(nonatomic) double startLoadingAnimationDuration; // @synthesize startLoadingAnimationDuration=_startLoadingAnimationDuration;
@property(nonatomic) double loadingTimeOutDuration; // @synthesize loadingTimeOutDuration=_loadingTimeOutDuration;
@property(nonatomic) double beginLoadMoreOffset; // @synthesize beginLoadMoreOffset=_beginLoadMoreOffset;
@property(nonatomic) _Bool disableLoadMore; // @synthesize disableLoadMore=_disableLoadMore;
@property(nonatomic) __weak id <MMLoadMoreCollectionViewDelegate> loadMoreDelegate; // @synthesize loadMoreDelegate=_loadMoreDelegate;
- (void)onLoadDone;
- (void)startLoadMore;
- (void)startLoadMoreAnimation;
- (_Bool)isInLoading;
- (void)startLoadAnimationIfNeeded;
- (void)forceStartLoadAnimation;
- (void)tryStartLoadMore;
- (void)onScrollViewDidEndDecelerating;
- (void)onScrollViewWillBeginDecelerating;
- (void)setLoadMoreView:(id)arg1 WithSize:(struct CGSize)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

