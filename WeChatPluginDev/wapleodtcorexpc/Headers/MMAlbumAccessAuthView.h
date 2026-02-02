//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UIButton, UIImageView, UILabel;
@protocol MMAlbumAccessAuthViewDelegate;

@interface MMAlbumAccessAuthView : UIView
{
    _Bool _isWechatAuthorized;
    _Bool _showWechatAuthStyle;
    id <MMAlbumAccessAuthViewDelegate> _delegate;
    double _topPadding;
    unsigned long long _authScene;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_openSettingButton;
    MMUIButton *_showLimitPhotoButton;
    UIImageView *_iconImageView;
    MMUIButton *_wechatAuthButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showWechatAuthStyle; // @synthesize showWechatAuthStyle=_showWechatAuthStyle;
@property(retain, nonatomic) MMUIButton *wechatAuthButton; // @synthesize wechatAuthButton=_wechatAuthButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUIButton *showLimitPhotoButton; // @synthesize showLimitPhotoButton=_showLimitPhotoButton;
@property(retain, nonatomic) UIButton *openSettingButton; // @synthesize openSettingButton=_openSettingButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long authScene; // @synthesize authScene=_authScene;
@property(nonatomic) _Bool isWechatAuthorized; // @synthesize isWechatAuthorized=_isWechatAuthorized;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) __weak id <MMAlbumAccessAuthViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onRequestWechatAuth:(id)arg1;
- (void)onShowLimitedPhoto:(id)arg1;
- (void)onOpenSetting:(id)arg1;
- (void)layoutSubviews;
- (void)initViewForSystemNotAuth;
- (void)initViewForWechatNotAuth;
- (void)updateContent;

@end

