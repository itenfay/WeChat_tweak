//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportHomeButtonItem
{
    unsigned long long _eventTimestamp;
    unsigned long long _eventId;
}

@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;
@property(nonatomic) unsigned long long eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
- (id)reportString;
- (int)reportID;

@end

