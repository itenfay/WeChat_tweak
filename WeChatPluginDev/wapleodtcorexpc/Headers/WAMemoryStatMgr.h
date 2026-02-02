//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WAMemoryStatMgr
{
    NSMutableDictionary *_appid2MemStatInfo;
    NSMutableDictionary *_appid2KillInfo;
}

- (void).cxx_destruct;
- (unsigned long long)getDeviceFreeMem;
- (long long)getProcessMemUsed;
- (void)reportWhenMemoryWarning:(unsigned int)arg1;
- (void)weappBeenKilled:(id)arg1 reason:(unsigned int)arg2;
- (void)weappEnterBackground:(id)arg1;
- (void)weappStartLaunch:(id)arg1 appVersion:(unsigned int)arg2 debugMode:(unsigned long long)arg3 isCache:(_Bool)arg4;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

