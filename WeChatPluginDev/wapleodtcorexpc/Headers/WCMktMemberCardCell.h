//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, CardElementCouponList, MMUILabel, NSString, UIView, WCPayWebImageView;

@interface WCMktMemberCardCell
{
    _Bool _bIsFromHistoryPage;
    CardElementCouponList *_cellData;
    UIView *_containerView;
    WCPayWebImageView *_logoImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    WCPayWebImageView *_cardBackgroundImgView;
    CAGradientLayer *_gradientLayer;
    UIView *_highlightView;
    UIView *_maskLayerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *maskLayerView; // @synthesize maskLayerView=_maskLayerView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) WCPayWebImageView *cardBackgroundImgView; // @synthesize cardBackgroundImgView=_cardBackgroundImgView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCPayWebImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool bIsFromHistoryPage; // @synthesize bIsFromHistoryPage=_bIsFromHistoryPage;
@property(retain, nonatomic) CardElementCouponList *cellData; // @synthesize cellData=_cellData;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)genTagButtonWithTagData:(id)arg1;
- (void)updateContentWithMemberCardCellData:(id)arg1 isFromHistoryPage:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

