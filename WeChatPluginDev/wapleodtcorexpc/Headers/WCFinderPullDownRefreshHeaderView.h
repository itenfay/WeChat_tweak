//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, WCFinderAnimationLoadingView;
@protocol WCFinderPullDownRefreshHeaderViewStatusDelegate;

@interface WCFinderPullDownRefreshHeaderView
{
    id <WCFinderPullDownRefreshHeaderViewStatusDelegate> _statusDelegate;
    double _triggerHeight;
    unsigned long long _triggerMode;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long triggerMode; // @synthesize triggerMode=_triggerMode;
@property(nonatomic) double triggerHeight; // @synthesize triggerHeight=_triggerHeight;
@property(nonatomic) __weak id <WCFinderPullDownRefreshHeaderViewStatusDelegate> statusDelegate; // @synthesize statusDelegate=_statusDelegate;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)onStateOfNoMore:(id)arg1;
- (void)onStateOfError:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onResumeOfLoading;
- (_Bool)isOnLoadingRefreshState;
- (_Bool)isLoadingNow;
- (void)onStateOfPulling;
- (void)setState:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configWithImage:(id)arg2 configWithImageName:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 configWithImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 configWithImageName:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

