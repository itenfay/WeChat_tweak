//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPlayerAdapterMgr
{
}

- (id)GetAppVersion;
- (id)GetExpt:(id)arg1 withDef:(id)arg2;
- (void)LogFeatureIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(_Bool)arg4;
- (void)WCPlayerCoreLog:(int)arg1 toMMFile:(_Bool)arg2 module:(const char *)arg3 file:(const char *)arg4 line:(int)arg5 funcName:(const char *)arg6 message:(id)arg7;
- (id)generateReporterWithPlayerScene:(unsigned long long)arg1;
- (_Bool)justUseSystemDownloader;
- (_Bool)openTPPlayerABTestWithScene:(unsigned long long)arg1;
- (_Bool)canUseTPPlayerWithPlayerScene:(unsigned long long)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

