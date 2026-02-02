//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveNewCustomGiftText, MMUIButton, MMUILabel, NSMutableArray, NSRegularExpression, NSString, UIImageView, UITextField;

@interface MMLiveRewardGiftNewCustomizationInputToolView : UIView
{
    _Bool _isInputInValid;
    CDUnknownBlockType _shouldBeginEditingCallback;
    CDUnknownBlockType _inputTextChangedCallback;
    long long _currentState;
    NSString *_currentValidText;
    MMFinderLiveNewCustomGiftText *_giftCustomText;
    UIView *_pubbleInputView;
    UITextField *_textField;
    MMUIButton *_clearBtn;
    MMUIButton *_doneBtn;
    UIImageView *_beanIconView;
    MMUILabel *_beanCntLabel;
    MMUILabel *_tipLabel;
    NSString *_initialText;
    NSRegularExpression *_nonAlphanumericRegex;
    NSMutableArray *_inputToolStateListenerList;
    MMUILabel *_beanIncreaseLabel;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *beanIncreaseLabel; // @synthesize beanIncreaseLabel=_beanIncreaseLabel;
@property(retain, nonatomic) NSMutableArray *inputToolStateListenerList; // @synthesize inputToolStateListenerList=_inputToolStateListenerList;
@property(retain, nonatomic) NSRegularExpression *nonAlphanumericRegex; // @synthesize nonAlphanumericRegex=_nonAlphanumericRegex;
@property(nonatomic) _Bool isInputInValid; // @synthesize isInputInValid=_isInputInValid;
@property(retain, nonatomic) NSString *initialText; // @synthesize initialText=_initialText;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) MMUILabel *beanCntLabel; // @synthesize beanCntLabel=_beanCntLabel;
@property(retain, nonatomic) UIImageView *beanIconView; // @synthesize beanIconView=_beanIconView;
@property(retain, nonatomic) MMUIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) MMUIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *pubbleInputView; // @synthesize pubbleInputView=_pubbleInputView;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftText *giftCustomText; // @synthesize giftCustomText=_giftCustomText;
@property(retain, nonatomic) NSString *currentValidText; // @synthesize currentValidText=_currentValidText;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(copy, nonatomic) CDUnknownBlockType inputTextChangedCallback; // @synthesize inputTextChangedCallback=_inputTextChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType shouldBeginEditingCallback; // @synthesize shouldBeginEditingCallback=_shouldBeginEditingCallback;
- (id)currentText;
@property(readonly, nonatomic) _Bool isEditing;
@property(readonly, nonatomic) _Bool hasInputText;
- (_Bool)isCharacterValid:(id)arg1;
- (id)getValidTextFromInitText:(id)arg1;
- (void)updateValidText;
- (_Bool)isTextValid:(id)arg1;
- (void)checkTextFieldTextValid;
- (unsigned int)textFieldWordLimit;
- (void)checkTextFieldTextOverLengthLimit;
- (void)synchronizeAllListenersWithPreState:(long long)arg1 currState:(long long)arg2;
- (void)updateCurrentState:(long long)arg1;
- (void)updateTextFieldText:(id)arg1;
- (void)removeInputToolStateListener:(CDUnknownBlockType)arg1;
- (void)addInputToolStateListener:(CDUnknownBlockType)arg1;
- (void)setInputText:(id)arg1;
- (void)beginEditing;
- (void)endEditing;
- (void)onDoneButtonClick;
- (void)clearText;
- (void)onTextFieldTextChanged;
- (_Bool)checkHasMarkedTextRange:(id)arg1;
- (void)textFieldDidChangeContent:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateTipLableTextColor;
- (void)updateTipLabelHidden;
- (void)layoutTipLabel;
- (void)updateBeanWidgetsHidden;
- (void)updateBeanWidgetsOrigin;
- (void)layoutBeanCntLabel;
- (void)layoutBeanIconView;
- (void)layoutBeanIncreaseLabel;
- (void)layoutBeanWidgets;
- (void)updateClearBtnHidden;
- (void)updateClearBtnOrigin;
- (void)layoutClearBtn;
- (void)updateTextFieldFrame;
- (void)layoutTextField;
- (void)updatePubbleInputViewFrame;
- (void)layoutPubbleInputView;
- (_Bool)isDoneButtonEnable;
- (void)updateDoneButtonEnable;
- (void)updateDoneButtonHidden;
- (void)layoutDoneBtn;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithGiftCustomText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

