//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TPVodReportInfo
{
    _Bool _hasSubtitles;
    long long _optimizedPlay;
    long long _bizId;
    long long _clipCount;
    long long _videoStatus;
    long long _currentPlayState;
}

@property(nonatomic) long long currentPlayState; // @synthesize currentPlayState=_currentPlayState;
@property(nonatomic) long long videoStatus; // @synthesize videoStatus=_videoStatus;
@property(nonatomic) long long clipCount; // @synthesize clipCount=_clipCount;
@property(nonatomic) long long bizId; // @synthesize bizId=_bizId;
@property(nonatomic) _Bool hasSubtitles; // @synthesize hasSubtitles=_hasSubtitles;
@property(nonatomic) long long optimizedPlay; // @synthesize optimizedPlay=_optimizedPlay;
- (long long)playType;

@end

