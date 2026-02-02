//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBWebViewHelper : NSObject
{
}

+ (void)cleanAndDlWK:(CDUnknownBlockType)arg1;
+ (void)clearCachesCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)clearCookiesCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)URLCacheDidFetchCacheResponse:(id)arg1 forRequest:(id)arg2;
+ (void)setCustomUA:(id)arg1;
+ (void)downloadProzyInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (id)processCachedResponse:(id)arg1 forRequest:(id)arg2;
+ (_Bool)isQBWebViewRequest:(id)arg1;
+ (id)getVersion;
+ (void)checkInitialize;
+ (void)startProxyWithWorkerWithInitialize:(Class)arg1 initialize:(_Bool)arg2;
+ (void)startProxyWithWorker:(Class)arg1;
+ (void)willEnterForeground:(id)arg1;
+ (void)doEnterBackground:(id)arg1;
+ (void)checkApnAndGUID;
+ (void)updatePreferences;
+ (void)updateWhiteLists;
+ (id)serviceDic;
+ (void)asyncInitModules;
+ (void)doInSubThread:(CDUnknownBlockType)arg1;
+ (void)excuteWupRequestIfNecessary;
+ (void)checkWupRequestWhenGUIDIsReady;
+ (void)checkUpdate;
+ (_Bool)isQQNetChangedON;
+ (void)initialize;

@end

