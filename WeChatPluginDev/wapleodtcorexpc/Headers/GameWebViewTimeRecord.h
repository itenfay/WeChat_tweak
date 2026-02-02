//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GameWebViewTimeRecord
{
    unsigned long long _timeArray[5];
    unsigned long long _a8KeyStartTime;
    unsigned long long _a8KeyFinishTime;
    unsigned long long _preverifyStartTime;
    unsigned long long _preverifyFinishTime;
    unsigned long long _userClickToCreateTime;
    unsigned int _initTimestamp;
}

@property(readonly, nonatomic) unsigned int initTimestamp; // @synthesize initTimestamp=_initTimestamp;
- (unsigned int)calculateDurationWithEndTimeType:(unsigned long long)arg1;
- (unsigned int)getUserClickTime;
- (void)markUserClickTime:(unsigned long long)arg1;
- (unsigned long long)getTimeForType:(unsigned long long)arg1;
- (void)markTimeToCurrentForType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned int preverifyDuration;
- (void)markPreverifyFinishTimeToCurrent;
- (void)markPreverifyStartTimeToCurrent;
@property(readonly, nonatomic) unsigned int a8KeyDuration;
- (void)markA8KeyFinishTimeToCurrent;
- (void)markA8KeyStartTimeToCurrent;
@property(readonly, nonatomic) unsigned int renderDuration;
@property(readonly, nonatomic) unsigned int loadDuration;
@property(readonly, nonatomic) unsigned int idleDuration;
@property(readonly, nonatomic) unsigned int initDuration;

@end

