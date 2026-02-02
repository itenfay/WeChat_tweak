//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextField.h>

@class UIInputViewController, UILabel;

@interface MMTagTextField : UITextField
{
    double _tipsLabelFontSize;
    double _textEditMarginLeft;
    UIInputViewController *_inputAccessoryViewController;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIInputViewController *inputAccessoryViewController; // @synthesize inputAccessoryViewController=_inputAccessoryViewController;
@property(nonatomic) double textEditMarginLeft; // @synthesize textEditMarginLeft=_textEditMarginLeft;
@property(nonatomic) double tipsLabelFontSize; // @synthesize tipsLabelFontSize=_tipsLabelFontSize;
- (id)recursiveFindTextFieldActionButton:(id)arg1;
- (id)findTextFieldActionButton;
- (void)customizeClearButtonColor;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setTagAttributeText:(id)arg1;
- (void)setCustomTipsLabelHidden:(_Bool)arg1;
- (void)setTipsLabelText:(id)arg1;
- (void)internalInitTipsLabel;

@end

