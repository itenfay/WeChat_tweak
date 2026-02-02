//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAContactGetter;

@interface WAJSEventHandler_updateApp
{
    WAContactGetter *_contactGetter;
    unsigned int _latestVersion;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int latestVersion; // @synthesize latestVersion=_latestVersion;
- (void)endWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)markUpdateAppRunning:(_Bool)arg1;
- (_Bool)isUpdateAppRunning;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

