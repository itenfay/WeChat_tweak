//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MBBuildConfig, MBPackageLogic, MagicBrushBiz, NSMutableDictionary, NSString;
@protocol IMBExtraInfoDelegate, IMBFileSystem, MBCommonAdapterDelegate;

@interface MBCommonAdapter : NSObject
{
    _Bool _isDebug;
    NSString *_mainScriptName;
    id <MBCommonAdapterDelegate> _delegate;
    id <IMBExtraInfoDelegate> _extraInfoDelegate;
    id <IMBFileSystem> _fs;
    MagicBrushBiz *_biz;
    MBBuildConfig *_config;
    MBPackageLogic *_pkgLogic;
    NSString *_packagePath;
    NSMutableDictionary *_handlerDict;
    NSMutableDictionary *_weAppPluginName2InstanceDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *weAppPluginName2InstanceDic; // @synthesize weAppPluginName2InstanceDic=_weAppPluginName2InstanceDic;
@property(retain, nonatomic) NSMutableDictionary *handlerDict; // @synthesize handlerDict=_handlerDict;
@property(retain, nonatomic) NSString *packagePath; // @synthesize packagePath=_packagePath;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(retain, nonatomic) MBPackageLogic *pkgLogic; // @synthesize pkgLogic=_pkgLogic;
@property(retain, nonatomic) MBBuildConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak MagicBrushBiz *biz; // @synthesize biz=_biz;
@property(nonatomic) __weak id <IMBFileSystem> fs; // @synthesize fs=_fs;
@property(nonatomic) __weak id <IMBExtraInfoDelegate> extraInfoDelegate; // @synthesize extraInfoDelegate=_extraInfoDelegate;
@property(nonatomic) __weak id <MBCommonAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *mainScriptName; // @synthesize mainScriptName=_mainScriptName;
- (void)removeNativeArrayBuffer:(int)arg1;
- (id)insertNativeArrayBufferWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (id)getArrayBuffer:(unsigned int)arg1;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (id)findTopVC;
- (void)sendViaAirDrop:(id)arg1;
- (id)getAudioFilePath:(id)arg1;
- (void)onLanguageChange;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (unsigned long long)servicePlugin_getEnvironmentType;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 webViewId:(unsigned int)arg3;
- (id)pluginScheduler;
- (_Bool)performOnService:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3;
- (void)invokeOnServiceThread:(CDUnknownBlockType)arg1;
- (id)instanceId;
- (void)initWASM:(id)arg1 mb:(id)arg2;
- (void)initGameEngine:(id)arg1 mb:(id)arg2;
- (id)getWeMediaApi;
- (id)getCurPubResLogic;
- (id)getAudioNative;
- (id)currentWebView;
- (id)context;
- (void)alterWillStop;
- (id)fixNoErrorCode:(id)arg1;
- (id)getEventHandler:(id)arg1;
- (id)sourceOpenSDKAppID;
- (void)createPluginInstanceIfNotExsist:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (unsigned long long)getEnvironmentType;
- (unsigned long long)getAppVersion;
- (unsigned int)getAppType;
- (unsigned int)getDebugModeType;
- (id)getCurrentPageQuery;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPagePath;
- (id)getLaunchPagePath;
- (unsigned long long)getLaunchScene;
- (id)getParentViewController;
- (id)getWAContact;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (id)getAppId;
- (void)onExtJsApiAdded:(id)arg1 name:(id)arg2 isSync:(_Bool)arg3;
- (void)invoke:(id)arg1 param:(id)arg2 callbackId:(unsigned long long)arg3 privateArgs:(id)arg4;
- (id)transformJsApiName:(id)arg1;
- (_Bool)abortTask:(id)arg1 taskID:(id)arg2 funcName:(id)arg3 error:(id *)arg4;
- (void)doNetWork:(id)arg1 taskID:(id)arg2 funcName:(id)arg3 url:(id)arg4 httpHeaders:(id)arg5 context:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 headerHandler:(CDUnknownBlockType)arg8 progressHandler:(CDUnknownBlockType)arg9;
- (id)genTaskId:(id)arg1;
- (id)removeLocalData:(id)arg1 otherBizName:(id)arg2 key:(id)arg3;
- (id)getLocalDataAllKeys:(id)arg1 otherBizName:(id)arg2;
- (id)clearLocalData:(id)arg1 otherBizName:(id)arg2;
- (id)getLocalDataSize:(id)arg1;
- (id)setLocalData:(id)arg1 otherBizName:(id)arg2 key:(id)arg3 data:(id)arg4 dataType:(id)arg5;
- (id)getLocalData:(id)arg1 otherBizName:(id)arg2 key:(id)arg3;
- (void)onDestroy:(int)arg1;
- (void)onPause;
- (id)createBuildConfig;
- (void)dealloc;
- (id)initWithBiz:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

