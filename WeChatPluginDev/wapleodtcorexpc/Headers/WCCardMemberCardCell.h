//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMWebImageView, NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface WCCardMemberCardCell
{
    unsigned int _layoutType;
    NSString *_backImageURL;
    UIColor *_backColor;
    NSString *_iconURL;
    NSString *_topText;
    NSString *_bottomText;
    NSString *_tagText;
    MMWebImageView *_backImageView;
    UIImageView *_backDefaulImageView;
    UIImage *_defaulDefaulImage;
    MMWebImageView *_iconImageView;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    UIButton *_tagButton;
    UIView *_highlightView;
    CAGradientLayer *_gradientLayer;
    UIView *_iconBgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *iconBgView; // @synthesize iconBgView=_iconBgView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIButton *tagButton; // @synthesize tagButton=_tagButton;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImage *defaulDefaulImage; // @synthesize defaulDefaulImage=_defaulDefaulImage;
@property(retain, nonatomic) UIImageView *backDefaulImageView; // @synthesize backDefaulImageView=_backDefaulImageView;
@property(retain, nonatomic) MMWebImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(nonatomic) unsigned int layoutType; // @synthesize layoutType=_layoutType;
@property(retain, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) NSString *topText; // @synthesize topText=_topText;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor=_backColor;
@property(retain, nonatomic) NSString *backImageURL; // @synthesize backImageURL=_backImageURL;
- (void)onLoadImageOK:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)scaleToBottom:(id)arg1 scale:(double)arg2;
- (id)scaleToTop:(id)arg1 scale:(double)arg2;
- (void)confiUI;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

