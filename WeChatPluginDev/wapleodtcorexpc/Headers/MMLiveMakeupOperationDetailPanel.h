//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveBeautyNewStyleSlider, MMLiveMakeupViewModel, MMUIButton, MMUIMaskContainerView, NSIndexPath, NSString, UICollectionView, UITapGestureRecognizer;
@protocol MMLiveMakeupOperationDetailPanelDelegate;

@interface MMLiveMakeupOperationDetailPanel : UIView
{
    _Bool _isAppearing;
    id <MMLiveMakeupOperationDetailPanelDelegate> _actionDelegate;
    id <MMLiveMakeupOperationDetailPanelDelegate> _containerDelegate;
    MMLiveMakeupViewModel *_viewModel;
    UIView *_panelView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MMUIButton *_arrowButton;
    MMUIButton *_resetDefaultButton;
    UICollectionView *_makeupDetailItemsCollectionView;
    MMFinderLiveBeautyNewStyleSlider *_makeupStyleSlider;
    NSIndexPath *_currentMakeupDetailItemIndexPath;
    unsigned long long _selectIndex;
    MMUIMaskContainerView *_collectionContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIMaskContainerView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(nonatomic) unsigned long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSIndexPath *currentMakeupDetailItemIndexPath; // @synthesize currentMakeupDetailItemIndexPath=_currentMakeupDetailItemIndexPath;
@property(retain, nonatomic) MMFinderLiveBeautyNewStyleSlider *makeupStyleSlider; // @synthesize makeupStyleSlider=_makeupStyleSlider;
@property(retain, nonatomic) UICollectionView *makeupDetailItemsCollectionView; // @synthesize makeupDetailItemsCollectionView=_makeupDetailItemsCollectionView;
@property(retain, nonatomic) MMUIButton *resetDefaultButton; // @synthesize resetDefaultButton=_resetDefaultButton;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMLiveMakeupViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MMLiveMakeupOperationDetailPanelDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(nonatomic) __weak id <MMLiveMakeupOperationDetailPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)updateMakeupStyleSliderValue;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onBeautyStyleSliderTouchDown:(id)arg1;
- (void)onBeautyStyleSliderTouchUp:(id)arg1;
- (void)onTappedMutuallyExclusiveCell;
- (void)onBeautyStyleSliderValueChanged:(id)arg1;
- (void)checkHideSliderProgressTipIfNeeded;
- (void)cancelDelayCheckHideSliderProgressTip;
- (void)delayCheckHideSliderProgressTip;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setCurrentMakeupDetailItemEffect;
- (id)currentDetailItem;
- (void)resetDefaultValue;
- (void)updateResetButtonState;
- (void)exitChangeDetailMode:(_Bool)arg1;
- (void)exitChangeDetailModeAction;
- (void)showPanel;
- (void)updatePanelViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

