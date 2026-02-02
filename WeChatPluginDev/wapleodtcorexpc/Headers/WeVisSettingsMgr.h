//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WeVisEffectConfigResponse;

@interface WeVisSettingsMgr
{
    unsigned long long _lastMs;
    struct map<std::string, std::map<std::string, std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::map<std::string, std::string>>>> _paramsMap;
    struct map<WeEffect::APP_SCENARIO, std::string, std::less<WeEffect::APP_SCENARIO>, std::allocator<std::pair<const WeEffect::APP_SCENARIO, std::string>>> _scenarioType2Names;
    WeVisEffectConfigResponse *_localSettingInfo;
    NSString *_cgiSettingFilePath;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cgiSettingFilePath; // @synthesize cgiSettingFilePath=_cgiSettingFilePath;
@property(retain, nonatomic) WeVisEffectConfigResponse *localSettingInfo; // @synthesize localSettingInfo=_localSettingInfo;
- (_Bool)cgiEnable;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onServiceInit;
- (void *)getUpdateParamsMap:(int)arg1;
- (void)onCgiCompletion:(id)arg1 errCode:(unsigned int)arg2;
- (void)writeSettingsToPath:(id)arg1;
- (id)getCGIInfo;
- (void)loadRemoteInfo;
- (void)onServiceEnterForeground;
- (void)scheduleLoadRemoteInfo:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

