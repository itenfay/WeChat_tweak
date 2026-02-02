//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMStackReportConnection, NSArray, NSMutableDictionary, NSString;

@interface LiteAppCallbackImpl : NSObject
{
    NSMutableDictionary *_recorders;
    _Bool _isReporting;
    MMStackReportConnection *_reportConnection;
    unsigned long long _appLaunchTime;
    NSArray *_regionData;
    NSArray *_internationalCountries;
    NSString *_AlbumResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *AlbumResult; // @synthesize AlbumResult=_AlbumResult;
@property(retain, nonatomic) NSArray *internationalCountries; // @synthesize internationalCountries=_internationalCountries;
@property(retain, nonatomic) NSArray *regionData; // @synthesize regionData=_regionData;
@property unsigned long long appLaunchTime; // @synthesize appLaunchTime=_appLaunchTime;
@property(nonatomic) _Bool isReporting; // @synthesize isReporting=_isReporting;
@property(retain, nonatomic) MMStackReportConnection *reportConnection; // @synthesize reportConnection=_reportConnection;
- (id)liteAppWidgetGetReporter:(id)arg1;
- (id)liteAppWidgetGetStartReport:(id)arg1;
- (void)onLiteAppWidgetPrepared;
- (void)getAlbumsWithAuthError;
- (void)getAlbumsWithAuth:(id)arg1;
- (id)createImageLocalId:(id)arg1;
- (id)saveCoverFile:(id)arg1 fileName:(id)arg2;
- (id)getUserAlbums:(id)arg1;
- (void)OnGetAllFourthAddressStageData:(id)arg1 Error:(id)arg2;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)onDebugEventTriggered:(id)arg1;
- (void)onPreReleaseLiteApp:(id)arg1 appUuid:(unsigned int)arg2 inJSThread:(_Bool)arg3;
- (void)onInitJsRuntime:(id)arg1 appUuid:(unsigned int)arg2 context:(unsigned long long)arg3;
- (id)getExpt:(id)arg1 withDef:(id)arg2;
- (_Bool)getExpt:(id)arg1 withBoolDef:(_Bool)arg2;
- (_Bool)isUseCustomNavbar:(id)arg1;
- (void)onVideoPlay;
- (id)getRegionInfo:(id)arg1 param:(id)arg2;
- (void)showRegionPicker;
- (void)stopAllRecorder;
- (id)callNativeRecorder:(id)arg1 appUuid:(unsigned int)arg2 method:(id)arg3 param:(id)arg4;
- (id)getFilePathByLocalId:(id)arg1;
- (void)keyboardEnable:(_Bool)arg1;
- (void)navigateBackWhenHalfScreen:(id)arg1;
- (void)setIdleTimeDisableImpl:(_Bool)arg1;
- (void)reloadDebug:(id)arg1 qrcodeDebugQuery:(id)arg2;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)onShowStatusChange:(id)arg1 page:(id)arg2 appUuid:(unsigned int)arg3 pageId:(unsigned int)arg4 show:(_Bool)arg5;
- (void)removeForwardUser:(id)arg1;
- (id)getRecentForwardTitle:(id)arg1;
- (id)getRecentForwardItem:(id)arg1;
- (id)checkAndGetLiteAppPath:(id)arg1 checkUpdate:(_Bool)arg2 syncCheckUpdate:(_Bool)arg3;
- (id)genWebViewControllerWithParams:(id)arg1;
- (void)onExitLiteApp:(id)arg1;
- (id)getBaseLibInfo:(id)arg1;
- (id)getLatestBaseLibInfo;
- (id)getLiteAppInfo:(id)arg1;
- (id)getLiteAppRootPath;
- (id)getLiteAppCachePath;
- (id)getLiteAppDataPath;
- (id)getOfflineResource:(id)arg1 tag:(id)arg2 url:(id)arg3;
- (id)getDModel;
- (id)getUin;
- (id)getCurSystemLanguage;
- (long long)getNet;
- (id)getClientVersionStr;
- (unsigned int)getClientVersion;
- (void)reportStack:(id)arg1 error:(id)arg2 stackTrace:(id)arg3;
- (void)reportException:(id)arg1;
- (void)dataReporting:(id)arg1 data:(id)arg2;
- (void)reportIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (void)reportKv:(unsigned int)arg1 value:(id)arg2;
- (void)onCheckSumFail:(id)arg1;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

