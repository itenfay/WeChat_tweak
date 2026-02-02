//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface WCPayLimitCashierModal : UIView
{
    NSString *_title;
    UILabel *_titleLabel;
    UIButton *_confirmBtn;
    UIView *_backgroundView;
    UIView *_contentsView;
    UIImageView *_arrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *contentsView; // @synthesize contentsView=_contentsView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)showInView;
- (void)dissmissView;
- (void)onTapConfirm;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1;

@end

