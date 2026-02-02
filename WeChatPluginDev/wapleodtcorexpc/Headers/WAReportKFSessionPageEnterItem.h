//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportKFSessionPageEnterItem
{
    int _unreadcount;
    unsigned int _entryTime;
    unsigned long long _enterScene;
    NSString *_sceneID;
    unsigned long long _extendedEnterScene;
    NSString *_extendedEnterSceneNote;
    NSString *_fromAppId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fromAppId; // @synthesize fromAppId=_fromAppId;
@property(copy, nonatomic) NSString *extendedEnterSceneNote; // @synthesize extendedEnterSceneNote=_extendedEnterSceneNote;
@property(nonatomic) unsigned long long extendedEnterScene; // @synthesize extendedEnterScene=_extendedEnterScene;
@property(nonatomic) unsigned int entryTime; // @synthesize entryTime=_entryTime;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(nonatomic) int unreadcount; // @synthesize unreadcount=_unreadcount;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (id)reportString;

@end

