//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CardElementCouponList, MMUILabel, UIView, WCPayWebImageView;

@interface WCMktCouponCardCell
{
    _Bool _bIsFromHistoryPage;
    CardElementCouponList *_cellData;
    UIView *_containerView;
    UIView *_cardBackgroundView;
    UIView *_leftCircleView;
    UIView *_rightCircleView;
    WCPayWebImageView *_logoImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIView *_highlightView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCPayWebImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(retain, nonatomic) UIView *rightCircleView; // @synthesize rightCircleView=_rightCircleView;
@property(retain, nonatomic) UIView *leftCircleView; // @synthesize leftCircleView=_leftCircleView;
@property(retain, nonatomic) UIView *cardBackgroundView; // @synthesize cardBackgroundView=_cardBackgroundView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool bIsFromHistoryPage; // @synthesize bIsFromHistoryPage=_bIsFromHistoryPage;
@property(retain, nonatomic) CardElementCouponList *cellData; // @synthesize cellData=_cellData;
- (id)genTagButtonWithTagData:(id)arg1;
- (void)updateContentWithCardCellData:(id)arg1 isFromHistoryPage:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

