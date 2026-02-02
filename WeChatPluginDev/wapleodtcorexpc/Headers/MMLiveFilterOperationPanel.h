//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMFinderLiveBeautyNewStyleSlider, MMLiveTaskId, MMUIButton, MMUILabel, MMUIMaskContainerView, NSArray, NSString, UICollectionView, UIImageView, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol MMLiveBeautyLogicProvider, MMLiveFilterOperationPanelDelegate;

@interface MMLiveFilterOperationPanel : UIView
{
    _Bool _isShowing;
    id <MMLiveFilterOperationPanelDelegate> _actionDelegate;
    MMLiveTaskId *_taskId;
    UIView *_panelView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CAGradientLayer *_panelBackgroundGradientLayer;
    MMUIButton *_arrowButton;
    MMUILabel *_beautyExtSettingLabel;
    UIImageView *_beautyExtSettingImage;
    UICollectionView *_filterItemsCollectionView;
    MMFinderLiveBeautyNewStyleSlider *_beautyStyleSlider;
    NSArray *_filterDataItemsList;
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider;
    UISwipeGestureRecognizer *_leftSwipeGesture;
    UISwipeGestureRecognizer *_rightSwipeGesture;
    MMUIMaskContainerView *_collectionContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIMaskContainerView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(retain, nonatomic) UISwipeGestureRecognizer *rightSwipeGesture; // @synthesize rightSwipeGesture=_rightSwipeGesture;
@property(retain, nonatomic) UISwipeGestureRecognizer *leftSwipeGesture; // @synthesize leftSwipeGesture=_leftSwipeGesture;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) id <MMLiveBeautyLogicProvider> beautyLogicProvider; // @synthesize beautyLogicProvider=_beautyLogicProvider;
@property(retain, nonatomic) NSArray *filterDataItemsList; // @synthesize filterDataItemsList=_filterDataItemsList;
@property(retain, nonatomic) MMFinderLiveBeautyNewStyleSlider *beautyStyleSlider; // @synthesize beautyStyleSlider=_beautyStyleSlider;
@property(retain, nonatomic) UICollectionView *filterItemsCollectionView; // @synthesize filterItemsCollectionView=_filterItemsCollectionView;
@property(retain, nonatomic) UIImageView *beautyExtSettingImage; // @synthesize beautyExtSettingImage=_beautyExtSettingImage;
@property(retain, nonatomic) MMUILabel *beautyExtSettingLabel; // @synthesize beautyExtSettingLabel=_beautyExtSettingLabel;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer; // @synthesize panelBackgroundGradientLayer=_panelBackgroundGradientLayer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveFilterOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)swipe:(unsigned long long)arg1;
- (_Bool)canSwipeWithGesture:(id)arg1;
- (void)onRightSwipeGesture:(id)arg1;
- (void)onLeftSwipeGesture:(id)arg1;
- (id)beautyLogic;
- (_Bool)isInRoom;
- (void)onFilterSourceChangedTo:(unsigned long long)arg1;
- (void)onSkinSegEnableChangeTo:(_Bool)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
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
- (void)onBeautyStyleSliderTouchDown:(id)arg1;
- (void)onBeautyStyleSliderTouchUp:(id)arg1;
- (void)onBeautyStyleSliderValueChanged:(id)arg1;
- (void)closePanelDirectly;
- (void)close:(_Bool)arg1;
- (void)closeAction;
- (void)checkHideSliderProgressTipIfNeeded;
- (void)cancelDelayCheckHideSliderProgressTip;
- (void)delayCheckHideSliderProgressTip;
- (void)didDisAppear;
- (void)didAppear;
- (void)showPanel;
- (void)updateBeautyStyleSliderValue;
- (void)updateFilterDataItemsList;
- (id)getLiveTask;
- (void)setDisableDrag:(_Bool)arg1;
- (void)updatePanelViews;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 beautyLogic:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

