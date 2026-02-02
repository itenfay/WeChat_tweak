//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportAppTaskInterfereItem
{
    unsigned int _costTime;
    unsigned int _action;
    long long _startTimeStamp;
    long long _endTimeStamp;
}

@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(nonatomic) unsigned int costTime; // @synthesize costTime=_costTime;
@property(nonatomic) long long endTimeStamp; // @synthesize endTimeStamp=_endTimeStamp;
@property(nonatomic) long long startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
- (id)reportString;
- (int)reportID;

@end

