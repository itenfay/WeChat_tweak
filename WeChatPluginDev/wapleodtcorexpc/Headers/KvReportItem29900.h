//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem29900
{
    unsigned int _appState;
    unsigned int _isJitMode;
    unsigned int _duration;
    unsigned int _actionScene;
    unsigned int _actionResult;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int actionResult; // @synthesize actionResult=_actionResult;
@property(nonatomic) unsigned int actionScene; // @synthesize actionScene=_actionScene;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int isJitMode; // @synthesize isJitMode=_isJitMode;
@property(nonatomic) unsigned int appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

// Remaining properties
@property(nonatomic) unsigned int appType;
@property(nonatomic) unsigned int appVersion;
@property(copy, nonatomic) NSString *instanceId;

@end

