//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, NSString, UIButton, UIColor, UIImageView, UILabel, WAAppTaskCapsuleMenu, WASheetHeaderTipsView;
@protocol WABrandTitleBarDelegate;

@interface WABrandTitleBar : UIView
{
    _Bool _avatarAlignLeft;
    _Bool _enableAvatarButton;
    _Bool _shouldShowShare;
    _Bool _shouldShowClose;
    _Bool _enableDarkMode;
    _Bool _needGradientMaskView;
    _Bool _hideAvatar;
    _Bool _isCloseButtonShown;
    id <WABrandTitleBarDelegate> _delegate;
    NSString *_avatarUrl;
    NSString *_nickName;
    NSString *_subtitle;
    UIButton *_shareButton;
    UIColor *_foreColor;
    WAAppTaskCapsuleMenu *_menuView;
    NSString *_tipsText;
    CDUnknownBlockType _tipsDidShowBlock;
    CDUnknownBlockType _tipsDidClickCloseBlock;
    UIView *_containerView;
    MMWebImageView *_avatarImageView;
    UIView *_nickNameContainerView;
    UILabel *_nickNameLabel;
    UIView *_titleContainerView;
    UIView *_subtitleContainerView;
    UILabel *_subtitleLabel;
    UILabel *_supportByLabel;
    UIImageView *_arrowImageView;
    UIButton *_closeButton;
    WASheetHeaderTipsView *_tipsView;
    UIView *_gradientMaskView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *gradientMaskView; // @synthesize gradientMaskView=_gradientMaskView;
@property(retain, nonatomic) WASheetHeaderTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(nonatomic) _Bool isCloseButtonShown; // @synthesize isCloseButtonShown=_isCloseButtonShown;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *supportByLabel; // @synthesize supportByLabel=_supportByLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIView *subtitleContainerView; // @synthesize subtitleContainerView=_subtitleContainerView;
@property(retain, nonatomic) UIView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIView *nickNameContainerView; // @synthesize nickNameContainerView=_nickNameContainerView;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType tipsDidClickCloseBlock; // @synthesize tipsDidClickCloseBlock=_tipsDidClickCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType tipsDidShowBlock; // @synthesize tipsDidShowBlock=_tipsDidShowBlock;
@property(copy, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(retain, nonatomic) WAAppTaskCapsuleMenu *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) UIColor *foreColor; // @synthesize foreColor=_foreColor;
@property(nonatomic) _Bool hideAvatar; // @synthesize hideAvatar=_hideAvatar;
@property(nonatomic) _Bool needGradientMaskView; // @synthesize needGradientMaskView=_needGradientMaskView;
@property(nonatomic) _Bool enableDarkMode; // @synthesize enableDarkMode=_enableDarkMode;
@property(nonatomic) _Bool shouldShowClose; // @synthesize shouldShowClose=_shouldShowClose;
@property(nonatomic) _Bool shouldShowShare; // @synthesize shouldShowShare=_shouldShowShare;
@property(nonatomic) _Bool enableAvatarButton; // @synthesize enableAvatarButton=_enableAvatarButton;
@property(nonatomic) _Bool avatarAlignLeft; // @synthesize avatarAlignLeft=_avatarAlignLeft;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(nonatomic) __weak id <WABrandTitleBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateShareButtonHidden;
- (id)snapShotImageView;
- (void)onClose;
- (void)onShare;
- (void)updateAvatarFrame;
- (_Bool)needShowSubtitle;
- (void)layoutSubtitleContainerView;
- (void)layoutTitleContainerView;
- (void)layoutSubviews;
- (void)setHeaderHighlighted:(_Bool)arg1;
- (void)hideCloseButton;
- (void)showCloseButtonAnimated:(_Bool)arg1;
- (void)onPressHeader:(id)arg1;
- (void)onClickTipsClose;
- (void)initTipsView;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

