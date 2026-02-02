//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface SilkAudioPlayer
{
    double m_smapleRate;
    _Bool _isNeedUnmuteLongVideoPlay;
    unsigned long long _launchTime;
    unsigned long long _launchCost;
    unsigned long long _receiveHandleOutputCost;
}

+ (unsigned int)calculateVoiceTime:(id)arg1;
@property(nonatomic) unsigned long long receiveHandleOutputCost; // @synthesize receiveHandleOutputCost=_receiveHandleOutputCost;
@property(nonatomic) unsigned long long launchCost; // @synthesize launchCost=_launchCost;
@property(nonatomic) unsigned long long launchTime; // @synthesize launchTime=_launchTime;
@property(nonatomic) _Bool isNeedUnmuteLongVideoPlay; // @synthesize isNeedUnmuteLongVideoPlay=_isNeedUnmuteLongVideoPlay;
- (_Bool)ifSilkAudioPlayerAgcOn;
- (void)prepareBuffers;
- (void)setSmapleRate:(double)arg1;
- (void)setDataFormat;
- (void)openSilkFile:(id)arg1;
- (void)checkQueueState:(float)arg1;
- (float)TimerCheckMeter;
- (void)updateStatus;
- (void)onReceiveHandleOutput;
- (void)autostop;
- (void)stop;
- (int)getCurrentTimeMs;
- (void)replay;
- (void)setProgress:(unsigned int)arg1;
- (void)playAtTime:(unsigned int)arg1;
- (void)setCurrentPacketWithTime:(unsigned int)arg1;
- (_Bool)preparePlayWithFile:(id)arg1 sync:(_Bool)arg2;
- (_Bool)preparePlayNotNotify;
- (void)dealloc;
- (id)init;

@end

