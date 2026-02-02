//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAPageFlowObject, WAPageFlowSessionInfo;

@interface WAPageFlowAppInfo
{
    unsigned int _serviceAppType;
    unsigned int _preEntranceWebviewID;
    NSString *_username;
    NSString *_appid;
    unsigned long long _appState;
    unsigned long long _useState;
    WAPageFlowAppInfo *_preAppInfo;
    WAPageFlowSessionInfo *_preSessionInfo;
    WAPageFlowObject *_preAppPageInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int preEntranceWebviewID; // @synthesize preEntranceWebviewID=_preEntranceWebviewID;
@property(retain, nonatomic) WAPageFlowObject *preAppPageInfo; // @synthesize preAppPageInfo=_preAppPageInfo;
@property(retain, nonatomic) WAPageFlowSessionInfo *preSessionInfo; // @synthesize preSessionInfo=_preSessionInfo;
@property(retain, nonatomic) WAPageFlowAppInfo *preAppInfo; // @synthesize preAppInfo=_preAppInfo;
@property(nonatomic) unsigned int serviceAppType; // @synthesize serviceAppType=_serviceAppType;
@property(nonatomic) unsigned long long useState; // @synthesize useState=_useState;
@property(nonatomic) unsigned long long appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)updateWithUserName:(id)arg1 appid:(id)arg2 type:(unsigned int)arg3 serviceAppType:(unsigned int)arg4;

@end

