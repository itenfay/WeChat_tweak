//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterMethodChannel, FlutterViewController, LiteAppPageConfig, MMLiteAppReporter, NSMutableDictionary, NSString, UIImage, UIViewController, WxaLiteAppStartReport, WxaLiteAppWidgetConsumer, WxaLiteAppWidgetFlutterPluginApi;
@protocol LiteAppWidgetParentViewControllerDelegate;

@interface WxaLiteAppWidgetAdapter : NSObject
{
    struct shared_ptr<LVUICallback> lvUICallback;
    _Bool _isPopGestureEnable;
    _Bool _keyboardShow;
    _Bool _statusBarHidden;
    _Bool _hasCheckCoreText;
    _Bool _disableScroll;
    _Bool _isReportStartTimeLine;
    int _engineId;
    unsigned int _appUuid;
    int _lastFlags;
    float _fontScale;
    float _lastBatteryLevel;
    float _lastVolume;
    UIViewController<LiteAppWidgetParentViewControllerDelegate> *_liteAppParentViewController;
    FlutterViewController *_flutterViewController;
    NSString *_appId;
    NSString *_path;
    NSString *_signatureKey;
    NSString *_page;
    NSString *_query;
    NSString *_activityId;
    NSString *_pageName;
    NSMutableDictionary *_params;
    WxaLiteAppWidgetConsumer *_consumer;
    WxaLiteAppStartReport *_startReport;
    MMLiteAppReporter *_reporter;
    LiteAppPageConfig *_pageConfig;
    FlutterMethodChannel *_channel;
    WxaLiteAppWidgetFlutterPluginApi *_pluginApi;
    UIImage *_backgroundImage;
    long long _lastOrientation;
    struct CGSize _delayUpdateSize;
    struct PageInfo _currentPageInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) float lastVolume; // @synthesize lastVolume=_lastVolume;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(nonatomic) float lastBatteryLevel; // @synthesize lastBatteryLevel=_lastBatteryLevel;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) __weak WxaLiteAppWidgetFlutterPluginApi *pluginApi; // @synthesize pluginApi=_pluginApi;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) LiteAppPageConfig *pageConfig; // @synthesize pageConfig=_pageConfig;
@property(retain, nonatomic) MMLiteAppReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WxaLiteAppStartReport *startReport; // @synthesize startReport=_startReport;
@property(nonatomic) _Bool isReportStartTimeLine; // @synthesize isReportStartTimeLine=_isReportStartTimeLine;
@property(nonatomic) float fontScale; // @synthesize fontScale=_fontScale;
@property(nonatomic) _Bool disableScroll; // @synthesize disableScroll=_disableScroll;
@property(nonatomic) _Bool hasCheckCoreText; // @synthesize hasCheckCoreText=_hasCheckCoreText;
@property(nonatomic) struct CGSize delayUpdateSize; // @synthesize delayUpdateSize=_delayUpdateSize;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) _Bool keyboardShow; // @synthesize keyboardShow=_keyboardShow;
@property(retain, nonatomic) WxaLiteAppWidgetConsumer *consumer; // @synthesize consumer=_consumer;
@property(nonatomic) struct PageInfo currentPageInfo; // @synthesize currentPageInfo=_currentPageInfo;
@property(nonatomic) int lastFlags; // @synthesize lastFlags=_lastFlags;
@property(nonatomic) _Bool isPopGestureEnable; // @synthesize isPopGestureEnable=_isPopGestureEnable;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) unsigned int appUuid; // @synthesize appUuid=_appUuid;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *signatureKey; // @synthesize signatureKey=_signatureKey;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) int engineId; // @synthesize engineId=_engineId;
@property(nonatomic) __weak FlutterViewController *flutterViewController; // @synthesize flutterViewController=_flutterViewController;
@property(nonatomic) __weak UIViewController<LiteAppWidgetParentViewControllerDelegate> *liteAppParentViewController; // @synthesize liteAppParentViewController=_liteAppParentViewController;
- (void)onLayoutComplete:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(_Bool)arg2 pageId:(unsigned long long)arg3;
- (void)onCheckLiteAppVersionError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)setForbidRightGestureEnable:(_Bool)arg1;
- (void)onBodySizeChange:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (id)getStore;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (void)onCheckSumFail:(id)arg1;
- (void)onCreateLitePageViewFinish:(const void *)arg1;
- (void)onShowPageTimeStamp:(unsigned long long)arg1;
- (void)navigateBackAndReloadDebug:(id)arg1 appUuid:(unsigned int)arg2 pageNum:(int)arg3 qrcodeDebugQuery:(id)arg4;
- (void)showPage:(const void *)arg1;
- (_Bool)isHalfScreen;
- (id)getViewController;
- (void)onVolumeDidChangeAfterIOS15:(id)arg1;
- (void)onVolumeDidChangeBeforeIOS15:(id)arg1;
- (void)lowPowerModeDidChange:(id)arg1;
- (void)batteryLevelDidChange:(id)arg1;
- (void)orientationDidChange:(id)arg1;
- (void)handleVideoPlayerFullScreen:(id)arg1;
- (void)SystemFontSizeChanged:(id)arg1;
- (void)boldTextStatusChanged:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)dataReportStartLiteAppTimeLine;
- (id)getCurrentVC;
- (double)statusBarHeight;
- (void)setHomeIndicatorAutoHidden:(_Bool)arg1;
- (void)setPageOrientation:(int)arg1 landScapeOrientation:(unsigned long long)arg2;
- (void)setFlags:(int)arg1;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)setupChannelMethod;
- (void)initParams:(const void *)arg1;
- (void)removeBackgroundImage;
- (void)addBackgroundImage;
- (void)loadConfig;
- (void)registerObserver;
- (void)checkCoreText;
- (void)rightGestureEvent:(id)arg1;
- (void)setCanOverScroll:(_Bool)arg1;
- (void)navigateBackAnimated:(_Bool)arg1;
- (void)showLiteAppView;
- (void)disableScroll:(_Bool)arg1;
- (void)setContentOffset:(double)arg1;
- (void)destroyLiteAppWidget;
- (void)startLiteAppWidget;
- (id)initWithAppUuid:(unsigned int)arg1 flutterViewcontroller:(id)arg2 pluginApi:(id)arg3 engineId:(int)arg4 appId:(id)arg5 path:(id)arg6 page:(id)arg7 query:(id)arg8 signatureKey:(id)arg9 startReport:(id)arg10 reporter:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

