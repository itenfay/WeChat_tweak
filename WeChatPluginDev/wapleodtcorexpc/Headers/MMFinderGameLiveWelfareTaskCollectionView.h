//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderGameLiveWelfareCollectionViewModel, MMTimer, UICollectionView;

@interface MMFinderGameLiveWelfareTaskCollectionView : UIView
{
    _Bool _isAnimating;
    UICollectionView *_collectionView;
    long long _autoScrollCurrentIndex;
    CDUnknownBlockType _contentWidthDidChange;
    MMFinderGameLiveWelfareCollectionViewModel *_viewModel;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMFinderGameLiveWelfareCollectionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType contentWidthDidChange; // @synthesize contentWidthDidChange=_contentWidthDidChange;
@property(nonatomic) long long autoScrollCurrentIndex; // @synthesize autoScrollCurrentIndex=_autoScrollCurrentIndex;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void)scrollCollectionViewToNext;
- (void)invokeAutoScroll;
- (void)stopAnimation;
- (void)startAnimation;
- (void)refreshWidthCurrentIndex:(long long)arg1;
- (void)refreshWidth:(double)arg1;
- (void)updateViewModel:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

