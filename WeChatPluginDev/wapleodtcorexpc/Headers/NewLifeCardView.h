//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class ColorGradientView, MMUIButton, MMUILabel, MMWebImageView, NewLifeCardPostStateView, NewLifeCardViewModel, NewLifeRedPacketActivityView, RichTextView, UIImpactFeedbackGenerator, WCFinderHeadImageView, WCFinderStaticCoverInfoView;

@interface NewLifeCardView : UIView
{
    _Bool _enableFinderLike;
    NewLifeCardViewModel *_viewModel;
    MMWebImageView *_mediaImageView;
    UIView *_mediaMaskView;
    RichTextView *_titleLabel;
    WCFinderHeadImageView *_headImageView;
    MMUILabel *_usernameLabel;
    MMUIButton *_likeButton;
    MMUIButton *_globalFavoriteButton;
    MMUIButton *_readCountButton;
    UIView *_separateView;
    MMUIButton *_stickyButton;
    MMUIButton *_privacyButton;
    NewLifeCardPostStateView *_postStateView;
    ColorGradientView *_gradientView;
    WCFinderStaticCoverInfoView *_infoView;
    UIView *_infoBGView;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    NewLifeRedPacketActivityView *_redPacketView;
}

+ (id)generateMediaBottomButtonWithHasText:(_Bool)arg1;
+ (id)generateFooterButton;
+ (double)adjustFooterButtonSize:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NewLifeRedPacketActivityView *redPacketView; // @synthesize redPacketView=_redPacketView;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UIView *infoBGView; // @synthesize infoBGView=_infoBGView;
@property(retain, nonatomic) WCFinderStaticCoverInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) ColorGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) NewLifeCardPostStateView *postStateView; // @synthesize postStateView=_postStateView;
@property(retain, nonatomic) MMUIButton *privacyButton; // @synthesize privacyButton=_privacyButton;
@property(retain, nonatomic) MMUIButton *stickyButton; // @synthesize stickyButton=_stickyButton;
@property(retain, nonatomic) UIView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) MMUIButton *readCountButton; // @synthesize readCountButton=_readCountButton;
@property(retain, nonatomic) MMUIButton *globalFavoriteButton; // @synthesize globalFavoriteButton=_globalFavoriteButton;
@property(retain, nonatomic) MMUIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) MMUILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) RichTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *mediaMaskView; // @synthesize mediaMaskView=_mediaMaskView;
@property(retain, nonatomic) MMWebImageView *mediaImageView; // @synthesize mediaImageView=_mediaImageView;
@property(nonatomic) _Bool enableFinderLike; // @synthesize enableFinderLike=_enableFinderLike;
@property(retain, nonatomic) NewLifeCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)updateReportParams:(id)arg1;
- (void)configureLikeButtonClickReportWithParams:(id)arg1;
- (void)configureCardReportWithParams:(id)arg1;
- (void)onTapLikeButton;
- (id)mediaView;
- (void)updateSeparateView;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateLikeState;
- (void)updateMaskState;
- (void)updateStateButtons;
- (void)updateView;
- (struct CGRect)getCoverCropRect;
- (void)updateLayout;
- (void)initSubviews;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

