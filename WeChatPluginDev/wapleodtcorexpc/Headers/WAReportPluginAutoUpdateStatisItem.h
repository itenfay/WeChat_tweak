//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportPluginAutoUpdateStatisItem
{
    NSString *_pluginAppid;
    long long _pluginVersion;
    long long _pluginState;
    long long _updateScene;
    long long _updateResult;
}

- (void).cxx_destruct;
@property(nonatomic) long long updateResult; // @synthesize updateResult=_updateResult;
@property(nonatomic) long long updateScene; // @synthesize updateScene=_updateScene;
@property(nonatomic) long long pluginState; // @synthesize pluginState=_pluginState;
@property(nonatomic) long long pluginVersion; // @synthesize pluginVersion=_pluginVersion;
@property(retain, nonatomic) NSString *pluginAppid; // @synthesize pluginAppid=_pluginAppid;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

// Remaining properties
@property(retain, nonatomic) NSString *instanceId;

@end

