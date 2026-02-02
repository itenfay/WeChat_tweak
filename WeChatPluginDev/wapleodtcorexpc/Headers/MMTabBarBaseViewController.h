//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FontSettingUtil, NSString;

@interface MMTabBarBaseViewController
{
    FontSettingUtil *m_fontSettingUtil;
}

- (void).cxx_destruct;
- (void)heroDidEndTransition;
- (id)getCurrentViewController;
- (void)onMainTabBarHiddenChange:(_Bool)arg1;
- (id)navigationTitleFont;
- (void)tryFixOrientation;
- (double)getMainTableBottomInset;
- (double)getMainTableHeight;
- (void)willEnterForground;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)viewDidLoad;
- (void)fixTabbarState;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (void)updateViewWhenSelectTab:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

