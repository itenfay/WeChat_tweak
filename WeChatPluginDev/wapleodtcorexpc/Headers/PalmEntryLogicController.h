//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FaceRecogAVRecorder, NSString, YTBizPalmRegister;
@protocol PalmEntryLogicControllerDelegate;

@interface PalmEntryLogicController : NSObject
{
    _Bool _isDectecting;
    _Bool _isRecording;
    _Bool _alreadyGetSuccessImage;
    unsigned int _beepSoundId;
    id <PalmEntryLogicControllerDelegate> _delegate;
    YTBizPalmRegister *_palmRegister;
    FaceRecogAVRecorder *_avRecorder;
    NSString *_sessionId;
    CDUnknownBlockType _m_getFaceRecordCallBack;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType m_getFaceRecordCallBack; // @synthesize m_getFaceRecordCallBack=_m_getFaceRecordCallBack;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool alreadyGetSuccessImage; // @synthesize alreadyGetSuccessImage=_alreadyGetSuccessImage;
@property(nonatomic) unsigned int beepSoundId; // @synthesize beepSoundId=_beepSoundId;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) _Bool isDectecting; // @synthesize isDectecting=_isDectecting;
@property(retain, nonatomic) FaceRecogAVRecorder *avRecorder; // @synthesize avRecorder=_avRecorder;
@property(retain, nonatomic) YTBizPalmRegister *palmRegister; // @synthesize palmRegister=_palmRegister;
@property(nonatomic) __weak id <PalmEntryLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopRecordAndSave:(CDUnknownBlockType)arg1;
- (void)playSuccessSound;
- (void)successShock;
- (void)startPalmRegisterSuccessFeedBack;
- (void)playDetectSound;
- (void)lightShock;
- (void)startFirstDetectPalmFeedBack;
- (void)startDetectPalm;
- (void)cancelRecordVideo;
- (void)stopRecordVideo;
- (void)startRecordVideo:(double)arg1 videoHeight:(double)arg2 sessionId:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)checkAuthoration:(CDUnknownBlockType)arg1;
- (id)wrapSdkResult:(id)arg1 videoPath:(id)arg2;
- (id)getPalmResult;
- (_Bool)setupPalmRegister;
- (_Bool)initPalmRegister;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

