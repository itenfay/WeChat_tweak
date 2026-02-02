//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol WCPayFirstPurchaseModalDelegate;

@interface WCPayFirstPurchaseModal : UIView
{
    id <WCPayFirstPurchaseModalDelegate> _delegate;
    NSString *_title;
    NSString *_leftBtnWrod;
    NSString *_rightBtnWrod;
    UILabel *_titleLabel;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    UIView *_backgroundView;
    UIView *_contentsView;
    UIImageView *_arrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *contentsView; // @synthesize contentsView=_contentsView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *rightBtnWrod; // @synthesize rightBtnWrod=_rightBtnWrod;
@property(retain, nonatomic) NSString *leftBtnWrod; // @synthesize leftBtnWrod=_leftBtnWrod;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCPayFirstPurchaseModalDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showInView;
- (void)dissmissView;
- (void)onTapOutSide;
- (void)onTapRight;
- (void)onTapLeft;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1;

@end

