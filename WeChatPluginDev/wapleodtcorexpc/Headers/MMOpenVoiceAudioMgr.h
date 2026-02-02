//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString;

@interface MMOpenVoiceAudioMgr : NSObject
{
    CDUnknownBlockType currentCallback;
    _Bool isMutePlay;
    _Bool isMuteRecord;
    _Bool isHandsFree;
    NSRecursiveLock *mAudioPlayLock;
    int _voiceSampleRate;
    int _voiceChannels;
    int _voiceFrameDuation;
    int _voicePlaySampleRate;
    int _voicePlayChannels;
    int _voicePlayFrameDuation;
    int recordCount;
    int _failCount;
    _Bool _isCallbackedStartStatus;
    char *pRecBuff;
    unsigned int silentDataLen;
}

- (void).cxx_destruct;
- (int)getVoiceVolume;
- (int)getPlayCount;
- (int)getRecordCount;
- (_Bool)isOpenVoiceModelRunning;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (void)setAudioParam:(id)arg1;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceForceStop:(id)arg1;
- (void)callback:(int)arg1;
- (void)mockSilentAudioDataWhenMuteMicroPhone;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (void)innerSetHandsFree:(_Bool)arg1;
- (void)setHandsFree:(_Bool)arg1;
- (_Bool)isRunning;
- (_Bool)setMuteRecord:(_Bool)arg1;
- (_Bool)setMutePlay:(_Bool)arg1;
- (void)restartAudioWithIsHandsFree:(_Bool)arg1;
- (void)startDeviceWithUseMicroPhone:(_Bool)arg1 permissionFailCallback:(CDUnknownBlockType)arg2;
- (_Bool)startVoIP:(_Bool)arg1 useRecorder:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)releaseAll;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

