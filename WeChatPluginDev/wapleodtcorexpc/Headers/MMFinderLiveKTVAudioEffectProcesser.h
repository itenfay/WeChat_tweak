//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableData;

@interface MMFinderLiveKTVAudioEffectProcesser
{
    _Bool _writeToNewBuffer;
    _Bool _isProcessedDataSizeChanged;
    int _processedDataSize;
    void *_processerHandler;
    NSMutableData *_processedData;
    struct __sFILE *_preProcessDumpFile;
    struct __sFILE *_proProcessDumpFile;
}

- (void).cxx_destruct;
@property(nonatomic) struct __sFILE *proProcessDumpFile; // @synthesize proProcessDumpFile=_proProcessDumpFile;
@property(nonatomic) struct __sFILE *preProcessDumpFile; // @synthesize preProcessDumpFile=_preProcessDumpFile;
@property(retain, nonatomic) NSMutableData *processedData; // @synthesize processedData=_processedData;
@property(nonatomic) _Bool isProcessedDataSizeChanged; // @synthesize isProcessedDataSizeChanged=_isProcessedDataSizeChanged;
@property(nonatomic) int processedDataSize; // @synthesize processedDataSize=_processedDataSize;
@property(nonatomic) _Bool writeToNewBuffer; // @synthesize writeToNewBuffer=_writeToNewBuffer;
@property(nonatomic) void *processerHandler; // @synthesize processerHandler=_processerHandler;
- (void)debug_dumpProProcessBuffer:(void *)arg1 length:(int)arg2;
- (void)debug_dumpPreProcessBuffer:(void *)arg1 length:(int)arg2;
- (void)closeProProcessDumpFile;
- (void)createProProcessDumpFile;
- (void)closePreProcessDumpFile;
- (void)createPreProcessDumpFile;
@property(readonly, nonatomic) _Bool debugDumpSwitch;
- (id)supportedReverbTypes;
- (_Bool)updateSettingParam:(id)arg1;
- (_Bool)process:(id)arg1;
- (_Bool)stopAudioProcesser;
- (_Bool)startAudioProcesser;
- (void)resizeProcessedDataIfNeed:(int)arg1;
- (int)getOutSampleSizeFromInSampleSize:(int)arg1 channelCnt:(int)arg2;
- (void)updateProcessedDataSize;
- (int)fxTypeForReverbType:(unsigned long long)arg1;
- (void)updateOptimizeReverbSetting;
- (void)freeProcesserHandler;
- (void)createProcesserHandler;
- (void)initDefaultDatas;
- (void)dealloc;

@end

