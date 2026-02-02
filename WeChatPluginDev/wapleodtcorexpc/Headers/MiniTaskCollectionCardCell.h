//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMUIButton, MMUILabel, MMWebImageView, NSMutableArray, NSString, UIImage, UIImageView, UIView;

@interface MiniTaskCollectionCardCell
{
    UIView *_frontView;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    MMUILabel *_footerTextLabel;
    MMUILabel *_titleTailLabel;
    MMUIButton *_closeBtn;
    MMWebImageView *_headerImageView;
    UIImageView *_subtitleLabelIconImageView;
    UIImageView *_extraIconImageView;
    CAGradientLayer *_gradientLayer;
    CAGradientLayer *_longVideoGradientLayer;
    UIImage *_defaultSnapshot;
    NSMutableArray *_voiceOverElements;
}

+ (double)titleAreaHeight;
+ (double)cellHeightForWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *voiceOverElements; // @synthesize voiceOverElements=_voiceOverElements;
@property(retain, nonatomic) UIImage *defaultSnapshot; // @synthesize defaultSnapshot=_defaultSnapshot;
@property(retain, nonatomic) CAGradientLayer *longVideoGradientLayer; // @synthesize longVideoGradientLayer=_longVideoGradientLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *extraIconImageView; // @synthesize extraIconImageView=_extraIconImageView;
@property(retain, nonatomic) UIImageView *subtitleLabelIconImageView; // @synthesize subtitleLabelIconImageView=_subtitleLabelIconImageView;
@property(retain, nonatomic) MMWebImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) MMUILabel *titleTailLabel; // @synthesize titleTailLabel=_titleTailLabel;
@property(retain, nonatomic) MMUILabel *footerTextLabel; // @synthesize footerTextLabel=_footerTextLabel;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *frontView; // @synthesize frontView=_frontView;
- (double)widthForTitileTailLabel;
- (_Bool)isTheOnlyCell;
- (id)extraIconForBizName:(id)arg1;
- (id)subtitleLabelIconImageForBizType:(id)arg1;
- (id)accessibilityLabelForCloseBtn;
- (id)accessibilityLabelForCell;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (void)initVoiceOverElements;
- (void)onCloseBtnClicked;
- (void)layoutTitleLabels;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (void)initTitleArea;
- (void)initCloseBtn;
- (void)initlongVideoGradientLayer;
- (void)initGradientLayer;
- (void)initSnapshotView;
- (void)initSubviews;
- (void)initContentView;
- (struct CGRect)menuPopoverFrame;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)adjustFrontViewYWithCollectionContentOffsetY:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

