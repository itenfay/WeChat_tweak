//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, NSNetServiceBrowser, NSString;

@interface WAJSContextPlugin_mDNS
{
    int _serviceBrowserStatus;
    NSString *_serviceType;
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableArray *_serviceFoundList;
    CDUnknownBlockType _startCompleteBlock;
    CDUnknownBlockType _stopCompleteBlock;
    MMTimer *_timerForStartScan;
}

- (void).cxx_destruct;
- (void)sendJSEventToAppService:(id)arg1;
- (void)notifyServiceLostToJSCore:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceWillResolve:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)tryStopScan;
- (void)timeoutAfterServiceStartScan;
- (void)stopMdnsScan:(CDUnknownBlockType)arg1;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)startMdnsScan:(id)arg1 CompleteBlock:(CDUnknownBlockType)arg2;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
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

