//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class ColorGradientView, MMUIButton, MMWebImageView, NSString, NewLifeCardViewModel, RichTextView, UIImageView, UIView;

@interface WCFinderProfileNewLifeOverviewCell : UICollectionViewCell
{
    _Bool _enableFinderLike;
    NewLifeCardViewModel *_viewModel;
    MMWebImageView *_mediaImageView;
    UIView *_mediaMaskView;
    UIImageView *_backgroundBlurView;
    MMUIButton *_likeButton;
    UIView *_separateView;
    MMUIButton *_stickyButton;
    MMUIButton *_privacyButton;
    ColorGradientView *_gradientView;
    RichTextView *_titleLabel;
}

+ (id)generateStateButtonWithHasText:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ColorGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) MMUIButton *privacyButton; // @synthesize privacyButton=_privacyButton;
@property(retain, nonatomic) MMUIButton *stickyButton; // @synthesize stickyButton=_stickyButton;
@property(retain, nonatomic) UIView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) MMUIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIImageView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIView *mediaMaskView; // @synthesize mediaMaskView=_mediaMaskView;
@property(retain, nonatomic) MMWebImageView *mediaImageView; // @synthesize mediaImageView=_mediaImageView;
@property(nonatomic) _Bool enableFinderLike; // @synthesize enableFinderLike=_enableFinderLike;
@property(retain, nonatomic) NewLifeCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutSubviews;
- (void)updateButtons;
- (void)updateView;
- (struct CGRect)getCoverCropRect:(_Bool)arg1;
- (void)updateLayout;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

