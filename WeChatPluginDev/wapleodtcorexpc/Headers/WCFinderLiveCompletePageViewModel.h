//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UICollectionView, UINavigationController, WCFinderLiveCompleteScrollView, WCFinderLiveHomePageViewController;

@interface WCFinderLiveCompletePageViewModel : NSObject
{
    _Bool _canScroll;
    _Bool _canShowHomePage;
    long long _index;
    CDUnknownBlockType _pageChangeBlock;
    UICollectionView *_mainCollectionView;
    WCFinderLiveCompleteScrollView *_topScrollView;
    WCFinderLiveHomePageViewController *_homePageVC;
    UINavigationController *_bottomNavViewController;
    unsigned long long _scene;
    struct CGRect _topScrollViewFrame;
    struct CGRect _bottomViewFrame;
    struct CGRect _collectionViewFrame;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UINavigationController *bottomNavViewController; // @synthesize bottomNavViewController=_bottomNavViewController;
@property(nonatomic) struct CGRect collectionViewFrame; // @synthesize collectionViewFrame=_collectionViewFrame;
@property(nonatomic) struct CGRect bottomViewFrame; // @synthesize bottomViewFrame=_bottomViewFrame;
@property(nonatomic) struct CGRect topScrollViewFrame; // @synthesize topScrollViewFrame=_topScrollViewFrame;
@property(nonatomic) __weak WCFinderLiveHomePageViewController *homePageVC; // @synthesize homePageVC=_homePageVC;
@property(retain, nonatomic) WCFinderLiveCompleteScrollView *topScrollView; // @synthesize topScrollView=_topScrollView;
@property(retain, nonatomic) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(nonatomic) _Bool canShowHomePage; // @synthesize canShowHomePage=_canShowHomePage;
@property(copy, nonatomic) CDUnknownBlockType pageChangeBlock; // @synthesize pageChangeBlock=_pageChangeBlock;
@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
@property(nonatomic) long long index; // @synthesize index=_index;
- (_Bool)isVCVisable;
- (double)getItemHeight:(id)arg1;
- (double)getItemWidth;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateUI:(_Bool)arg1 collectionView:(id)arg2;
- (_Bool)collectionViewFrameSizeChanged:(id)arg1;
- (void)updateBottomViewFrame:(struct CGRect)arg1 collectionView:(id)arg2;
- (void)updatetopScrollViewFrame:(struct CGRect)arg1 collectionView:(id)arg2;
- (void)updateBottomViewController:(id)arg1 collectionView:(id)arg2;
- (void)updateFrameWitTopViewFrame:(struct CGRect)arg1 bottomViewFrame:(struct CGRect)arg2 collectionView:(id)arg3;
- (void)updatetopScrollView:(id)arg1 homePageVC:(id)arg2 mainCollectionView:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)canShowHomePageVC;
- (void)handelEndScroll;
- (long long)getCurrentIndex;
- (void)updateIndex:(long long)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

