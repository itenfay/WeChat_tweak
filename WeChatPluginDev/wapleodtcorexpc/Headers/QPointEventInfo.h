//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QPointEventInfo
{
    NSString *_source;
    NSString *_eventName;
    NSString *_road;
    NSString *_detail;
    double _startTime;
    double _endTime;
    double _updateTime;
}

- (void).cxx_destruct;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *road; // @synthesize road=_road;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (id)description;

@end

