//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveGiftNewCustomizationModel, MMUILabel, UIImageView;

@interface MMLiveRewardGiftNewCustomizationPriceDisplayView : UIView
{
    MMFinderLiveGiftNewCustomizationModel *_customizationModel;
    MMUILabel *_sumBeanTipLabel;
    UIImageView *_beanIconView;
    MMUILabel *_beanCntLabel;
    MMUILabel *_beanCntExplainLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *beanCntExplainLabel; // @synthesize beanCntExplainLabel=_beanCntExplainLabel;
@property(retain, nonatomic) MMUILabel *beanCntLabel; // @synthesize beanCntLabel=_beanCntLabel;
@property(retain, nonatomic) UIImageView *beanIconView; // @synthesize beanIconView=_beanIconView;
@property(retain, nonatomic) MMUILabel *sumBeanTipLabel; // @synthesize sumBeanTipLabel=_sumBeanTipLabel;
@property(retain, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel; // @synthesize customizationModel=_customizationModel;
- (void)updateSumBeanCntDisplay;
- (void)updateBeanWidgetsOrigin;
- (void)updateBeanCntExplainLabelHidden;
- (id)getBeanCntExplainAttributedText;
- (void)layoutBeanCntExplainLabel;
- (void)layoutBeanCntLabel;
- (void)layoutBeanIconView;
- (void)layoutSumBeanTipLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithCustomizationModel:(id)arg1;

@end

