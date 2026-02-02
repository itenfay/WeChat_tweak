//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSDate, NSMutableArray, NSMutableData;
@protocol UploadShakeMusicMgrDelegate;

@interface UploadShakeMusicMgr
{
    unsigned int m_inputId;
    NSMutableArray *m_uploadQueue;
    NSMutableData *m_audioBuffer;
    NSMutableArray *m_audioLengthQueue;
    int m_seq;
    int m_offsetTime;
    int m_offsetBytes;
    int m_eventType;
    double m_uploadInterval;
    int m_maxUploadBytesSize;
    unsigned long long m_lastSendTime;
    _Bool m_bUploading;
    id <UploadShakeMusicMgrDelegate> _delegate;
    unsigned long long _totalBytes;
    MMTimer *_checkUploadQueueTimer;
    NSDate *_waitingRespTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *waitingRespTime; // @synthesize waitingRespTime=_waitingRespTime;
@property(retain, nonatomic) MMTimer *checkUploadQueueTimer; // @synthesize checkUploadQueueTimer=_checkUploadQueueTimer;
@property(nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(nonatomic) __weak id <UploadShakeMusicMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doUpload:(id)arg1;
- (void)resetStauts;
- (_Bool)canSendData;
- (void)checkUploadQueue;
- (int)getSendAudioSize;
- (void)checkAudioBuffer;
- (void)addAudioBuffer:(id)arg1;
- (void)stop;
- (void)start:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

