//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIButton, WCUITextField;

@interface WCRedesignTextItem
{
    _Bool _isWarningStatus;
    _Bool _canButtonBreakLine;
    WCUITextField *_textField;
    unsigned long long _maxLength;
    MMUIButton *_clearButton;
    MMUILabel *_prefixLabel;
    UIButton *_button;
    CDUnknownBlockType _completion;
}

+ (struct CGRect)mainRectForBounds:(struct CGRect)arg1 textField:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool canButtonBreakLine; // @synthesize canButtonBreakLine=_canButtonBreakLine;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) MMUILabel *prefixLabel; // @synthesize prefixLabel=_prefixLabel;
@property(retain, nonatomic) MMUIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(nonatomic) _Bool isWarningStatus; // @synthesize isWarningStatus=_isWarningStatus;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) WCUITextField *textField; // @synthesize textField=_textField;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldEditingChanged:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)onTapButton;
- (void)onTapClearButton;
- (void)updatePlaceholder;
- (void)setSuffixButton:(id)arg1 canBreakLine:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)prefix;
- (void)setPrefix:(id)arg1 color:(id)arg2;
- (double)buttonWidthForCalLineBreak;
- (_Bool)shouldBreakLineForMaxContentWidth:(double)arg1 itemWidth:(double)arg2;
- (void)onLayoutContentViewSubviews;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)setEnable:(_Bool)arg1;
- (void)setM_tip:(id)arg1;
- (void)initTextField;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

