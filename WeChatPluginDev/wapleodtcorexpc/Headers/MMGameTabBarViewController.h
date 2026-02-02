//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterTabBarLogicControllerV5, MMUIView, MMUIViewController, NSArray, NSMutableDictionary;

@interface MMGameTabBarViewController
{
    _Bool _bHasH5FloatLayer;
    int _currentSelectedIndex;
    MMUIViewController *_homeVC;
    MMUIViewController *_webVC;
    GameCenterTabBarLogicControllerV5 *_tabBarLogicControllerV5;
    NSArray *_tabItemArrayFromCache;
    NSMutableDictionary *_tabIndex2ViewController;
    NSMutableDictionary *_tabIndex2Button;
    MMUIView *_tabBarParentView;
    MMUIViewController *_nativeHomeVC;
    unsigned long long _tabCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long tabCount; // @synthesize tabCount=_tabCount;
@property int currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(retain, nonatomic) MMUIViewController *nativeHomeVC; // @synthesize nativeHomeVC=_nativeHomeVC;
@property(retain, nonatomic) MMUIView *tabBarParentView; // @synthesize tabBarParentView=_tabBarParentView;
@property(retain, nonatomic) NSMutableDictionary *tabIndex2Button; // @synthesize tabIndex2Button=_tabIndex2Button;
@property(retain, nonatomic) NSMutableDictionary *tabIndex2ViewController; // @synthesize tabIndex2ViewController=_tabIndex2ViewController;
@property(retain, nonatomic) NSArray *tabItemArrayFromCache; // @synthesize tabItemArrayFromCache=_tabItemArrayFromCache;
@property(retain, nonatomic) GameCenterTabBarLogicControllerV5 *tabBarLogicControllerV5; // @synthesize tabBarLogicControllerV5=_tabBarLogicControllerV5;
@property(nonatomic) _Bool bHasH5FloatLayer; // @synthesize bHasH5FloatLayer=_bHasH5FloatLayer;
@property(retain, nonatomic) MMUIViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) MMUIViewController *homeVC; // @synthesize homeVC=_homeVC;
- (void)tabBarClickReport:(id)arg1;
- (void)tabBarExposureReport:(id)arg1;
- (void)itemButtonTap:(id)arg1;
- (void)replaceFromViewController:(id)arg1 toViewController:(id)arg2 NewIndex:(int)arg3;
- (void)setTabButtonHighlighted:(_Bool)arg1 TabButton:(id)arg2;
- (void)setTabIndexHighlighted:(int)arg1;
- (void)selectTabIndex:(int)arg1 ToIndex:(int)arg2;
- (id)getOneTabBar:(int)arg1 TabItem:(id)arg2 OriginX:(double)arg3 OriginY:(double)arg4;
- (void)initTabBars:(id)arg1;
- (double)getTabBarHeight;
- (void)showH5FloatLayerWebViewControllerIfNeeded;
- (void)initAllTabAndViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initTabControllers:(id)arg1;
- (void)AdjustTabBarUI;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePoped:(_Bool)arg1;
- (id)initWithSourceScene:(unsigned int)arg1;
- (id)init;

@end

