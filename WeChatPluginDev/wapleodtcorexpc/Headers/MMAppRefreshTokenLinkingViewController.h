//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DotLoadingView, MMAppRefreshTokenAppInfo, MMWebImageView, UIImageView, UILabel;

@interface MMAppRefreshTokenLinkingViewController
{
    unsigned int _scene;
    UIImageView *_wxIconImageView;
    MMWebImageView *_appIconImageView;
    UILabel *_titleLabel;
    DotLoadingView *_dotLoadingView;
    MMAppRefreshTokenAppInfo *_appInfo;
    CDUnknownBlockType _dimisssHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dimisssHandler; // @synthesize dimisssHandler=_dimisssHandler;
@property(retain, nonatomic) MMAppRefreshTokenAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) DotLoadingView *dotLoadingView; // @synthesize dotLoadingView=_dotLoadingView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(retain, nonatomic) UIImageView *wxIconImageView; // @synthesize wxIconImageView=_wxIconImageView;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)reportLaunchSchemeSuccess;
- (void)reportLaunchUniversalLinkFailWithToken:(id)arg1 errMsg:(id)arg2;
- (void)reportLaunch3rdWithUniversalLink:(id)arg1 token:(id)arg2 success:(_Bool)arg3;
- (void)onClose;
- (void)onLaunch3rdApp;
- (void)delayDismissMyself;
- (void)layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (id)initWithWithAppInfo:(id)arg1 dimisssHandler:(CDUnknownBlockType)arg2;

@end

