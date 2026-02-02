//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AchievementInfo, MMUIButton, NSString, UICollectionView, UIPageControl, UIView;

@interface WCFinderGameAchievementPanelViewSheet
{
    AchievementInfo *_achievementInfo;
    UICollectionView *_collectionView;
    UIView *_containerView;
    MMUIButton *_closeButton;
    UIPageControl *_pageCtrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) AchievementInfo *achievementInfo; // @synthesize achievementInfo=_achievementInfo;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onPan:(id)arg1;
- (void)onClickClose;
- (void)onTapClose:(id)arg1;
- (void)showOnView:(id)arg1;
- (void)setSelectedInfo:(id)arg1;
- (void)makeHalfCorner:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAchievementInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

