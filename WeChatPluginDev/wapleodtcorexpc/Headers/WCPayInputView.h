//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIColor, UITextField;
@protocol WCPayInputViewDelegate;

@interface WCPayInputView : UIView
{
    _Bool _enableResize;
    _Bool _passwordStyle;
    id <WCPayInputViewDelegate> _delegate;
    long long _inputCount;
    UIColor *_fontColor;
    long long _fontSize;
    long long _rectangleMargin;
    unsigned long long _borders;
    double _borderWidth;
    UIColor *_borderColor;
    UITextField *_textField;
    NSMutableArray *_labels;
    NSMutableArray *_dots;
    long long _pwdViewStyle;
    long long _currentCount;
    double _startPadding;
    struct CGSize _rectangleSize;
}

- (void).cxx_destruct;
@property(nonatomic) double startPadding; // @synthesize startPadding=_startPadding;
@property(nonatomic) long long currentCount; // @synthesize currentCount=_currentCount;
@property(nonatomic) long long pwdViewStyle; // @synthesize pwdViewStyle=_pwdViewStyle;
@property(retain, nonatomic) NSMutableArray *dots; // @synthesize dots=_dots;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property(nonatomic) _Bool passwordStyle; // @synthesize passwordStyle=_passwordStyle;
@property(nonatomic) _Bool enableResize; // @synthesize enableResize=_enableResize;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) unsigned long long borders; // @synthesize borders=_borders;
@property(nonatomic) long long rectangleMargin; // @synthesize rectangleMargin=_rectangleMargin;
@property(nonatomic) struct CGSize rectangleSize; // @synthesize rectangleSize=_rectangleSize;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) long long inputCount; // @synthesize inputCount=_inputCount;
@property(nonatomic) __weak id <WCPayInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)updatePwdViewStyle:(long long)arg1;
- (void)addPasswordBorder:(id)arg1;
- (void)showDotWithCount:(long long)arg1;
- (void)layout;
- (void)layoutSubviews;
- (void)updateRectangleSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

