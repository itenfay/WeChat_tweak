//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EVADProcessor, MJAudioFileManager, MJVocalAdjustmentCache, MJVoiceInputDenoiser, NSString, OMCAudioWaveformGenerator;
@protocol MJVoiceInputProcessorDelegate, OS_dispatch_queue;

@interface MJVoiceInputProcessor : NSObject
{
    _Bool _isProcessing;
    unsigned int _dataSliceLength;
    float _gain;
    unsigned int _processedSliceOffset;
    unsigned int _processedSliceIndex;
    unsigned int _inputDataLength;
    id <MJVoiceInputProcessorDelegate> _delegate;
    MJAudioFileManager *_audioFileManager;
    NSString *_processingIdentifier;
    NSString *_pcmFilePath;
    NSObject<OS_dispatch_queue> *_ioQueue;
    EVADProcessor *_evad;
    OMCAudioWaveformGenerator *_waveformGen;
    MJVocalAdjustmentCache *_vocalAdjustmentCache;
    unsigned long long _denoiseType;
    MJVoiceInputDenoiser *_denoiser;
}

+ (id)float32DataWithSInt16Data:(id)arg1;
+ (id)adjustVolumeForPCMData:(id)arg1 withGain:(float)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) MJVoiceInputDenoiser *denoiser; // @synthesize denoiser=_denoiser;
@property(nonatomic) unsigned long long denoiseType; // @synthesize denoiseType=_denoiseType;
@property(retain, nonatomic) MJVocalAdjustmentCache *vocalAdjustmentCache; // @synthesize vocalAdjustmentCache=_vocalAdjustmentCache;
@property(readonly, nonatomic) OMCAudioWaveformGenerator *waveformGen; // @synthesize waveformGen=_waveformGen;
@property(nonatomic) unsigned int inputDataLength; // @synthesize inputDataLength=_inputDataLength;
@property(retain, nonatomic) EVADProcessor *evad; // @synthesize evad=_evad;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSString *pcmFilePath; // @synthesize pcmFilePath=_pcmFilePath;
@property(nonatomic) _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
@property(nonatomic) unsigned int processedSliceIndex; // @synthesize processedSliceIndex=_processedSliceIndex;
@property(nonatomic) unsigned int processedSliceOffset; // @synthesize processedSliceOffset=_processedSliceOffset;
@property(retain, nonatomic) NSString *processingIdentifier; // @synthesize processingIdentifier=_processingIdentifier;
@property(readonly, nonatomic) MJAudioFileManager *audioFileManager; // @synthesize audioFileManager=_audioFileManager;
@property(nonatomic) float gain; // @synthesize gain=_gain;
@property(nonatomic) unsigned int dataSliceLength; // @synthesize dataSliceLength=_dataSliceLength;
@property(nonatomic) __weak id <MJVoiceInputProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyWaveformUpdateWithPCMData:(id)arg1;
- (void)onVADDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)onVADDetectSlienceToSpeaking:(long long)arg1 data:(id)arg2 HasSpeak:(_Bool)arg3;
- (void)stopProcessing;
- (void)appendProcessingData:(id)arg1;
- (void)startProcessingWithIdentifier:(id)arg1;
- (void)reset;
- (void)resetWithDataSliceLength:(unsigned int)arg1 gain:(float)arg2;
- (void)dealloc;
- (id)initWithAudioFileManager:(id)arg1 dataSliceLength:(unsigned int)arg2 gain:(float)arg3 vocalAdjustmentCache:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

