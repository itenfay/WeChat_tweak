//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMLiveMakeupOperationDetailPanel, MMLiveMakeupViewModel, MMUIButton, MMUILabel, MMUIMaskContainerView, NSString, UICollectionView, UIImageView, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol MMLiveMakeupOperationPanelDelegate;

@interface MMLiveMakeupOperationPanel : UIView
{
    _Bool _isShowing;
    _Bool _isShowingNotice;
    id <MMLiveMakeupOperationPanelDelegate> _actionDelegate;
    UIView *_panelView;
    CAGradientLayer *_panelBackgroundGradientLayer;
    MMUIButton *_arrowButton;
    MMUILabel *_beautyExtSettingLabel;
    UIImageView *_beautyExtSettingImage;
    UICollectionView *_makeupItemCollectionView;
    UISwipeGestureRecognizer *_leftSwipeGesture;
    UISwipeGestureRecognizer *_rightSwipeGesture;
    MMLiveMakeupOperationDetailPanel *_detailPanel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MMLiveMakeupViewModel *_viewModel;
    MMUIMaskContainerView *_collectionContainerView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowingNotice; // @synthesize isShowingNotice=_isShowingNotice;
@property(retain, nonatomic) MMUIMaskContainerView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) MMLiveMakeupViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) MMLiveMakeupOperationDetailPanel *detailPanel; // @synthesize detailPanel=_detailPanel;
@property(retain, nonatomic) UISwipeGestureRecognizer *rightSwipeGesture; // @synthesize rightSwipeGesture=_rightSwipeGesture;
@property(retain, nonatomic) UISwipeGestureRecognizer *leftSwipeGesture; // @synthesize leftSwipeGesture=_leftSwipeGesture;
@property(retain, nonatomic) UICollectionView *makeupItemCollectionView; // @synthesize makeupItemCollectionView=_makeupItemCollectionView;
@property(retain, nonatomic) UIImageView *beautyExtSettingImage; // @synthesize beautyExtSettingImage=_beautyExtSettingImage;
@property(retain, nonatomic) MMUILabel *beautyExtSettingLabel; // @synthesize beautyExtSettingLabel=_beautyExtSettingLabel;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer; // @synthesize panelBackgroundGradientLayer=_panelBackgroundGradientLayer;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) __weak id <MMLiveMakeupOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)swipe:(unsigned long long)arg1;
- (_Bool)canSwipeWithGesture:(id)arg1;
- (void)onRightSwipeGesture:(id)arg1;
- (void)onLeftSwipeGesture:(id)arg1;
- (_Bool)isInRoom;
- (void)onFilterSourceChangedTo:(unsigned long long)arg1;
- (void)onSkinSegEnableChangeTo:(_Bool)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onTappedChangeDetailLabel;
- (void)onTappedresetDefaultValueButton;
- (void)onExitChangeDetailMode;
- (void)moveToDetailAdjustingState;
- (void)close:(_Bool)arg1;
- (void)closeAction;
- (void)didDisAppear;
- (void)didAppear;
- (void)closePanelDirectly;
- (void)showPanel;
- (void)layoutPanelViews;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

