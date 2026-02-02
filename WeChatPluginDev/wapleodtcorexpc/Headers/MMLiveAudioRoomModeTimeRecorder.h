//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveAudioRoomModeTimeRecorder : NSObject
{
    unsigned long long _radioSceneTime;
    unsigned long long _multiPlayerRoomSceneTime;
    unsigned long long _ktvSceneTime;
    unsigned long long _currentAudioRoomScene;
    unsigned long long _startRecordingTime;
}

@property(nonatomic) unsigned long long startRecordingTime; // @synthesize startRecordingTime=_startRecordingTime;
@property(nonatomic) unsigned long long currentAudioRoomScene; // @synthesize currentAudioRoomScene=_currentAudioRoomScene;
@property(nonatomic) unsigned long long ktvSceneTime; // @synthesize ktvSceneTime=_ktvSceneTime;
@property(nonatomic) unsigned long long multiPlayerRoomSceneTime; // @synthesize multiPlayerRoomSceneTime=_multiPlayerRoomSceneTime;
@property(nonatomic) unsigned long long radioSceneTime; // @synthesize radioSceneTime=_radioSceneTime;
- (void)checkAndUpdateTimeValues;
- (void)notifyAudioRoomSceneChangedTo:(unsigned long long)arg1;
- (void)updateTimeValueWithCurrentTime:(unsigned long long)arg1;

@end

