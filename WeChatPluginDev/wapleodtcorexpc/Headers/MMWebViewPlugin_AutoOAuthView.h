//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class IndicatorAnimationBallBeatView, MMWebImageView, UIButton, UILabel, UIView;

@interface MMWebViewPlugin_AutoOAuthView
{
    UIView *_bgView;
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    IndicatorAnimationBallBeatView *_indicatorView;
    UILabel *_descLabel;
    UIButton *_backAppBtn;
    _Bool _bIsSuccessView;
}

- (void).cxx_destruct;
- (void)hideAutoOAuthLoadingView;
- (void)onBackToApp;
- (void)layoutAutoOAuthView;
- (void)initViewWithWording:(id)arg1 HeadImgUrl:(id)arg2;
- (void)showAutoOAuthLoadingViewWithSchemeUrl:(id)arg1 Success:(_Bool)arg2 Wording:(id)arg3 HeadImgUrl:(id)arg4;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;

@end

