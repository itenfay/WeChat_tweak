//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UITextField, WCPayWebImageView;
@protocol HoneyPayPrepareCardViewDelegate;

@interface HoneyPayPrepareCardView : UIView
{
    id <HoneyPayPrepareCardViewDelegate> _delegate;
    UILabel *_titleLabel;
    NSString *_title;
    NSString *_cardAmount;
    NSString *_iconUrl;
    unsigned long long _type;
    UIView *_contentView;
    UILabel *_unitLabel;
    UITextField *_textField;
    WCPayWebImageView *_icon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayWebImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *cardAmount; // @synthesize cardAmount=_cardAmount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HoneyPayPrepareCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

