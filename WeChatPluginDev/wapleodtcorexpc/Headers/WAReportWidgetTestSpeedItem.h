//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportWidgetTestSpeedItem
{
    unsigned int _eventId;
    unsigned int _eventResult;
    unsigned int _costTime;
    unsigned int _dataSize;
    unsigned int _downloadScene;
}

@property(nonatomic) unsigned int downloadScene; // @synthesize downloadScene=_downloadScene;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) unsigned int costTime; // @synthesize costTime=_costTime;
@property(nonatomic) unsigned int eventResult; // @synthesize eventResult=_eventResult;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;
- (id)reportString;
- (int)reportID;

@end

