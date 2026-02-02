//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportDestopOpItem
{
    unsigned int _eventTime;
    unsigned long long _opActionType;
    unsigned long long _opScene;
}

@property(nonatomic) unsigned long long opScene; // @synthesize opScene=_opScene;
@property(nonatomic) unsigned long long opActionType; // @synthesize opActionType=_opActionType;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
- (id)reportString;

@end

