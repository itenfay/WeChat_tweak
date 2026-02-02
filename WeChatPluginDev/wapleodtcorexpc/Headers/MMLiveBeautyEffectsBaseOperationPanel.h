//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMLiveEffectsBaseDataItem, MMLiveTaskId, MMUIButton, NSArray, NSString, UICollectionView, UITapGestureRecognizer;
@protocol MMLiveBeautyEffectsBaseOperationPanelDelegate, MMLiveBeautyLogicProvider;

@interface MMLiveBeautyEffectsBaseOperationPanel : UIView
{
    _Bool _isShowing;
    id <MMLiveBeautyEffectsBaseOperationPanelDelegate> _actionDelegate;
    MMLiveTaskId *_taskId;
    UIView *_panelView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CAGradientLayer *_panelBackgroundGradientLayer;
    MMUIButton *_arrowButton;
    UICollectionView *_itemsCollectionView;
    NSArray *_dataItemsList;
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider;
    MMLiveEffectsBaseDataItem *_downloadingItemWaitingForApplyEffect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveEffectsBaseDataItem *downloadingItemWaitingForApplyEffect; // @synthesize downloadingItemWaitingForApplyEffect=_downloadingItemWaitingForApplyEffect;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) id <MMLiveBeautyLogicProvider> beautyLogicProvider; // @synthesize beautyLogicProvider=_beautyLogicProvider;
@property(retain, nonatomic) NSArray *dataItemsList; // @synthesize dataItemsList=_dataItemsList;
@property(retain, nonatomic) UICollectionView *itemsCollectionView; // @synthesize itemsCollectionView=_itemsCollectionView;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer; // @synthesize panelBackgroundGradientLayer=_panelBackgroundGradientLayer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveBeautyEffectsBaseOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)reportAction:(unsigned long long)arg1 item:(id)arg2;
- (void)setEffect:(id)arg1;
- (_Bool)isEffectIdSelected:(id)arg1;
- (id)getDataItemList;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onDecorationMaterialResourceDownloadFailed:(id)arg1;
- (void)onDecorationMaterialResourceDownloadFinish:(id)arg1;
- (id)beautyLogic;
- (_Bool)isInRoom;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)closePanelDirectly;
- (void)close:(_Bool)arg1;
- (void)closeAction;
- (void)didDisAppear;
- (void)didAppear;
- (void)showPanel;
- (void)updateDataItemsList;
- (id)getLiveTask;
- (void)updatePanelViews;
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

