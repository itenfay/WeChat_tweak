//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AMRAudioRecorder, NSString, SPXAudioRecorder, SilkAudioRecorder;
@protocol FavAudioRecorderDelegate;

@interface FavAudioRecorder : NSObject
{
    AMRAudioRecorder *m_amrRecorder;
    SPXAudioRecorder *m_spxRecorder;
    SilkAudioRecorder *m_silkRecorder;
    unsigned int m_audioFormat;
    _Bool needStopInBackground;
    NSString *m_filePath;
    id <FavAudioRecorderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool needStopInBackground; // @synthesize needStopInBackground;
@property(retain, nonatomic) NSString *m_filePath; // @synthesize m_filePath;
- (void)handleInterruptionBy3rdApp;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)OnOutputPcmBuffer:(id)arg1 UserData:(id)arg2;
- (void)OnRecorderEndRecording:(id)arg1;
- (_Bool)OnRecorderPrepareSend:(id)arg1;
- (void)OnRecorderPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5 Duration:(unsigned int)arg6;
- (void)OnRecorderBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnRecorderLevelMeter:(id)arg1 Peak:(float)arg2;
- (id)getTmpAudioFileName:(unsigned int)arg1;
- (unsigned int)startSpxRecorder;
- (unsigned int)StartAmrRecorder;
- (unsigned int)startSilkRecorder;
- (unsigned int)StartRecord:(unsigned int)arg1;
- (void)stop;
- (_Bool)StopRecord;
- (void)resetRecordInBackground;
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

