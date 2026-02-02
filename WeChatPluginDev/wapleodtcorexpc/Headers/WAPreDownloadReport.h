//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAPreDownloadReport
{
    NSString *_appID;
    unsigned long long _appVersion;
    unsigned int _appType;
    unsigned int _appState;
    NSString *_instanceId;
    unsigned int _isPreload;
    _Bool _isDownloadedCode;
    unsigned int _scene;
    unsigned int _hasSplashScreen;
}

- (void).cxx_destruct;
- (void)reportPreDownloadStatus:(unsigned int)arg1 value:(unsigned int)arg2;
- (void)markEventTriggerDownload:(id)arg1;
- (void)init:(id)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

