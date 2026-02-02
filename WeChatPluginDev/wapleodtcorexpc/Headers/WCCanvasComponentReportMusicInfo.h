//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCCanvasComponentReportMusicInfo
{
    unsigned int _musicDuration;
    unsigned int _playCount;
    unsigned int _playCompletedCount;
    unsigned int _maxPlayTime;
    unsigned long long _playedTime;
}

@property(nonatomic) unsigned int maxPlayTime; // @synthesize maxPlayTime=_maxPlayTime;
@property(nonatomic) unsigned long long playedTime; // @synthesize playedTime=_playedTime;
@property(nonatomic) unsigned int playCompletedCount; // @synthesize playCompletedCount=_playCompletedCount;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned int musicDuration; // @synthesize musicDuration=_musicDuration;
- (id)dictionaryRepresentation;

@end

