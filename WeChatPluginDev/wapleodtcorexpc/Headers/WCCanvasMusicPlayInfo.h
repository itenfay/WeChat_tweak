//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicInfo, NSString, WCCanvasComponentItem, WCStatTimerHelper;

@interface WCCanvasMusicPlayInfo
{
    unsigned int _playCount;
    unsigned int _playCompletedCount;
    unsigned int _maxPlayTime;
    NSString *_musicId;
    MMMusicInfo *_musicInfo;
    long long _playState;
    double _defaultDuration;
    double _duration;
    double _currentTime;
    WCCanvasComponentItem *_musicComponentItem;
    unsigned long long _playedTime;
    WCStatTimerHelper *_playTimeHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStatTimerHelper *playTimeHelper; // @synthesize playTimeHelper=_playTimeHelper;
@property(nonatomic) unsigned int maxPlayTime; // @synthesize maxPlayTime=_maxPlayTime;
@property(nonatomic) unsigned long long playedTime; // @synthesize playedTime=_playedTime;
@property(nonatomic) unsigned int playCompletedCount; // @synthesize playCompletedCount=_playCompletedCount;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) WCCanvasComponentItem *musicComponentItem; // @synthesize musicComponentItem=_musicComponentItem;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double defaultDuration; // @synthesize defaultDuration=_defaultDuration;
@property(nonatomic) long long playState; // @synthesize playState=_playState;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
- (_Bool)isPlaying;
- (double)fetchDuration;
- (id)init;

@end

