//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMUITextField, NSString, UIColor, UIFont, UIImageView;

@interface MMFinderLiveFansGroupInputView : UIView
{
    _Bool _showFansGroupSign;
    _Bool _isSetDefaultContent;
    unsigned long long _maxInputWordCount;
    UIFont *_inputTextFont;
    UIColor *_contentBackgroundColor;
    double _contentCornerRadius;
    CDUnknownBlockType _inputChangedCallback;
    double _inputViewRightInset;
    UIView *_contentView;
    UIImageView *_fansSignIconView;
    MMUILabel *_fansRankLabel;
    MMUITextField *_textField;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSetDefaultContent; // @synthesize isSetDefaultContent=_isSetDefaultContent;
@property(retain, nonatomic) MMUITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MMUILabel *fansRankLabel; // @synthesize fansRankLabel=_fansRankLabel;
@property(retain, nonatomic) UIImageView *fansSignIconView; // @synthesize fansSignIconView=_fansSignIconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double inputViewRightInset; // @synthesize inputViewRightInset=_inputViewRightInset;
@property(copy, nonatomic) CDUnknownBlockType inputChangedCallback; // @synthesize inputChangedCallback=_inputChangedCallback;
@property(nonatomic) double contentCornerRadius; // @synthesize contentCornerRadius=_contentCornerRadius;
@property(retain, nonatomic) UIColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
@property(retain, nonatomic) UIFont *inputTextFont; // @synthesize inputTextFont=_inputTextFont;
@property(nonatomic) _Bool showFansGroupSign; // @synthesize showFansGroupSign=_showFansGroupSign;
@property(nonatomic) unsigned long long maxInputWordCount; // @synthesize maxInputWordCount=_maxInputWordCount;
- (void)becomeInputFirstResponder;
- (void)resignInputFirstResponder;
@property(retain, nonatomic) NSString *inputText;
@property(readonly, nonatomic) _Bool isIsInputFirstResponder;
- (void)clearDefaultInputContent;
- (void)setDefaultInputContent;
- (void)checkInputIsEmpty;
- (void)updateCursorColor:(id)arg1;
- (void)updateInputPlaceHolder:(id)arg1 font:(id)arg2 color:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)handleForInputTextChanged:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldHideKeyBoard;
- (void)layoutTextField;
- (void)layoutFansRankLabel;
- (void)layoutFansGroupSignView;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

