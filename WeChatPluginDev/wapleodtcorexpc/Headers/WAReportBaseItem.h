//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WAReportItemParamChainModel;

@interface WAReportBaseItem
{
    _Bool _isEntrance;
    unsigned int _uiNetworkType;
    unsigned int _weakNetType;
    unsigned int _uiPublibVersion;
    unsigned int _appType;
    unsigned int _engineType;
    unsigned int _exptIOSUseByteCode;
    unsigned long long _scene;
    NSString *_sceneNote;
    NSString *_sessionId;
    NSString *_instanceId;
    NSString *_appid;
    NSString *_username;
    NSString *_nickname;
    unsigned long long _debugMode;
    long long _appVersion;
    unsigned long long _appstate;
    unsigned long long _usedstate;
    NSString *_pagePath;
    NSString *_query;
    NSString *_networkType;
    NSString *_strPublibVersion;
    unsigned long long _preScene;
    NSString *_preSceneNote;
    NSString *_referPagePath;
    NSMutableArray *_paramArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *paramArr; // @synthesize paramArr=_paramArr;
@property(nonatomic) unsigned int exptIOSUseByteCode; // @synthesize exptIOSUseByteCode=_exptIOSUseByteCode;
@property(nonatomic) unsigned int engineType; // @synthesize engineType=_engineType;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(nonatomic) _Bool isEntrance; // @synthesize isEntrance=_isEntrance;
@property(copy, nonatomic) NSString *referPagePath; // @synthesize referPagePath=_referPagePath;
@property(copy, nonatomic) NSString *preSceneNote; // @synthesize preSceneNote=_preSceneNote;
@property(nonatomic) unsigned long long preScene; // @synthesize preScene=_preScene;
@property(copy, nonatomic) NSString *strPublibVersion; // @synthesize strPublibVersion=_strPublibVersion;
@property(nonatomic) unsigned int uiPublibVersion; // @synthesize uiPublibVersion=_uiPublibVersion;
@property(nonatomic) unsigned int weakNetType; // @synthesize weakNetType=_weakNetType;
@property(nonatomic) unsigned int uiNetworkType; // @synthesize uiNetworkType=_uiNetworkType;
@property(copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned long long usedstate; // @synthesize usedstate=_usedstate;
@property(nonatomic) unsigned long long appstate; // @synthesize appstate=_appstate;
@property(nonatomic) long long appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned long long debugMode; // @synthesize debugMode=_debugMode;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)report;
@property(readonly, nonatomic) WAReportItemParamChainModel *param;
- (id)getJoinedParamStr;
- (void)appendInt:(int)arg1;
- (void)appendUInt64:(unsigned long long)arg1;
- (void)appendUInt32:(unsigned int)arg1;
- (void)appendString:(id)arg1;
- (void)startAppendParam;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

