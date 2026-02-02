//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMUILabel, PageTicketElement, UIView, WCPayWebImageView;
@protocol WCMktInvalidTicketItemCellDelegate;

@interface WCMktInvalidTicketItemCell
{
    id <WCMktInvalidTicketItemCellDelegate> _delegate;
    PageTicketElement *_elemData;
    UIView *_containerView;
    WCPayWebImageView *_logoImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIView *_tagListView;
    WCPayWebImageView *_cardBackgroundView;
    UIView *_maskView;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) WCPayWebImageView *cardBackgroundView; // @synthesize cardBackgroundView=_cardBackgroundView;
@property(retain, nonatomic) UIView *tagListView; // @synthesize tagListView=_tagListView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCPayWebImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) PageTicketElement *elemData; // @synthesize elemData=_elemData;
@property(nonatomic) __weak id <WCMktInvalidTicketItemCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)genGradientLayer;
- (void)genMaskView;
- (void)genCardBackgroundView;
- (void)genDescLabel;
- (void)genTitleLabel;
- (void)genLogoImgView;
- (void)genContainerView;
- (id)genTagButtonWithTagData:(id)arg1;
- (void)updateContentWithInvalidTicketElemData:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

