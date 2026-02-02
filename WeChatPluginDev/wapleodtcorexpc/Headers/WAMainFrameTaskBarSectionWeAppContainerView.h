//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UICollectionView, UICollectionViewFlowLayout, WAMainFrameTaskBarSectionMyWeAppView, WAMainFrameTaskBarSectionWeAppView;
@protocol WAMainFrameTaskBarSectionWeAppContainerDelegate><WAMainFrameTaskBarSectionWeAppViewDelegate;

@interface WAMainFrameTaskBarSectionWeAppContainerView
{
    _Bool _cellOnceCreated;
    id <WAMainFrameTaskBarSectionWeAppContainerDelegate><WAMainFrameTaskBarSectionWeAppViewDelegate> _delegate;
    WAMainFrameTaskBarSectionWeAppView *_weAppView;
    WAMainFrameTaskBarSectionMyWeAppView *_myWeAppView;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
}

+ (double)contentHeightWithWeAppViewModel:(id)arg1 myWeAppViewModel:(id)arg2;
+ (long long)topAreaHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool cellOnceCreated; // @synthesize cellOnceCreated=_cellOnceCreated;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WAMainFrameTaskBarSectionMyWeAppView *myWeAppView; // @synthesize myWeAppView=_myWeAppView;
@property(retain, nonatomic) WAMainFrameTaskBarSectionWeAppView *weAppView; // @synthesize weAppView=_weAppView;
@property(nonatomic) __weak id <WAMainFrameTaskBarSectionWeAppContainerDelegate><WAMainFrameTaskBarSectionWeAppViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)myWeAppViewModel;
- (id)weAppViewModel;
- (id)arrMyWeAppItem;
- (id)arrWeAppItem;
- (id)weAppSectionData;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)reloadSection:(id)arg1;
- (void)deleteCollectionViewSections:(id)arg1;
- (void)animateChangeSectionHeight;
- (id)createLayout;
- (void)reload;
- (void)onClickSearch;
- (void)layoutSubviews;
- (void)initCollectionView;
- (void)initView;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

