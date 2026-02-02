//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMUIButton, MMUILabel, MMUITextField, NSString, UIVisualEffectView;

@interface MMFinderLiveLotteryCommentInputView : UIView
{
    _Bool _isOpening;
    _Bool _isKeyboardShow;
    unsigned int _maxInputWordCount;
    CDUnknownBlockType _lotteryCommentInputDoneCallback;
    CDUnknownBlockType _cancelCallback;
    CDUnknownBlockType _openedCallback;
    CDUnknownBlockType _closedCallback;
    id _extraInfo;
    UIView *_contentView;
    UIView *_maskView;
    CAShapeLayer *_shapeLayer;
    UIVisualEffectView *_visualEfView;
    MMUILabel *_titleLabel;
    MMUITextField *_textField;
    MMUILabel *_wordsCountTipsLabel;
    MMUIButton *_doneButton;
    MMUIButton *_closeButton;
    double _contentBottomWhenKeyboardShow;
}

- (void).cxx_destruct;
@property(nonatomic) double contentBottomWhenKeyboardShow; // @synthesize contentBottomWhenKeyboardShow=_contentBottomWhenKeyboardShow;
@property(nonatomic) _Bool isKeyboardShow; // @synthesize isKeyboardShow=_isKeyboardShow;
@property(nonatomic) unsigned int maxInputWordCount; // @synthesize maxInputWordCount=_maxInputWordCount;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening=_isOpening;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUILabel *wordsCountTipsLabel; // @synthesize wordsCountTipsLabel=_wordsCountTipsLabel;
@property(retain, nonatomic) MMUITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIVisualEffectView *visualEfView; // @synthesize visualEfView=_visualEfView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) CDUnknownBlockType closedCallback; // @synthesize closedCallback=_closedCallback;
@property(copy, nonatomic) CDUnknownBlockType openedCallback; // @synthesize openedCallback=_openedCallback;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy, nonatomic) CDUnknownBlockType lotteryCommentInputDoneCallback; // @synthesize lotteryCommentInputDoneCallback=_lotteryCommentInputDoneCallback;
- (void)traitCollectionDidChange:(id)arg1;
- (void)changeCommentInputLayout:(id)arg1 isShow:(_Bool)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)updateWordCountForTextFieldChange;
- (void)onTextFieldChanged:(id)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (void)onDoneButtonClicked:(id)arg1;
- (void)updateDoneButtonEnableStatus;
- (void)openWithBecomeFirstResponser;
- (void)openWithAnimation:(_Bool)arg1;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)close;
- (struct CGRect)contentViewFrame;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutWordsCountTipsLabel;
- (void)layoutUI;
- (void)updateDoneButtonStyle;
- (void)initUI;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

