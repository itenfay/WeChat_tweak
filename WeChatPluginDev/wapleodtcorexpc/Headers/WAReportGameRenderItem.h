//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportGameRenderItem
{
    int _canvasType;
    int _eventType;
    int _eventValue;
    long long _gameduration;
}

@property(nonatomic) long long gameduration; // @synthesize gameduration=_gameduration;
@property(nonatomic) int eventValue; // @synthesize eventValue=_eventValue;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) int canvasType; // @synthesize canvasType=_canvasType;
- (id)reportString;

@end

