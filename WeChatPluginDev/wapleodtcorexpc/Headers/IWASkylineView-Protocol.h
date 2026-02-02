//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor, UIImage, UIView, WADebugSkylineOptions, WASkylinePageCfg, WAWebViewController;
@protocol IWASkylineRuntime, WASkylineViewDelegate;

@protocol IWASkylineView
@property(retain, nonatomic) WADebugSkylineOptions *debugOptions;
@property(nonatomic) _Bool fontShapeUseCoreText;
@property(nonatomic) _Bool isNewEngineHomePage;
@property(retain, nonatomic) UIColor *backgroundColorContent;
@property(nonatomic) _Bool isMovingView;
@property(readonly, nonatomic) _Bool isFirst;
@property(readonly, nonatomic) _Bool isRouting;
@property(readonly, nonatomic) _Bool isReady;
@property(retain, nonatomic) WASkylinePageCfg *pageCfg;
@property(readonly, nonatomic) long long windowId;
@property(nonatomic) __weak id <IWASkylineRuntime> skylineRuntime;
@property(nonatomic) __weak id <WASkylineViewDelegate> skylineDelegate;
- (void)notifySwitchTab:(long long)arg1 pageCfg:(WASkylinePageCfg *)arg2;
- (void)notifyAutoReLaunch:(long long)arg1 pageCfg:(WASkylinePageCfg *)arg2;
- (void)notifyReLaunch:(long long)arg1 pageCfg:(WASkylinePageCfg *)arg2;
- (void)notifyAppLaunch:(long long)arg1 pageCfg:(WASkylinePageCfg *)arg2;
- (void)notifyNavigateBack:(long long)arg1 calculatedDelta:(long long)arg2 animated:(_Bool)arg3 pageCfg:(WASkylinePageCfg *)arg4;
- (void)notifyRedirectTo:(long long)arg1 pageCfg:(WASkylinePageCfg *)arg2;
- (void)notifyNavigateTo:(long long)arg1 pageCfg:(WASkylinePageCfg *)arg2;
- (_Bool)checkIsSubView:(UIView *)arg1;
- (void)snapshotEnd;
- (void)snapshotBegin;
- (UIImage *)snapshotSkyline;
- (void)removeNativeView:(long long)arg1;
- (void)insertNativeView:(UIView *)arg1 viewId:(long long)arg2;
- (void)moveViewToOldPage:(WAWebViewController *)arg1;
- (void)moveViewToNewPage:(WAWebViewController *)arg1;
- (void)initViewInPage:(WAWebViewController *)arg1;
- (void)initFlutterView;
@end

