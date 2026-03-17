//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveLocalAudioModeTimeRecorder : NSObject
{
    _Bool _isAudienceLocalAudioMode;
    unsigned long long _totalTime;
    unsigned long long _minimizeModeTime;
    unsigned long long _backgroundTime;
    unsigned long long _localAudioModeStartTime;
    unsigned long long _minimizeModeStartTime;
    unsigned long long _backgroundStartTime;
}

@property(nonatomic) unsigned long long backgroundStartTime; // @synthesize backgroundStartTime=_backgroundStartTime;
@property(nonatomic) unsigned long long minimizeModeStartTime; // @synthesize minimizeModeStartTime=_minimizeModeStartTime;
@property(nonatomic) unsigned long long localAudioModeStartTime; // @synthesize localAudioModeStartTime=_localAudioModeStartTime;
@property(nonatomic) _Bool isAudienceLocalAudioMode; // @synthesize isAudienceLocalAudioMode=_isAudienceLocalAudioMode;
@property(nonatomic) unsigned long long backgroundTime; // @synthesize backgroundTime=_backgroundTime;
@property(nonatomic) unsigned long long minimizeModeTime; // @synthesize minimizeModeTime=_minimizeModeTime;
@property(nonatomic) unsigned long long totalTime; // @synthesize totalTime=_totalTime;
- (void)checkAndUpdateTimeValues;
- (void)notifyMinimizeModeChangedTo:(_Bool)arg1;
- (void)notifyBackgroundStateChangedTo:(_Bool)arg1;
- (void)calculateAndClearTimeValuesWithCurrentTime:(unsigned long long)arg1;
- (void)resetTimeValuesWithCurrentTime:(unsigned long long)arg1;
- (void)updateIsAudienceLocalAudioMode:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long liveRoomTime;
- (void)onApplicationWillEnterForeground;
- (void)onApplicationDidEnterBackground;
- (void)dealloc;
- (id)init;

@end

