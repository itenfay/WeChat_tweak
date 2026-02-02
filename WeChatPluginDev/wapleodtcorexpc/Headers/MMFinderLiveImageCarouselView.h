//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSArray, NSString, UICollectionView;

@interface MMFinderLiveImageCarouselView : UIView
{
    _Bool _isAnimating;
    _Bool _isShowForClear;
    _Bool _isScrolling;
    _Bool _isForceDisplay;
    UICollectionView *_collectionView;
    long long _autoScrollCurrentIndex;
    NSArray *_viewModelArr;
    MMTimer *_timer;
    double _scrollTimeInterval;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isForceDisplay; // @synthesize isForceDisplay=_isForceDisplay;
@property(nonatomic) double scrollTimeInterval; // @synthesize scrollTimeInterval=_scrollTimeInterval;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSArray *viewModelArr; // @synthesize viewModelArr=_viewModelArr;
@property(nonatomic) _Bool isShowForClear; // @synthesize isShowForClear=_isShowForClear;
@property(nonatomic) long long autoScrollCurrentIndex; // @synthesize autoScrollCurrentIndex=_autoScrollCurrentIndex;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollCollectionViewToNext;
- (void)invokeAutoScroll;
- (void)operationViewHide;
- (void)operationViewShow;
- (void)stopAnimation;
- (void)startAnimation;
- (void)updateScrollTimeIfNeeded:(double)arg1;
- (void)tryUpdateCollectionView:(id)arg1;
- (_Bool)checkViewModelNotEqual:(id)arg1;
- (void)updateViewModel:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

