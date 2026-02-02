//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMWebImageView, NSString, RichTextView, UIImageView, UILabel, WCFinderAuthInfoIconView;

@interface WCFinderShareCoverImageView : UIView
{
    _Bool _blurEnabled;
    UIImageView *_imageView;
    UIImageView *_tinyIcon;
    UILabel *_nameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    MMWebImageView *_tailTagView;
    UIView *_photoDotsView;
    MMWebImageView *_maskImageView;
    CAGradientLayer *_gradientLayer;
    RichTextView *_mediaTitleTextView;
    UIImageView *_liveGradientView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *liveGradientView; // @synthesize liveGradientView=_liveGradientView;
@property(retain, nonatomic) RichTextView *mediaTitleTextView; // @synthesize mediaTitleTextView=_mediaTitleTextView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMWebImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIView *photoDotsView; // @synthesize photoDotsView=_photoDotsView;
@property(retain, nonatomic) MMWebImageView *tailTagView; // @synthesize tailTagView=_tailTagView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *tinyIcon; // @synthesize tinyIcon=_tinyIcon;
@property(nonatomic) _Bool blurEnabled; // @synthesize blurEnabled=_blurEnabled;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)updateBlurEnabled;
- (void)onLoadImageOK;
- (void)layoutTitle:(id)arg1;
- (void)layoutPhotoDotsIfNeededWithFinderShareItem:(id)arg1;
- (void)layoutAuthorInfoWithAuthIconURL:(id)arg1 authIconType:(unsigned long long)arg2 nickname:(id)arg3 tailTagURL:(id)arg4;
- (void)layoutImageWithURL:(id)arg1 coverResourceIdentifier:(id)arg2;
- (void)renderWithLiveShareItem:(id)arg1 size:(struct CGSize)arg2;
- (void)renderWithFinderShareItem:(id)arg1 size:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

