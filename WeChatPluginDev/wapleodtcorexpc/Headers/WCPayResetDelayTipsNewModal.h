//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol WCPayResetDelayTipsNewModalDelegate;

@interface WCPayResetDelayTipsNewModal : UIView
{
    _Bool _isShowing;
    id <WCPayResetDelayTipsNewModalDelegate> _delegate;
    NSString *_title;
    NSString *_subscTexts;
    UILabel *_titleLabel;
    UIView *_contentsView;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *contentsView; // @synthesize contentsView=_contentsView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *subscTexts; // @synthesize subscTexts=_subscTexts;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCPayResetDelayTipsNewModalDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapConfirmBtn;
- (void)onTapCancelBtn;
- (void)hideView:(_Bool)arg1;
- (void)dissmissView;
- (void)showInView;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 subscTexts:(id)arg2;

@end

