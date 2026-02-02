//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ColorGradientView, MMUIButton, MMUILabel, NSString, WCAdSliderCardDecorationView, WCAdSliderCardItem, WCAdSliderCardLogic, WCAdURLImageView;

@interface WCAdSliderCardNormalCellView
{
    WCAdURLImageView *_backBorderView;
    WCAdURLImageView *_frontBorderView;
    WCAdSliderCardDecorationView *_decorationView;
    MMUIButton *_buttonView;
    WCAdURLImageView *_buttonIcon;
    MMUILabel *_buttonTitle;
    MMUILabel *_labelTitle;
    MMUILabel *_labelDesc;
    MMUIButton *_logoView;
    ColorGradientView *_colorGradientView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ColorGradientView *colorGradientView; // @synthesize colorGradientView=_colorGradientView;
@property(retain, nonatomic) MMUIButton *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) MMUILabel *labelDesc; // @synthesize labelDesc=_labelDesc;
@property(retain, nonatomic) MMUILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) MMUILabel *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) WCAdURLImageView *buttonIcon; // @synthesize buttonIcon=_buttonIcon;
@property(retain, nonatomic) MMUIButton *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) WCAdSliderCardDecorationView *decorationView; // @synthesize decorationView=_decorationView;
@property(retain, nonatomic) WCAdURLImageView *frontBorderView; // @synthesize frontBorderView=_frontBorderView;
@property(retain, nonatomic) WCAdURLImageView *backBorderView; // @synthesize backBorderView=_backBorderView;
- (void)onOpeningAnimationVisibleStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 isVisible:(_Bool)arg3;
@property(readonly, nonatomic) WCAdSliderCardLogic *sliderCardLogic;
- (void)onClickButton:(id)arg1;
- (double)calcColorGradientViewHeight;
- (id)createTextViewWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 maxWidth:(double)arg4;
- (_Bool)shouldShowDesc;
- (_Bool)shouldShowTitle;
- (_Bool)shouldShowButtonIcon;
- (_Bool)shouldShowButton;
@property(readonly, nonatomic) WCAdSliderCardItem *sliderCardItem;
- (_Bool)shouldDownloadImageUseCDN;
- (id)fetchReportItem;
- (void)updateDecorationViewVisible;
- (void)updateBorderView;
- (void)updateColorGradientView;
- (void)updateLeftViewUI:(double)arg1;
- (double)updateButtonUI;
- (void)updateContentUI;
- (void)initLogoView;
- (void)initButtonView;
- (void)initDetailView;
- (void)initFrontBorderView;
- (void)initBackBorderView;
- (id)createContentContainer;
- (id)getCellContentViewMaskPath:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

