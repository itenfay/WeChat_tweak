//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMProgressViewEx, MMUIButton, UIImageView, WATitleView;

@interface WASimulatedNativeImageLoadingViewController
{
    MMUIButton *_quitButton;
    WATitleView *_titleView;
    long long _orientation;
    UIImageView *_loadingImageView;
    MMProgressViewEx *_loadingView;
}

- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)setThumbImage:(id)arg1;
- (void)showBufferingView;
- (void)showTitleLoading;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2;

@end

