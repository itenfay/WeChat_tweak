//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportInstallOrUpdateItem
{
    _Bool _isUseModule;
    unsigned int _eventID;
    unsigned int _eventResult;
    unsigned int _eventPercent;
    unsigned int _eventTime;
    long long _costTime;
}

@property(nonatomic) _Bool isUseModule; // @synthesize isUseModule=_isUseModule;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) long long costTime; // @synthesize costTime=_costTime;
@property(nonatomic) unsigned int eventPercent; // @synthesize eventPercent=_eventPercent;
@property(nonatomic) unsigned int eventResult; // @synthesize eventResult=_eventResult;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (id)reportString;

@end

