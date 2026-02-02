//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAWebViewPullDownRefreshView;

@interface WAWebViewPlugin_PullRefresh
{
    _Bool _isReflashingHead;
    _Bool _isEnablePullRefresh;
    WAWebViewPullDownRefreshView *_headRefreshView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAWebViewPullDownRefreshView *headRefreshView; // @synthesize headRefreshView=_headRefreshView;
@property(nonatomic) _Bool isEnablePullRefresh; // @synthesize isEnablePullRefresh=_isEnablePullRefresh;
@property(nonatomic) _Bool isReflashingHead; // @synthesize isReflashingHead=_isReflashingHead;
- (void)onStartRefreshing;
- (void)stopPullRefresh;
- (void)startPullRefresh;
- (void)disablePullRefresh;
- (void)enablePullRefresh:(double)arg1 mode:(long long)arg2;
- (void)delHeaderRefreshView;
- (void)genHeaderRefreshViewWithMode:(long long)arg1;
- (void)changePullRefreshMode:(long long)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

