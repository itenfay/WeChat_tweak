//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel, UITextField;
@protocol WCPayInputMoneyViewDelegate;

@interface WCPayInputMoneyView : UIView
{
    id <WCPayInputMoneyViewDelegate> _delegate;
    NSString *_titleText;
    UIColor *_titleColor;
    NSString *_unitText;
    UIColor *_unitColor;
    UIColor *_separatorColor;
    UILabel *_title;
    UILabel *_unitLabel;
    UITextField *_textField;
    UIView *_separator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIColor *unitColor; // @synthesize unitColor=_unitColor;
@property(copy, nonatomic) NSString *unitText; // @synthesize unitText=_unitText;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) __weak id <WCPayInputMoneyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateTintColor:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

