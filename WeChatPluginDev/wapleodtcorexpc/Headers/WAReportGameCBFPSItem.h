//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportGameCBFPSItem
{
    unsigned int _duration;
    unsigned int _useCommandBuffer;
    NSString *_appname;
    long long _drawCall;
    long long _time;
    long long _fps;
}

- (void).cxx_destruct;
@property(nonatomic) long long fps; // @synthesize fps=_fps;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long drawCall; // @synthesize drawCall=_drawCall;
@property(nonatomic) unsigned int useCommandBuffer; // @synthesize useCommandBuffer=_useCommandBuffer;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *appname; // @synthesize appname=_appname;
- (id)reportString;

@end

