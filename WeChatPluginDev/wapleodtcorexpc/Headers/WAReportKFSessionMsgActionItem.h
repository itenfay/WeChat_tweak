//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportKFSessionMsgActionItem
{
    unsigned int _eventTime;
    unsigned long long _eventID;
    NSString *_sceneID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(nonatomic) unsigned long long eventID; // @synthesize eventID=_eventID;
- (id)reportString;

@end

