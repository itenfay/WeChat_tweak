//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GetRealnameWordingRsp, UIButton, UIImageView, UILabel;
@protocol WCPaySelectVerifyTypeViewV2Delegate;

@interface WCPaySelectVerifyTypeViewV2 : UIView
{
    id <WCPaySelectVerifyTypeViewV2Delegate> _m_delegate;
    UIView *_baseGrowView;
    UIView *_growView;
    UIView *_headerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_footerView;
    UIButton *_nextButton;
    UIButton *_footerTipsView;
    UIImageView *_footerTipsIcon;
    UIButton *_footerTipsButton;
    UIImageView *_footerTipsArrowIcon;
    long long _guideType;
    GetRealnameWordingRsp *_wording;
    double _minHeight;
}

- (void).cxx_destruct;
@property double minHeight; // @synthesize minHeight=_minHeight;
@property(retain) GetRealnameWordingRsp *wording; // @synthesize wording=_wording;
@property long long guideType; // @synthesize guideType=_guideType;
@property(retain) UIImageView *footerTipsArrowIcon; // @synthesize footerTipsArrowIcon=_footerTipsArrowIcon;
@property(retain) UIButton *footerTipsButton; // @synthesize footerTipsButton=_footerTipsButton;
@property(retain) UIImageView *footerTipsIcon; // @synthesize footerTipsIcon=_footerTipsIcon;
@property(retain) UIButton *footerTipsView; // @synthesize footerTipsView=_footerTipsView;
@property(retain) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *growView; // @synthesize growView=_growView;
@property(retain) UIView *baseGrowView; // @synthesize baseGrowView=_baseGrowView;
@property __weak id <WCPaySelectVerifyTypeViewV2Delegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onClickNextButton;
- (void)clickSafeTips;
- (void)updateFooterTipsArrowIcon;
- (void)updateFooterTipsButton;
- (void)updateFooterTipsIcon;
- (void)updateFooterTipsView;
- (void)updateNextButton;
- (void)updateFooterView;
- (void)updateDescLabel;
- (void)updateTitleLabel;
- (void)updateIconImageView;
- (void)updateHeaderView;
- (void)updateView;
- (void)updateWithGuideType:(long long)arg1 wordingResp:(id)arg2 minHeight:(double)arg3 delegate:(id)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

