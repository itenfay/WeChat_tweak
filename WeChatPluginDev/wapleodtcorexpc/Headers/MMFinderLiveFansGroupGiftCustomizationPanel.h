//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupCustomizableGiftColorVariant, MMFinderLiveFansGroupCustomizableGiftItem, MMFinderLiveFansGroupGiftCustomizationPanelTextFieldGradientView, MMUITextField, NSString, PAGFile, PAGView, UIButton, UICollectionView, UIView;
@protocol MMFinderLiveFansGroupGiftCustomizationPanelDelegate;

@interface MMFinderLiveFansGroupGiftCustomizationPanel
{
    _Bool _textEditing;
    _Bool _changeCommiting;
    id <MMFinderLiveFansGroupGiftCustomizationPanelDelegate> _delegate;
    MMFinderLiveFansGroupCustomizableGiftItem *_giftItem;
    MMFinderLiveFansGroupCustomizableGiftColorVariant *_currentColorVariant;
    NSString *_currentColorVariantDefaultTextAttachment;
    NSString *_currentTextAttachment;
    UIView *_parentView;
    UIView *_previewContainerView;
    PAGFile *_currentPagFile;
    PAGView *_previewPagView;
    MMUITextField *_textField;
    MMFinderLiveFansGroupGiftCustomizationPanelTextFieldGradientView *_textFieldGradientView;
    UICollectionView *_colorVariantCollectionView;
    UIView *_textEditLightDismissView;
    double _keyboardHeight;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool changeCommiting; // @synthesize changeCommiting=_changeCommiting;
@property(nonatomic) _Bool textEditing; // @synthesize textEditing=_textEditing;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UIView *textEditLightDismissView; // @synthesize textEditLightDismissView=_textEditLightDismissView;
@property(retain, nonatomic) UICollectionView *colorVariantCollectionView; // @synthesize colorVariantCollectionView=_colorVariantCollectionView;
@property(retain, nonatomic) MMFinderLiveFansGroupGiftCustomizationPanelTextFieldGradientView *textFieldGradientView; // @synthesize textFieldGradientView=_textFieldGradientView;
@property(retain, nonatomic) MMUITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) PAGView *previewPagView; // @synthesize previewPagView=_previewPagView;
@property(retain, nonatomic) PAGFile *currentPagFile; // @synthesize currentPagFile=_currentPagFile;
@property(retain, nonatomic) UIView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) NSString *currentTextAttachment; // @synthesize currentTextAttachment=_currentTextAttachment;
@property(retain, nonatomic) NSString *currentColorVariantDefaultTextAttachment; // @synthesize currentColorVariantDefaultTextAttachment=_currentColorVariantDefaultTextAttachment;
@property(retain, nonatomic) MMFinderLiveFansGroupCustomizableGiftColorVariant *currentColorVariant; // @synthesize currentColorVariant=_currentColorVariant;
@property(retain, nonatomic) MMFinderLiveFansGroupCustomizableGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(nonatomic) __weak id <MMFinderLiveFansGroupGiftCustomizationPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConfirmButtonEnabled;
- (_Bool)shouldConfirm;
- (id)originalTextAttachment;
- (void)updateTextAttachmentToPreviewValue;
- (void)updateTextAttachmentToEffectiveValue;
- (void)showToastForTextAttachmentValidationResult:(unsigned long long)arg1;
- (unsigned long long)validateTextAttachment:(id)arg1;
- (void)updateTextFieldAppearanceForSelected:(_Bool)arg1;
- (void)updateCurrentColorVariant:(id)arg1;
- (void)preloadCustomGiftAnimations;
- (void)setupNotifications;
- (void)updateTitleWithGiftItem:(id)arg1;
- (id)navigationRightButton;
- (id)navigationLeftButton;
- (void)setupPageSheetConfig;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (void)onKeyboardShowing:(id)arg1;
- (void)onTextFieldChanged;
- (void)onTextEditLightDismissed;
- (void)onCanceled;
- (void)onCustomizationConfirmed;
- (void)layoutSubviews;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillAppear;
- (void)onPageSheetContainerBgTapped;
- (id)initWithGiftItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

