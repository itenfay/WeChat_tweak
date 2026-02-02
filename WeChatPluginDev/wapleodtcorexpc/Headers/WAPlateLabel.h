//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;
@protocol WAPlateLabelDelegate;

@interface WAPlateLabel
{
    UIView *_inputView;
    unsigned long long _inputViewType;
    id <WAPlateLabelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAPlateLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long inputViewType; // @synthesize inputViewType=_inputViewType;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void)deleteButtonAction:(id)arg1;
- (void)charButtonClicked:(id)arg1;
- (id)genereateKeyboardViewProvince:(id)arg1 inputViewWidth:(double)arg2;
- (id)genereateKeyboardViewDefault:(id)arg1 inputViewWidth:(double)arg2;
- (id)configButtonColor:(id)arg1;
- (id)defaultArr;
- (id)numberLetterArr;
- (id)specialArr;
- (id)letterArr;
- (id)provinceArr;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)createInputViewWithType:(unsigned long long)arg1 inputViewWidth:(double)arg2;
- (void)setInputViewWidth:(double)arg1;
- (void)updateViewForDarkmode;
- (void)traitCollectionDidChange:(id)arg1;
- (void)done;
- (_Bool)exitSpecialCharText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

