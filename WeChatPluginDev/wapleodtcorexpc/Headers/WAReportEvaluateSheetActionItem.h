//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportEvaluateSheetActionItem
{
    unsigned int _eventTime;
    unsigned int _evaluateScore;
    unsigned long long _eventID;
    unsigned long long _result;
}

@property(nonatomic) unsigned long long result; // @synthesize result=_result;
@property(nonatomic) unsigned int evaluateScore; // @synthesize evaluateScore=_evaluateScore;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) unsigned long long eventID; // @synthesize eventID=_eventID;
- (id)reportString;

@end

