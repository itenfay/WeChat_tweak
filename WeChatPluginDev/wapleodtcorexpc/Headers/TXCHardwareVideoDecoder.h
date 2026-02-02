//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, TXCDispatchQueue, TXCHardwareVideoFrameSorter, TXCVideoDecodeConfig;
@protocol TXIVideoDecoderSupervisorInterface;

@interface TXCHardwareVideoDecoder
{
    _Bool _isHevc;
    id <TXIVideoDecoderSupervisorInterface> supervisor;
    TXCDispatchQueue *_queue;
    TXCVideoDecodeConfig *_config;
    TXCHardwareVideoFrameSorter *_frameSorter;
    struct OpaqueVTDecompressionSession *_session;
    struct opaqueCMFormatDescription *_formatDesc;
    NSMutableDictionary *_parameterSets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *parameterSets; // @synthesize parameterSets=_parameterSets;
@property(nonatomic) struct opaqueCMFormatDescription *formatDesc; // @synthesize formatDesc=_formatDesc;
@property(nonatomic) struct OpaqueVTDecompressionSession *session; // @synthesize session=_session;
@property(retain, nonatomic) TXCHardwareVideoFrameSorter *frameSorter; // @synthesize frameSorter=_frameSorter;
@property(readonly, nonatomic) TXCVideoDecodeConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool isHevc; // @synthesize isHevc=_isHevc;
@property(nonatomic) __weak id <TXIVideoDecoderSupervisorInterface> supervisor; // @synthesize supervisor;
- (void)onDecodeCallBack:(id)arg1 status:(int)arg2 infoFlags:(unsigned int)arg3 imageBuffer:(struct __CVBuffer *)arg4 startTime:(id)arg5 onComplete:(CDUnknownBlockType)arg6;
- (void)decodeEncodedFrame:(id)arg1 parsedNalus:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (unsigned long long)parseMaxNumRefFrames:(id)arg1 isHevc:(_Bool)arg2;
- (_Bool)createFormatDesc;
- (_Bool)updateParameterSets:(id)arg1;
- (void)releaseDecoder;
- (_Bool)createDecoderWithBitDeth:(long long)arg1 videoFullRangeFlag:(long long)arg2;
- (_Bool)checkToRecreateDecoder:(id)arg1 bitDeth:(long long)arg2 videoFullRangeFlag:(long long)arg3;
- (void)notifyError:(id)arg1 forFrame:(id)arg2 withComplete:(CDUnknownBlockType)arg3;
- (void)resetDecoderOnComplete:(CDUnknownBlockType)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 usingHevc:(_Bool)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

