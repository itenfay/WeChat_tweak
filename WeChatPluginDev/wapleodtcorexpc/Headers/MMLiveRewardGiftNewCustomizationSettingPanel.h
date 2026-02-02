//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGiftNewCustomizationModel, MMFinderLiveRewardGiftItem, MMLiveRewardGiftNewCustomizationEditLogic, MMLiveRewardGiftNewCustomizationEffectPreviewView, MMLiveRewardGiftNewCustomizationInputToolView, MMLiveRewardGiftNewCustomizationPriceDisplayView, MMLiveRewardGiftNewCustomizationStyleSelectView, MMLiveTaskId, MMUIButton, NSString, UIView;

@interface MMLiveRewardGiftNewCustomizationSettingPanel
{
    _Bool _isKeyboardShow;
    _Bool _isCloseWithModified;
    CDUnknownBlockType _giftCustomizationSettingModifiedCallback;
    CDUnknownBlockType _giftCustomizationSettingClosedCallback;
    MMLiveTaskId *_taskId;
    MMFinderLiveRewardGiftItem *_giftItem;
    MMLiveRewardGiftNewCustomizationEditLogic *_customizationEditLogic;
    UIView *_panelView;
    MMUIButton *_closeButton;
    MMUIButton *_cancelButton;
    MMUIButton *_doneButton;
    MMLiveRewardGiftNewCustomizationEffectPreviewView *_effectPreviewView;
    MMLiveRewardGiftNewCustomizationPriceDisplayView *_priceDisplayView;
    MMLiveRewardGiftNewCustomizationStyleSelectView *_styleSelectView;
    MMLiveRewardGiftNewCustomizationInputToolView *_nameEditInputTool;
    CDUnknownBlockType _inputToolStateListener;
    double _keyboardHeight;
    struct CGRect _nameEditInputToolRectForUnActive;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCloseWithModified; // @synthesize isCloseWithModified=_isCloseWithModified;
@property(nonatomic) _Bool isKeyboardShow; // @synthesize isKeyboardShow=_isKeyboardShow;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(copy, nonatomic) CDUnknownBlockType inputToolStateListener; // @synthesize inputToolStateListener=_inputToolStateListener;
@property(nonatomic) struct CGRect nameEditInputToolRectForUnActive; // @synthesize nameEditInputToolRectForUnActive=_nameEditInputToolRectForUnActive;
@property(nonatomic) __weak MMLiveRewardGiftNewCustomizationInputToolView *nameEditInputTool; // @synthesize nameEditInputTool=_nameEditInputTool;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationStyleSelectView *styleSelectView; // @synthesize styleSelectView=_styleSelectView;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationPriceDisplayView *priceDisplayView; // @synthesize priceDisplayView=_priceDisplayView;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationEffectPreviewView *effectPreviewView; // @synthesize effectPreviewView=_effectPreviewView;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationEditLogic *customizationEditLogic; // @synthesize customizationEditLogic=_customizationEditLogic;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType giftCustomizationSettingClosedCallback; // @synthesize giftCustomizationSettingClosedCallback=_giftCustomizationSettingClosedCallback;
@property(copy, nonatomic) CDUnknownBlockType giftCustomizationSettingModifiedCallback; // @synthesize giftCustomizationSettingModifiedCallback=_giftCustomizationSettingModifiedCallback;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (void)pageSheetDidDisappear;
- (void)pageSheetDidAppear;
- (void)handleUIOrientationWillChange:(id)arg1;
- (unsigned long long)getKeyboardAnimationOptions:(id)arg1;
- (double)getKeyboardAnimationDuration:(id)arg1;
- (void)updateWidgetsAlphaForInputToolAndKeyBoardStateChanged;
- (void)updateUIForKeyboardShowChanged:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (void)onKeyboardShowing:(id)arg1;
- (void)removeEditInputToolFromHierarchy:(id)arg1;
- (void)insertEditInputToolToHierarchy:(id)arg1 frame:(struct CGRect)arg2 fromView:(id)arg3;
@property(readonly, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel;
- (void)onCloseButtonClick;
- (void)layoutCloseButton;
- (void)updateNameEditInputToolFrame;
- (void)onDoneButtonClick;
- (void)layoutDoneButton;
- (void)onCancelButtonClick;
- (void)layoutCancelButton;
- (void)layoutStyleSelectView;
- (void)layoutPriceDisplayView;
- (double)stayEditingModePreviewViewHeight;
- (double)inputModePreviewViewHeight;
- (double)normalModePreviewViewHeight;
- (double)effectPreviewViewHeight;
- (void)updateEffectPreviewViewFrame;
- (void)layoutEffectPreviewView;
- (double)stayEditingModeContentHeight;
- (double)inputModeContentHeight;
- (double)normalModeContentHeight;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutPanelView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)initNotifications;
- (void)createCustomizationEditLogic:(id)arg1;
- (id)initWithTaskId:(id)arg1 giftItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

