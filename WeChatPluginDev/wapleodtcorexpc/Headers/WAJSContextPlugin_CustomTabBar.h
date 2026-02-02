//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, UIColor, UIView, WeAppCustomTabbar;

@interface WAJSContextPlugin_CustomTabBar
{
    _Bool _m_IsChangeTab;
    _Bool _needAnimation;
    _Bool _m_IsCustomRender;
    _Bool _isTopTabBar;
    _Bool _bIsLoading;
    _Bool _isTabbarAnimating;
    _Bool _isTabbarVisible;
    _Bool _needAdaptIpad;
    _Bool _shouldIgnoreBottomSafeInset;
    long long m_TabItemCount;
    CDUnknownBlockType _m_onLoadTabThenSwitch;
    WeAppCustomTabbar *_myCustomTabBar;
    long long _mainTabIndex;
    long long _curSelectedIndex;
    UIView *_topCoverBoderLine;
    UIView *_topSelectedLine;
    UIColor *_textColor;
    UIColor *_selectTextColor;
    NSMutableArray *_arrTabItemData;
    NSMutableDictionary *_dicTabWebView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldIgnoreBottomSafeInset; // @synthesize shouldIgnoreBottomSafeInset=_shouldIgnoreBottomSafeInset;
@property(nonatomic) _Bool needAdaptIpad; // @synthesize needAdaptIpad=_needAdaptIpad;
@property(nonatomic) _Bool isTabbarVisible; // @synthesize isTabbarVisible=_isTabbarVisible;
@property(nonatomic) _Bool isTabbarAnimating; // @synthesize isTabbarAnimating=_isTabbarAnimating;
@property(retain, nonatomic) NSMutableDictionary *dicTabWebView; // @synthesize dicTabWebView=_dicTabWebView;
@property(retain, nonatomic) NSMutableArray *arrTabItemData; // @synthesize arrTabItemData=_arrTabItemData;
@property(retain, nonatomic) UIColor *selectTextColor; // @synthesize selectTextColor=_selectTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIView *topSelectedLine; // @synthesize topSelectedLine=_topSelectedLine;
@property(retain, nonatomic) UIView *topCoverBoderLine; // @synthesize topCoverBoderLine=_topCoverBoderLine;
@property(nonatomic) _Bool bIsLoading; // @synthesize bIsLoading=_bIsLoading;
@property(nonatomic) long long curSelectedIndex; // @synthesize curSelectedIndex=_curSelectedIndex;
@property(nonatomic) long long mainTabIndex; // @synthesize mainTabIndex=_mainTabIndex;
@property(nonatomic) _Bool isTopTabBar; // @synthesize isTopTabBar=_isTopTabBar;
@property(retain, nonatomic) WeAppCustomTabbar *myCustomTabBar; // @synthesize myCustomTabBar=_myCustomTabBar;
@property(copy, nonatomic) CDUnknownBlockType m_onLoadTabThenSwitch; // @synthesize m_onLoadTabThenSwitch=_m_onLoadTabThenSwitch;
@property(nonatomic) _Bool m_IsCustomRender; // @synthesize m_IsCustomRender=_m_IsCustomRender;
@property(nonatomic) _Bool needAnimation; // @synthesize needAnimation=_needAnimation;
@property(nonatomic) _Bool m_IsChangeTab; // @synthesize m_IsChangeTab=_m_IsChangeTab;
@property(nonatomic) long long m_TabItemCount; // @synthesize m_TabItemCount;
- (void)scaleTabbarItem:(_Bool)arg1 isLandscape:(_Bool)arg2;
- (void)setBorderStyle:(id)arg1;
- (void)changeColorAppearance;
- (id)genTabbarItemsWithtextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)layoutTabbarByWAWebviewVC:(id)arg1;
- (void)hideBadgeOnItemIndex:(long long)arg1;
- (void)setTabBarBadgeAsRedDotForIndex:(long long)arg1;
- (void)setTabBarBadgeString:(id)arg1 badgeColor:(id)arg2 forIndex:(long long)arg3;
- (void)updateBadgeByIndex:(long long)arg1;
- (_Bool)isVisible;
- (void)setTabBarVisible:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setTabBarVisible:(_Bool)arg1;
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (void)delaySwitchTabItemWithIndex:(id)arg1;
- (void)loadTabWebViewWithIndex:(long long)arg1;
- (void)frameChanged;
- (void)switchToTabItem:(long long)arg1;
- (_Bool)tabBar:(id)arg1 didSelectIndex:(long long)arg2;
- (void)updateTopTabBarSelectedLinePosition;
- (void)bringTabBarToFront;
- (struct CGRect)currentTabBarFrame;
- (void)setTabBarStyleWithTextColor:(id)arg1 selectTextColor:(id)arg2 backgroundColor:(id)arg3 borderColor:(id)arg4;
- (void)setItemAtTabIndex:(long long)arg1 text:(id)arg2 iconImage:(id)arg3 selectIconImage:(id)arg4;
- (void)createChildVCTabBarWithItems:(id)arg1 mainTabIndex:(long long)arg2 position:(id)arg3 backgroundColor:(id)arg4 textColor:(id)arg5 selectedTextColor:(id)arg6 borderColor:(id)arg7;
- (_Bool)constructByFirstWAWebviewVC:(id)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)init;
- (_Bool)isLoadingTab;
- (id)getTabWebViewAtIndex:(unsigned long long)arg1;
- (_Bool)isTabPath:(id)arg1;
- (_Bool)isTabWebVC:(id)arg1;
- (id)getSelectedTabWebView;
- (_Bool)isTabCreatedWithPagePath:(id)arg1;
- (void)selectTabWithPagePath:(id)arg1;
- (_Bool)selectTabWithIndex:(long long)arg1;
- (void)selectMainTab;
- (_Bool)isSelectedMainTab;
- (void)clearTabWebViewFrom:(id)arg1;
- (void)clearTabWebView;
- (id)getSkylineTabWebView;
- (id)getAllTabWebViews;
- (_Bool)currentHasTabPage;
- (double)tabbarHeight;
- (void)dealloc;
- (id)getTabbar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

