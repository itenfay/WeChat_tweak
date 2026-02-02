//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextField.h>

@protocol MMUITextFieldDelegate;

@interface MMUITextField : UITextField
{
    unsigned long long _maxTextLength;
    id <MMUITextFieldDelegate> _mmDelegate;
    double _clearButtonRightMargin;
    struct CGSize _clearButtonSize;
    struct UIEdgeInsets _contenInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize clearButtonSize; // @synthesize clearButtonSize=_clearButtonSize;
@property(nonatomic) double clearButtonRightMargin; // @synthesize clearButtonRightMargin=_clearButtonRightMargin;
@property(nonatomic) __weak id <MMUITextFieldDelegate> mmDelegate; // @synthesize mmDelegate=_mmDelegate;
@property(nonatomic) unsigned long long maxTextLength; // @synthesize maxTextLength=_maxTextLength;
@property(nonatomic) struct UIEdgeInsets contenInsets; // @synthesize contenInsets=_contenInsets;
- (struct UIEdgeInsets)__contentInsets;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textsRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

