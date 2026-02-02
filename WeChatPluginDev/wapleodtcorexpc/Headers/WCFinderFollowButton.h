//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderFollowBtnConfig, WCFinderFollowBtnViewModel;

@interface WCFinderFollowButton
{
    WCFinderFollowBtnViewModel *_viewModel;
    WCFinderFollowBtnConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFollowBtnConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WCFinderFollowBtnViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onClickSelf;
- (void)_updateUI;
- (void)updateWithContact:(id)arg1;
- (void)dealloc;
- (void)setupObserver;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;

@end

