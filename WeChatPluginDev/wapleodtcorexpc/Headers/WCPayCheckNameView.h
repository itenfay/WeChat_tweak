//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UITextField, WCPayCss;

@interface WCPayCheckNameView : UIView
{
    UITextField *_textField;
    UIView *_container;
    UIView *_inputContainer;
    UILabel *_tailLabel;
    NSString *_tail;
    WCPayCss *_css;
}

- (void).cxx_destruct;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) NSString *tail; // @synthesize tail=_tail;
@property(retain) UILabel *tailLabel; // @synthesize tailLabel=_tailLabel;
@property(retain) UIView *inputContainer; // @synthesize inputContainer=_inputContainer;
@property(retain) UIView *container; // @synthesize container=_container;
@property(retain) UITextField *textField; // @synthesize textField=_textField;
- (id)attributedString:(id)arg1 kern:(double)arg2 font:(id)arg3;
- (void)updateInputTailLabel;
- (void)updateTextField;
- (void)updateInputContainer;
- (void)updateContainer;
- (void)layoutSubviews;
- (void)updateInputTail:(id)arg1;

@end

