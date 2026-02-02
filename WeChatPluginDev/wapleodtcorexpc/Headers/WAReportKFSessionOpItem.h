//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportKFSessionOpItem
{
    unsigned int _actionTime;
    unsigned long long _enterScene;
    NSString *_sceneID;
    unsigned long long _action;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int actionTime; // @synthesize actionTime=_actionTime;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (id)reportString;

@end

