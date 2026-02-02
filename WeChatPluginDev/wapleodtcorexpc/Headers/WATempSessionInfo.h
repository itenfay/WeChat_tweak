//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WASessionContentSendMsgInfo;

@interface WATempSessionInfo
{
    _Bool _isInWeAppSheetMode;
    unsigned int _debugMode;
    unsigned int _weappVersion;
    NSString *_sessionFrom;
    NSString *_appId;
    NSString *_username;
    NSString *_relativePath;
    NSString *_businessUserName;
    NSString *_headimgUrl;
    NSString *_title;
    NSString *_subTitle;
    WASessionContentSendMsgInfo *_sendMsgInfo;
    unsigned long long _newScene;
    NSString *_sceneNote;
    NSString *_fromAppId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fromAppId; // @synthesize fromAppId=_fromAppId;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long newScene; // @synthesize newScene=_newScene;
@property(retain, nonatomic) WASessionContentSendMsgInfo *sendMsgInfo; // @synthesize sendMsgInfo=_sendMsgInfo;
@property(nonatomic) _Bool isInWeAppSheetMode; // @synthesize isInWeAppSheetMode=_isInWeAppSheetMode;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *headimgUrl; // @synthesize headimgUrl=_headimgUrl;
@property(retain, nonatomic) NSString *businessUserName; // @synthesize businessUserName=_businessUserName;
@property(retain, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(nonatomic) unsigned int weappVersion; // @synthesize weappVersion=_weappVersion;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *sessionFrom; // @synthesize sessionFrom=_sessionFrom;

@end

