//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate;
@protocol EVADProcessorDelegate;

@interface EVADProcessor
{
    _Bool _hasSpeak;
    NSDate *m_dtLastChangeToSilence;
    struct AudioCoder *m_silkEncoder;
    _Bool _bCurrentDataNeed;
    _Bool _firstStartDetect;
    int _currentState;
    int _previousState;
    unsigned int _delayDataSize;
    id <EVADProcessorDelegate> _delegate;
    double _silenceTimeLimit;
    char *_delayData;
    void *_handle;
    struct circle_buffer _pcm_delay_buffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct circle_buffer pcm_delay_buffer; // @synthesize pcm_delay_buffer=_pcm_delay_buffer;
@property(nonatomic) _Bool firstStartDetect; // @synthesize firstStartDetect=_firstStartDetect;
@property(nonatomic) void *handle; // @synthesize handle=_handle;
@property(nonatomic) unsigned int delayDataSize; // @synthesize delayDataSize=_delayDataSize;
@property(nonatomic) char *delayData; // @synthesize delayData=_delayData;
@property(nonatomic) int previousState; // @synthesize previousState=_previousState;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(nonatomic) _Bool bCurrentDataNeed; // @synthesize bCurrentDataNeed=_bCurrentDataNeed;
@property(nonatomic) double silenceTimeLimit; // @synthesize silenceTimeLimit=_silenceTimeLimit;
@property(nonatomic) __weak id <EVADProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)releaseProcessor;
- (void)processSpxVoiceData:(id)arg1 queueItem:(id)arg2;
- (void)setupProcessor;
- (void)dealloc;
- (id)init;

@end

