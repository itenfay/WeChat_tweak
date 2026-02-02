//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveBeautyNewStyleSlider, MMLiveBeautyItem, MMLiveBeautySuite, MMLiveTaskId, MMUIButton, MMUIMaskContainerView, NSArray, NSString, UICollectionView, UIScrollView, UITapGestureRecognizer;
@protocol MMLiveBeautyLogicProvider, MMLiveBeautyOperationPanelDelegate;

@interface MMLiveBeautyOperationPanel : UIView
{
    _Bool _isAppearing;
    id <MMLiveBeautyOperationPanelDelegate> _actionDelegate;
    id <MMLiveBeautyOperationPanelDelegate> _containerDelegate;
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider;
    MMLiveTaskId *_taskId;
    MMLiveBeautySuite *_suite;
    UIView *_panelView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MMUIButton *_arrowButton;
    MMUIButton *_resetDefaultButton;
    UICollectionView *_beautyItemsCollectionView;
    MMFinderLiveBeautyNewStyleSlider *_beautyStyleSlider;
    MMLiveBeautyItem *_currentBeautyItem;
    UIScrollView *_tabScrollView;
    NSArray *_tabViews;
    UIView *_tabIndicatorView;
    unsigned long long _currentTabIndex;
    MMUIMaskContainerView *_collectionContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIMaskContainerView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(nonatomic) unsigned long long currentTabIndex; // @synthesize currentTabIndex=_currentTabIndex;
@property(retain, nonatomic) UIView *tabIndicatorView; // @synthesize tabIndicatorView=_tabIndicatorView;
@property(retain, nonatomic) NSArray *tabViews; // @synthesize tabViews=_tabViews;
@property(retain, nonatomic) UIScrollView *tabScrollView; // @synthesize tabScrollView=_tabScrollView;
@property(retain, nonatomic) MMLiveBeautyItem *currentBeautyItem; // @synthesize currentBeautyItem=_currentBeautyItem;
@property(retain, nonatomic) MMFinderLiveBeautyNewStyleSlider *beautyStyleSlider; // @synthesize beautyStyleSlider=_beautyStyleSlider;
@property(retain, nonatomic) UICollectionView *beautyItemsCollectionView; // @synthesize beautyItemsCollectionView=_beautyItemsCollectionView;
@property(retain, nonatomic) MMUIButton *resetDefaultButton; // @synthesize resetDefaultButton=_resetDefaultButton;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMLiveBeautySuite *suite; // @synthesize suite=_suite;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) id <MMLiveBeautyLogicProvider> beautyLogicProvider; // @synthesize beautyLogicProvider=_beautyLogicProvider;
@property(nonatomic) __weak id <MMLiveBeautyOperationPanelDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(nonatomic) __weak id <MMLiveBeautyOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)reportCustomEvent:(unsigned long long)arg1 viewId:(id)arg2;
- (void)onBeautyItemGroupTabViewTapped:(id)arg1;
- (id)getLiveTask;
- (void)updateItemGroupSelectedTab:(id)arg1;
- (void)adjustTabPageViewSelectIndex;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setCurrentBeautyItemIndexItemEffect;
- (void)onBeautyStyleSliderTouchDown:(id)arg1;
- (void)onBeautyStyleSliderTouchUp:(id)arg1;
- (void)onTappedMutuallyExclusiveCell;
- (void)onBeautyStyleSliderValueChanged:(id)arg1;
- (void)exitChangeDetailModeAction;
- (void)resetDefaultValue;
- (void)checkHideSliderProgressTipIfNeeded;
- (void)cancelDelayCheckHideSliderProgressTip;
- (void)delayCheckHideSliderProgressTip;
- (void)didDisAppear;
- (void)didAppear;
- (void)exitChangeDetailMode:(_Bool)arg1;
- (void)hide;
- (void)showPanelWithAnimation;
- (void)updateBeautyStyleSliderValue;
- (void)updateBeautyDataItemsList;
- (void)updateResetButtonState;
- (void)reloadTabPageView;
- (void)layoutItemGroupTabViews;
- (void)updatePanelViews;
- (void)layoutSubviews;
- (void)swipe:(unsigned long long)arg1;
- (id)beautyLogic;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

