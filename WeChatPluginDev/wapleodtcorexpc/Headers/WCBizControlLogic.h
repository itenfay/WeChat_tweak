//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCBizLoadingView;

@interface WCBizControlLogic
{
    WCBizLoadingView *m_loadView;
    _Bool m_isLoading;
}

- (void).cxx_destruct;
- (void)startCommonLoadingWithTips:(id)arg1;
- (void)stopCommonLoading;
- (void)startCommonLoading;
- (void)startLoadingOnMainWindow;
- (void)stopLoadingOnMainWindow;
- (void)showLoadingOK:(id)arg1;
- (void)stopLoading;
- (void)startLoadingBlockedWithTip:(id)arg1;
- (void)startLoadingWithTip:(id)arg1;
- (void)startLoadingBlocked;
- (void)startLoading;
- (void)stopWCPayLoading;
- (void)startWCPayLoadingBlocked;
- (void)startWCPayLoading;
- (void)startWCPayLoading:(_Bool)arg1;
- (void)startLoading:(_Bool)arg1;
- (void)dealloc;
- (void)initLoadView;
- (_Bool)isLoading;
- (id)init;

@end

