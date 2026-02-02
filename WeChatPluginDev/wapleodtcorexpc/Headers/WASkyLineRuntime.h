//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMContext, MMTimer, NSMutableArray, NSMutableDictionary, NSString, WANativeViewPlugin, WASkylineRuntimeInfo;
@protocol WASkylineRuntimeDelegate;

@interface WASkyLineRuntime : NSObject
{
    void *_runtimeShell;
    _Bool _isDestroyed;
    _Bool _isReady;
    id <WASkylineRuntimeDelegate> _delegate;
    WASkylineRuntimeInfo *_runtimeInfo;
    NSMutableDictionary *_skylineViewDic;
    NSMutableDictionary *_flutterVCDic;
    WANativeViewPlugin *_nativeViewPlugin;
    MMContext *_userContext;
    MMTimer *_timer;
    NSMutableArray *_pendingRouteBlock;
}

+ (void)onSkylineCppLog:(int)arg1 file:(const char *)arg2 line:(int)arg3 str:(const char *)arg4 strLen:(int)arg5;
+ (id)getVersionString;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingRouteBlock; // @synthesize pendingRouteBlock=_pendingRouteBlock;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMContext *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) WANativeViewPlugin *nativeViewPlugin; // @synthesize nativeViewPlugin=_nativeViewPlugin;
@property(retain, nonatomic) NSMutableDictionary *flutterVCDic; // @synthesize flutterVCDic=_flutterVCDic;
@property(retain, nonatomic) NSMutableDictionary *skylineViewDic; // @synthesize skylineViewDic=_skylineViewDic;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) WASkylineRuntimeInfo *runtimeInfo; // @synthesize runtimeInfo=_runtimeInfo;
@property(nonatomic) __weak id <WASkylineRuntimeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isDestroyed; // @synthesize isDestroyed=_isDestroyed;
- (_Bool)isJsc2Enabled;
- (void)handleNativeViewPointerEvent:(id)arg1;
- (void)onUpdateMapCustomCallout:(long long)arg1 markerId:(long long)arg2 anchorX:(double)arg3 anchorY:(double)arg4 alwaysDisplay:(_Bool)arg5 imgData:(id)arg6;
- (_Bool)nativeViewUseTexture:(id)arg1 nativeViewType:(id)arg2 extraData:(id)arg3;
- (void)onIDKeyReport:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (void)onKVReport:(unsigned int)arg1 content:(id)arg2;
- (void)onNotifyFirstFrame:(long long)arg1 pageId:(long long)arg2 totalSpan:(double)arg3;
- (void)onNotifyNavigateBackDone:(long long)arg1 pageId:(long long)arg2;
- (void)onNotifyNavigateBack:(long long)arg1 pageId:(long long)arg2;
- (void)onNotifyRouteDone:(long long)arg1 pageId:(long long)arg2;
- (void)onNotifyWindowDestroy:(long long)arg1;
- (void)onNotifyWindowReady:(long long)arg1;
- (void)onNotifyRuntimeReady;
- (void)writeTempFileAsync:(id)arg1 fileType:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)loadResourceAsync:(id)arg1 requestId:(int)arg2;
- (id)loadResourceSync:(id)arg1;
- (void)runServiceBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)runServiceBlock:(CDUnknownBlockType)arg1 atTime:(double)arg2;
- (void)runServiceBlock:(CDUnknownBlockType)arg1;
- (id)getSkylineViewByWindowId:(long long)arg1;
- (void)updateKeyboardHeight:(long long)arg1 widgetId:(long long)arg2 height:(double)arg3 duration:(double)arg4;
- (void)updateDarkMode:(_Bool)arg1 isDarkMode:(_Bool)arg2;
- (void)updateWindowViewport:(long long)arg1 size:(struct CGSize)arg2;
- (shared_ptr_d0a3146a)makePageConfig:(id)arg1;
- (void)notifySwitchTab:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyAutoReLaunch:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyReLaunch:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyAppLaunch:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyNavigateBack:(long long)arg1 pageId:(long long)arg2 calculatedDelta:(long long)arg3 animated:(_Bool)arg4 pageCfg:(id)arg5;
- (void)notifyRedirectTo:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyNavigateTo:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)sendRouteBlock:(CDUnknownBlockType)arg1;
- (long long)getRuntimeHolderPtr;
- (void)sendJsContext:(id)arg1;
- (void)sendUITaskRunner:(id)arg1;
- (void)destroyWindow:(id)arg1;
- (struct RuntimeDelegate *)runtimeDelegate;
- (void)destroyRuntimeHolder;
- (double)destroyRuntime;
- (void)createRuntime;
- (void)innerRunServiceBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (id)getNativeViewPlugin;
- (id)innerLoadResource:(id)arg1;
- (_Bool)waitWindowReady:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

