//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportNavBackAlertItem
{
    long long _timestampOfDialog;
    long long _eventId;
    NSString *_eventNote;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *eventNote; // @synthesize eventNote=_eventNote;
@property(nonatomic) long long eventId; // @synthesize eventId=_eventId;
@property(nonatomic) long long timestampOfDialog; // @synthesize timestampOfDialog=_timestampOfDialog;
- (id)reportString;

@end

