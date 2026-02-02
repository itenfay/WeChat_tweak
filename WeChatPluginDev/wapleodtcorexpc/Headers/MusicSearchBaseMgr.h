//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SimpleAudioRecorder, UploadShakeMusicMgr;

@interface MusicSearchBaseMgr
{
    unsigned long long m_offsetBytes;
    _Bool m_bStopRecord;
    unsigned int m_curSessionId;
    SimpleAudioRecorder *m_recorder;
    UploadShakeMusicMgr *m_uploadMgr;
}

- (void).cxx_destruct;
- (void)onGetMusicItemFail:(int)arg1 sessionId:(unsigned int)arg2;
- (void)OnGetMusicFail:(int)arg1 SessionId:(unsigned int)arg2;
- (void)onGetMusicItemSuccess:(id)arg1 fpId:(unsigned int)arg2;
- (void)OnGetMusicItem:(id)arg1 FPId:(unsigned int)arg2;
- (void)onAudioBufferRecordEnd;
- (void)outputPeakPower:(float)arg1;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (double)simpleRateForBuffer;
- (unsigned int)channlesPerFrame;
- (unsigned int)framesPerPacket;
- (unsigned int)bitsPerChannel;
- (long long)recordTimeLimitInSecond;
- (_Bool)checkSearchEnvironmentIsValid;
- (_Bool)StopSearch:(unsigned int)arg1;
- (void)StartUploadMgr;
- (void)StartSearchInternal;
- (int)StartSearch;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

