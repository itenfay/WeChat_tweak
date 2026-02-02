//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGiftCustomizationModel, MMFinderLiveTaskId, MMLiveSlottedTextField, NSString, PAGFile, PAGView, UIButton, UILabel, UIScrollView, UITextField;
@protocol MMFinderLiveGiftCustomizationTextValidating, MMLiveRewardGiftCustomizationTextPageSheetDelegate;

@interface MMLiveRewardGiftCustomizationTextPageSheet
{
    _Bool _detaching;
    MMFinderLiveGiftCustomizationModel *_model;
    id <MMLiveRewardGiftCustomizationTextPageSheetDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    NSString *_originalText;
    double _keyboardHeight;
    id <MMFinderLiveGiftCustomizationTextValidating> _validator;
    unsigned long long _finalAction;
    PAGFile *_pagFile;
    UIScrollView *_scrollView;
    PAGView *_previewView;
    UILabel *_fullPriceLabel;
    UILabel *_premiumPriceLabel;
    MMLiveSlottedTextField *_primaryTextField;
    UITextField *_fallbackTextField;
    UILabel *_hintLabel;
    UIButton *_clearButton;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UITextField *fallbackTextField; // @synthesize fallbackTextField=_fallbackTextField;
@property(retain, nonatomic) MMLiveSlottedTextField *primaryTextField; // @synthesize primaryTextField=_primaryTextField;
@property(retain, nonatomic) UILabel *premiumPriceLabel; // @synthesize premiumPriceLabel=_premiumPriceLabel;
@property(retain, nonatomic) UILabel *fullPriceLabel; // @synthesize fullPriceLabel=_fullPriceLabel;
@property(retain, nonatomic) PAGView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) PAGFile *pagFile; // @synthesize pagFile=_pagFile;
@property(nonatomic) unsigned long long finalAction; // @synthesize finalAction=_finalAction;
@property(nonatomic) _Bool detaching; // @synthesize detaching=_detaching;
@property(retain, nonatomic) id <MMFinderLiveGiftCustomizationTextValidating> validator; // @synthesize validator=_validator;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveRewardGiftCustomizationTextPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationModel *model; // @synthesize model=_model;
- (id)liveTask;
- (double)contentHeight;
- (void)configureTextFields;
- (void)configurePremiumPriceLabelText;
- (void)configureFullPriceLabelText;
- (void)loadPreview;
- (void)initializeComponents;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)slottedTextFieldShouldEndEditing:(id)arg1;
- (void)slottedTextFieldTextChanged:(id)arg1;
- (_Bool)isWeChatEmoticonValid:(id)arg1 inSlotIndex:(unsigned long long)arg2 forSlottedTextField:(id)arg3;
- (_Bool)isCharacterStringValid:(id)arg1 inSlotIndex:(unsigned long long)arg2 forSlottedTextField:(id)arg3;
- (void)onFallbackTextFieldChanged;
- (void)onCleared;
- (void)onConfirmed;
- (void)onCanceled;
- (void)onKeyboardHiding:(id)arg1;
- (void)onKeyboardShowing:(id)arg1;
- (void)onVoiceOverStatusChanged;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetWillDisappear;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1 model:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

