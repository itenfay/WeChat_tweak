//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAPageFlowObject
{
    _Bool _isEntrance;
    _Bool _isReportBePoped;
    unsigned int _lastClickTimeStamp;
    NSString *_pagePath;
    NSString *_query;
    unsigned long long _lastBecomeForgroundTime;
    unsigned long long _stayTime;
    unsigned long long _costTime;
    unsigned long long _targetAction;
    NSString *_targetPagePath;
    NSString *_referPagePath;
    unsigned long long _stayTimeAtFunctionalPageEnterGame;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long stayTimeAtFunctionalPageEnterGame; // @synthesize stayTimeAtFunctionalPageEnterGame=_stayTimeAtFunctionalPageEnterGame;
@property(nonatomic) _Bool isReportBePoped; // @synthesize isReportBePoped=_isReportBePoped;
@property(nonatomic) _Bool isEntrance; // @synthesize isEntrance=_isEntrance;
@property(copy, nonatomic) NSString *referPagePath; // @synthesize referPagePath=_referPagePath;
@property(copy, nonatomic) NSString *targetPagePath; // @synthesize targetPagePath=_targetPagePath;
@property(nonatomic) unsigned long long targetAction; // @synthesize targetAction=_targetAction;
@property(nonatomic) unsigned int lastClickTimeStamp; // @synthesize lastClickTimeStamp=_lastClickTimeStamp;
@property(nonatomic) unsigned long long costTime; // @synthesize costTime=_costTime;
@property(nonatomic) unsigned long long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned long long lastBecomeForgroundTime; // @synthesize lastBecomeForgroundTime=_lastBecomeForgroundTime;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;

@end

