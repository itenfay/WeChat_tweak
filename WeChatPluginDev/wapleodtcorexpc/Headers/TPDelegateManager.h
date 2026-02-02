//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source, TPDLProxyDelegate;

@interface TPDelegateManager : NSObject
{
    id <TPDLProxyDelegate> _proxyDelegate;
    NSLock *_playLock;
    NSLock *_proxyPlayLock;
    NSLock *_preloadLock;
    NSLock *_offlineLock;
    NSMutableDictionary *_mPlayDelegateMap;
    NSMutableDictionary *_mPreLoadDelegateMap;
    NSMutableDictionary *_mOfflineDownloadDelegateMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableDictionary *mOfflineDownloadDelegateMap; // @synthesize mOfflineDownloadDelegateMap=_mOfflineDownloadDelegateMap;
@property(retain, nonatomic) NSMutableDictionary *mPreLoadDelegateMap; // @synthesize mPreLoadDelegateMap=_mPreLoadDelegateMap;
@property(retain, nonatomic) NSMutableDictionary *mPlayDelegateMap; // @synthesize mPlayDelegateMap=_mPlayDelegateMap;
@property(retain, nonatomic) NSLock *offlineLock; // @synthesize offlineLock=_offlineLock;
@property(retain, nonatomic) NSLock *preloadLock; // @synthesize preloadLock=_preloadLock;
@property(retain, nonatomic) NSLock *proxyPlayLock; // @synthesize proxyPlayLock=_proxyPlayLock;
@property(retain, nonatomic) NSLock *playLock; // @synthesize playLock=_playLock;
@property(nonatomic) __weak id <TPDLProxyDelegate> proxyDelegate; // @synthesize proxyDelegate=_proxyDelegate;
- (void)dispatchUniversalMessageWithDelegate:(id)arg1 message:(long long)arg2 taskId:(int)arg3 param1:(id)arg4 param2:(id)arg5 param3:(id)arg6 param4:(id)arg7 param5:(id)arg8;
- (void)dispatchOfflineMessageWithDelegate:(id)arg1 message:(long long)arg2 taskId:(int)arg3 param1:(id)arg4 param2:(id)arg5 param3:(id)arg6 param4:(id)arg7 param5:(id)arg8;
- (void)dispatchPreloadMessageWithDelegate:(id)arg1 message:(long long)arg2 taskId:(int)arg3 param1:(id)arg4 param2:(id)arg5 param3:(id)arg6 param4:(id)arg7 param5:(id)arg8;
- (void)dispatchGeneralMessageWithDelegate:(id)arg1 message:(long long)arg2 taskId:(int)arg3 param1:(id)arg4 param2:(id)arg5 param3:(id)arg6 param4:(id)arg7 param5:(id)arg8;
- (void)dispatchPlayMessageWithDelegate:(id)arg1 message:(long long)arg2 taskId:(int)arg3 param1:(id)arg4 param2:(id)arg5 param3:(id)arg6 param4:(id)arg7 param5:(id)arg8;
- (void)dispatchCallbackMessage:(long long)arg1 taskId:(int)arg2 param1:(id)arg3 param2:(id)arg4 param3:(id)arg5 param4:(id)arg6 param5:(id)arg7;
- (void)reinit:(long long)arg1;
- (void)deinit;
- (void)handleCallbackMessage:(long long)arg1 taskId:(int)arg2 param1:(id)arg3 param2:(id)arg4 param3:(id)arg5 param4:(id)arg6 param5:(id)arg7;
- (id)getOfflineDelegateWithId:(int)arg1;
- (void)removeOfflineDelegateWithId:(int)arg1;
- (void)addOfflineDelegate:(id)arg1 downloadId:(int)arg2;
- (id)getPreLoadDelegateWithPreloadId:(int)arg1;
- (void)removePreLoadDelegateWithPreloadId:(int)arg1;
- (void)addPreLoadyDelegate:(id)arg1 preloadId:(int)arg2;
- (id)getPlayDelegateWithPlayId:(int)arg1;
- (void)removePlayDelegateWithPlayId:(int)arg1;
- (void)addPlayDelegate:(id)arg1 playId:(int)arg2;
- (void)initTimer;
- (id)init;

@end

