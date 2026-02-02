//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, WCFinderAnimationLoadingView;

@interface WCFinderStreamProfileBlankPage
{
    UILabel *_textLabel;
    WCFinderAnimationLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)onProfileStatePageDataChanged;
- (void)onClickRetry;
- (void)updateState;
- (void)updateFrame;
- (void)viewWillApear;
- (void)onPageSizeDidChanged;
- (void)viewDidLoad;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

