//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderNoMoreView;
@protocol WCFinderRefreshTableFooterViewDelegate;

@interface WCFinderRefreshTableFooterView : UIView
{
    _Bool _isLoadingVisible;
    id <WCFinderRefreshTableFooterViewDelegate> _delegate;
    NSString *_normalText;
    double _heightLimit;
    double _heightInNoMoreDataState;
    unsigned long long _state;
    unsigned long long _style;
    UILabel *_label;
    WCFinderNoMoreView *_noMoreView;
    UITapGestureRecognizer *_singleGestureRecognizer;
    WCFinderAnimationLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoadingVisible; // @synthesize isLoadingVisible=_isLoadingVisible;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UITapGestureRecognizer *singleGestureRecognizer; // @synthesize singleGestureRecognizer=_singleGestureRecognizer;
@property(retain, nonatomic) WCFinderNoMoreView *noMoreView; // @synthesize noMoreView=_noMoreView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) double heightInNoMoreDataState; // @synthesize heightInNoMoreDataState=_heightInNoMoreDataState;
@property(nonatomic) double heightLimit; // @synthesize heightLimit=_heightLimit;
@property(copy, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
@property(nonatomic) __weak id <WCFinderRefreshTableFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1 checkIsDragging:(_Bool)arg2;
- (void)forceUpdateRefreshState:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)onClick;
- (void)onClickRetry;
- (void)onStateOfError:(id)arg1;
- (void)onSetStateForNoMoreData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfBlank;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onForceNoramalToLoadingState;
- (void)onResumeOfLoading;
- (_Bool)isNormalStateNow;
- (_Bool)isLoadingNow;
- (void)onConfigLabelTop:(double)arg1;
- (void)setNoMoreViewDarkStyle:(_Bool)arg1;
- (void)setUseDarkLoading:(_Bool)arg1;
- (void)setNoMoreViewColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

