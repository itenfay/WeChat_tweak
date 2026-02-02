//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMapTable, NSString, UICollectionView;

@interface WCFinderNavTabViewController
{
    double _navTabPaddingButton;
    UICollectionView *_collectionView;
    NSArray *_pages;
    NSMapTable *_pageMaps;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *pageMaps; // @synthesize pageMaps=_pageMaps;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double navTabPaddingButton; // @synthesize navTabPaddingButton=_navTabPaddingButton;
- (id)getCurrentPageViewController;
- (id)pageViewForIndexPath:(id)arg1;
- (void)_updateTitleView;
- (void)reload;
- (id)definePages;
- (_Bool)disableScrollViewBottomInsetAdjustment;
- (double)collectionViewTopMargin;
- (id)getCollectionView;
- (void)installCollectionView;
- (id)titleView;
- (void)installTitleView;
- (void)setupProperty;
- (struct CGRect)collectionViewTargetFrame;
- (_Bool)shouldRelayoutCollectionView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onTitleViewSelectedIdx:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

