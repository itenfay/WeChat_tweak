//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, WCFinderAnimationLoadingView, WCFinderDataLoadTipsConfig;
@protocol WCFinderDataLoadTipsDelegate;

@interface WCFinderDataLoadTips : UIView
{
    id <WCFinderDataLoadTipsDelegate> _delegate;
    MMUIButton *_tipsButton;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderDataLoadTipsConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataLoadTipsConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUIButton *tipsButton; // @synthesize tipsButton=_tipsButton;
@property(nonatomic) __weak id <WCFinderDataLoadTipsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)retryButtonClicked:(id)arg1;
- (void)clear;
- (void)showRetryTips:(id)arg1;
- (void)showEmptyTips:(id)arg1;
- (void)showTips:(id)arg1 canRetry:(_Bool)arg2;
- (void)endLoadingState;
- (void)startLoadingState;
- (void)setupTipsBtn;
- (void)setupLoading;
- (void)updateConfig:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

