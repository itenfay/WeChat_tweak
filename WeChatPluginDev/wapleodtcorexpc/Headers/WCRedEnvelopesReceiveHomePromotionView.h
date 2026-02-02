//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, WCPayWebImageView, WCRedEnvelopesReceiveHomePromotionViewModel;
@protocol WCRedEnvelopesReceiveHomePromotionViewDelegate;

@interface WCRedEnvelopesReceiveHomePromotionView
{
    WCPayWebImageView *_iconImageView;
    UILabel *_titleLabel;
    WCRedEnvelopesReceiveHomePromotionViewModel *_viewModel;
    UIImageView *_arrowImageView;
    id <WCRedEnvelopesReceiveHomePromotionViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCRedEnvelopesReceiveHomePromotionViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomePromotionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCPayWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)onLongPressPromotionView:(id)arg1;
- (void)onTapPromotionView:(id)arg1;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

@end

