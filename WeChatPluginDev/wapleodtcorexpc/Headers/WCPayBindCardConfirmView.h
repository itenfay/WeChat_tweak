//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol WCPayBindCardConfirmViewDelegate;

@interface WCPayBindCardConfirmView : UIView
{
    NSString *_desc;
    UIView *_headerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_footerView;
    UIButton *_confirmButton;
    UIButton *_refuseButton;
    double _minHeight;
    id <WCPayBindCardConfirmViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property __weak id <WCPayBindCardConfirmViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property double minHeight; // @synthesize minHeight=_minHeight;
@property(retain) UIButton *refuseButton; // @synthesize refuseButton=_refuseButton;
@property(retain) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) NSString *desc; // @synthesize desc=_desc;
- (void)onClickRefuseButton;
- (void)onClickConfirmButton;
- (void)updateRefuseView;
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

@end

