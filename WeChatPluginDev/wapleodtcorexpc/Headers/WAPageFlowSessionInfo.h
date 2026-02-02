//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAPageFlowSessionInfo
{
    _Bool _isTriggerDownloaded;
    int _hostScene;
    NSString *_sessionId;
    unsigned long long _scene;
    NSString *_sceneNote;
    unsigned long long _preScene;
    NSString *_preSceneNote;
    unsigned long long _chatType;
    unsigned long long _codeScene;
    NSString *_referPageOfHomePage;
    unsigned long long _targetActionType;
    NSString *_targetActionNote;
    NSString *_referAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *referAction; // @synthesize referAction=_referAction;
@property(copy, nonatomic) NSString *targetActionNote; // @synthesize targetActionNote=_targetActionNote;
@property(nonatomic) unsigned long long targetActionType; // @synthesize targetActionType=_targetActionType;
@property(nonatomic) _Bool isTriggerDownloaded; // @synthesize isTriggerDownloaded=_isTriggerDownloaded;
@property(copy, nonatomic) NSString *referPageOfHomePage; // @synthesize referPageOfHomePage=_referPageOfHomePage;
@property(nonatomic) unsigned long long codeScene; // @synthesize codeScene=_codeScene;
@property(nonatomic) unsigned long long chatType; // @synthesize chatType=_chatType;
@property(nonatomic) int hostScene; // @synthesize hostScene=_hostScene;
@property(copy, nonatomic) NSString *preSceneNote; // @synthesize preSceneNote=_preSceneNote;
@property(nonatomic) unsigned long long preScene; // @synthesize preScene=_preScene;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)initWithSessionPrefix:(id)arg1 hostScene:(int)arg2;

@end

