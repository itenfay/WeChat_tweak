//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString;

@interface MMConfSDKAudioMgr : NSObject
{
    CDUnknownBlockType currentCallback;
    _Bool isMutePlay;
    NSRecursiveLock *mAudioPlayLock;
    int _voiceSampleRate;
    int _voiceChannels;
    int _voiceFrameDuation;
    int recordCount;
    int _failCount;
    _Bool _isCallbackedStartStatus;
    int _voicePlaySampleRate;
    int _voicePlayChannels;
    int _voicePlayFrameDuation;
    _Bool _hasSetPlayAndRecord;
    NSString *_subAppId;
}

- (void).cxx_destruct;
- (unsigned long long)getStartPlayTime;
- (unsigned long long)getStartRecordTime;
- (unsigned long long)getSuccRecordTime;
- (void)notifyAudioDeviceChange:(_Bool)arg1 isWirelessDevice:(_Bool)arg2 isWiredDevice:(_Bool)arg3;
- (void)HeadSetPlugin:(_Bool)arg1;
- (void)audioDeviceUnPluginHeadset:(id)arg1;
- (void)audioDevicePluginHeadset:(id)arg1;
- (int)getVoiceVolume;
- (int)getPlayCount;
- (int)getRecordCount;
- (_Bool)isConfSDKModel;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (void)__setAudioParam;
- (void)setAudioParam:(id)arg1;
- (void)startPlay:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (void)startRecord:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (void)setDefaultAudioParam;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)restartDeviceForFail;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceForceStop:(id)arg1;
- (void)callback:(int)arg1;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (void)setHandsFree:(_Bool)arg1;
- (_Bool)isRunning;
- (_Bool)setMuteRecord:(_Bool)arg1;
- (_Bool)setSubAppId:(id)arg1;
- (_Bool)setMutePlay:(_Bool)arg1;
- (_Bool)startVoIP:(_Bool)arg1 bluetooth:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)resumeVoIP:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
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

