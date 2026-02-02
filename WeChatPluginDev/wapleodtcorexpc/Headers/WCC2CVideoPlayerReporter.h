//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, OrderedDictionary;

@interface WCC2CVideoPlayerReporter : NSObject
{
    _Bool _isPlaying;
    unsigned int _scene;
    unsigned int _totalTime;
    unsigned int _reportID;
    float _currentPlayRate;
    CMessageWrap *_msgWrap;
    unsigned long long _enterTimestamp;
    unsigned long long _lastRecordTimestamp;
    OrderedDictionary *_playRateDuration;
    unsigned long long _didPlayRealTime;
    unsigned long long _didPlayVideoTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long didPlayVideoTime; // @synthesize didPlayVideoTime=_didPlayVideoTime;
@property(nonatomic) unsigned long long didPlayRealTime; // @synthesize didPlayRealTime=_didPlayRealTime;
@property(retain, nonatomic) OrderedDictionary *playRateDuration; // @synthesize playRateDuration=_playRateDuration;
@property(nonatomic) unsigned long long lastRecordTimestamp; // @synthesize lastRecordTimestamp=_lastRecordTimestamp;
@property(nonatomic) unsigned long long enterTimestamp; // @synthesize enterTimestamp=_enterTimestamp;
@property(nonatomic) float currentPlayRate; // @synthesize currentPlayRate=_currentPlayRate;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) unsigned int reportID; // @synthesize reportID=_reportID;
@property(nonatomic) unsigned int totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)onLeaveVideoPlayerView;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onEnterVideoPlayerView;
- (void)onProgressBarDrag:(_Bool)arg1;
- (void)onPlayRateChangeFrom:(float)arg1 toRate:(float)arg2;
- (void)onControlAreaClicked:(_Bool)arg1;
- (void)onVideoAreaClicked:(_Bool)arg1;
- (id)commonReportInfo;
- (id)init;

@end

