//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor, UIScrollView;

@interface WAWebViewPlugin_CustomNavigationBar
{
    _Bool _webAppear;
    UIScrollView *_scrollListener;
    UIColor *_reservedBgColor;
    long long _reservedStatusBar;
    long long _reservedNavigationMode;
    NSString *_reservedNavigationTitle;
    _Bool _showShareMenu;
    _Bool _showSellsDriving;
    _Bool _listenTapStatusBar;
    _Bool _shouldUseDynamicPageShare;
    long long _shareMenuType;
    long long _gameMenuStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long gameMenuStyle; // @synthesize gameMenuStyle=_gameMenuStyle;
@property(nonatomic) _Bool shouldUseDynamicPageShare; // @synthesize shouldUseDynamicPageShare=_shouldUseDynamicPageShare;
@property(nonatomic) _Bool listenTapStatusBar; // @synthesize listenTapStatusBar=_listenTapStatusBar;
@property(nonatomic) _Bool showSellsDriving; // @synthesize showSellsDriving=_showSellsDriving;
@property(nonatomic) _Bool showShareMenu; // @synthesize showShareMenu=_showShareMenu;
@property(nonatomic) long long shareMenuType; // @synthesize shareMenuType=_shareMenuType;
- (void)setNavBarTitle:(id)arg1;
- (void)setNavBarElementAndStatusBarStyle:(long long)arg1;
- (void)setNavBarBackgroundColor:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)addWeAppStatusBarListener;
- (void)__changeStatusBarWhite:(_Bool)arg1;
- (void)changeStatusBarWhite:(_Bool)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

