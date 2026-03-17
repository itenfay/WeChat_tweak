//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LiteAppBaseLibInfo, LiteAppGenWebViewParam, LiteAppInfo, LiteAppViewController, MMLiteAppReporter, NSDictionary, NSObject, NSString, UIViewController, WxaLiteAppStartReport;

@protocol LiteAppCallback <NSObject>
- (void)stopAllRecorder;
- (NSString *)callNativeRecorder:(NSString *)arg1 appUuid:(unsigned int)arg2 method:(NSString *)arg3 param:(NSString *)arg4;
- (void)onPreReleaseLiteApp:(NSString *)arg1 appUuid:(unsigned int)arg2 inJSThread:(_Bool)arg3;
- (void)onInitJsRuntime:(NSString *)arg1 appUuid:(unsigned int)arg2 context:(unsigned long long)arg3;
- (NSString *)getExpt:(NSString *)arg1 withDef:(NSString *)arg2;
- (_Bool)getExpt:(NSString *)arg1 withBoolDef:(_Bool)arg2;
- (_Bool)isUseCustomNavbar:(UIViewController *)arg1;
- (NSString *)getRegionInfo:(NSString *)arg1 param:(NSString *)arg2;
- (void)showRegionPicker;
- (NSString *)getFilePathByLocalId:(NSString *)arg1;
- (void)keyboardEnable:(_Bool)arg1;
- (void)navigateBackWhenHalfScreen:(LiteAppViewController *)arg1;
- (void)onShowStatusChange:(NSString *)arg1 page:(NSString *)arg2 appUuid:(unsigned long long)arg3 pageId:(unsigned long long)arg4 show:(_Bool)arg5;
- (void)removeForwardUser:(NSString *)arg1;
- (NSString *)getRecentForwardTitle:(NSString *)arg1;
- (NSString *)getRecentForwardItem:(NSString *)arg1;
- (UIViewController *)genWebViewControllerWithParams:(LiteAppGenWebViewParam *)arg1;
- (void)reloadDebug:(NSString *)arg1 qrcodeDebugQuery:(NSString *)arg2;
- (NSString *)checkAndGetLiteAppPath:(NSString *)arg1 checkUpdate:(_Bool)arg2 syncCheckUpdate:(_Bool)arg3;
- (LiteAppInfo *)getLiteAppInfo:(NSString *)arg1;
- (LiteAppBaseLibInfo *)getBaseLibInfo:(NSString *)arg1;
- (LiteAppBaseLibInfo *)getLatestBaseLibInfo;
- (NSString *)getOfflineResource:(NSString *)arg1 tag:(NSString *)arg2 url:(NSString *)arg3;
- (long long)getNet;
- (NSString *)getLiteAppCachePath;
- (NSString *)getLiteAppRootPath;
- (NSString *)getDModel;
- (NSString *)getUin;
- (NSString *)getCurSystemLanguage;
- (NSString *)getClientVersionStr;
- (unsigned int)getClientVersion;
- (void)onStoreSetData:(NSString *)arg1 changes:(NSDictionary *)arg2;
- (void)onStoreSendResult:(NSString *)arg1 callbackId:(int)arg2 resultType:(NSString *)arg3 result:(NSObject *)arg4;
- (void)dataReporting:(NSString *)arg1 data:(NSString *)arg2;
- (void)reportException:(NSDictionary *)arg1;
- (void)reportIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (void)reportKv:(unsigned int)arg1 value:(NSString *)arg2;
- (void)onCheckSumFail:(NSString *)arg1;
- (void)onCheckBaseLibSumFail:(NSString *)arg1;

@optional
- (MMLiteAppReporter *)liteAppWidgetGetReporter:(NSString *)arg1;
- (WxaLiteAppStartReport *)liteAppWidgetGetStartReport:(NSString *)arg1;
- (void)onLiteAppWidgetPrepared;
- (NSString *)getUserAlbums:(NSString *)arg1;
- (void)onDebugEventTriggered:(NSString *)arg1;
- (void)setIdleTimeDisableImpl:(_Bool)arg1;
- (void)onVideoPlay;
- (NSString *)getSystemInfoClientVersion;
- (void)onExitLiteApp:(NSString *)arg1;
- (void)onEnterLiteApp:(NSString *)arg1;
@end

