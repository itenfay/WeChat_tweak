//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIButton, UIImageView, UILabel, WCPayRealnameRegResp;
@protocol WCPayRealnameSuccessViewDelegate;

@interface WCPayRealnameSuccessView : UIView
{
    _Bool _showRetry;
    NSString *_title;
    NSString *_desc;
    NSString *_buttonTitle;
    WCPayRealnameRegResp *_viewData;
    UIView *_headerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_footerView;
    UIButton *_confirmButton;
    UIButton *_retryButton;
    double _minHeight;
    RichTextView *_bottomTitle;
    id <WCPayRealnameSuccessViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property __weak id <WCPayRealnameSuccessViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) RichTextView *bottomTitle; // @synthesize bottomTitle=_bottomTitle;
@property double minHeight; // @synthesize minHeight=_minHeight;
@property(retain) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCPayRealnameRegResp *viewData; // @synthesize viewData=_viewData;
@property _Bool showRetry; // @synthesize showRetry=_showRetry;
@property(retain) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(retain) NSString *title; // @synthesize title=_title;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)isPassportPageStyle;
- (void)onClickRetryButton;
- (void)onClickConfirmButton;
- (void)updateBottomTitle;
- (void)updateRetryButton;
- (void)updateConfirmView;
- (void)updateFooterView;
- (void)updateDescView;
- (void)updateTitleView;
- (void)updateIconView;
- (void)updateHeaderView;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateMinHeight:(double)arg1;
- (void)updateDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

