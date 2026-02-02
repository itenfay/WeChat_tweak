//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CALayer, MMUIButton, MMWebImageView, NewLifeRedPacketActivityView, NewLifeShareCoverImageViewModel, RichTextView, UILabel, WCFinderHeadImageView;

@interface NewLifeShareCoverImageView : UIView
{
    NewLifeShareCoverImageViewModel *_viewModel;
    UIView *_highlightedMaskView;
    MMWebImageView *_contentImageView;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nameLabel;
    RichTextView *_descLabel;
    MMUIButton *_photoButton;
    UIView *_photoMaskView;
    CALayer *_bottomGradientLayer;
    NewLifeRedPacketActivityView *_redPacketView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewLifeRedPacketActivityView *redPacketView; // @synthesize redPacketView=_redPacketView;
@property(retain, nonatomic) CALayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) UIView *photoMaskView; // @synthesize photoMaskView=_photoMaskView;
@property(retain, nonatomic) MMUIButton *photoButton; // @synthesize photoButton=_photoButton;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) MMWebImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIView *highlightedMaskView; // @synthesize highlightedMaskView=_highlightedMaskView;
@property(retain, nonatomic) NewLifeShareCoverImageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (struct CGRect)getCoverCropRect:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)initSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithViewModel:(id)arg1;

@end

