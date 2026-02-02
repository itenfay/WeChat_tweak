//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TXCDispatchQueue, TXCPixelBufferPool, TXCVideoDecodeConfig, TXCVideoFrame;
@protocol TXIVideoDecoderSupervisorInterface;

@interface TXCCustomVideoDecoder
{
    struct ITXLiteAVVideoDecoder *_decoder;
    struct unique_ptr<liteav::CustomDecodeCallback, std::default_delete<liteav::CustomDecodeCallback>> _decoderCallback;
    _Bool _isHevc;
    id <TXIVideoDecoderSupervisorInterface> supervisor;
    TXCDispatchQueue *_queue;
    TXCVideoDecodeConfig *_config;
    CDUnknownBlockType _complete;
    TXCVideoFrame *_originalFrame;
    TXCPixelBufferPool *_pool;
}

+ (int)convertFrameType:(int)arg1;
+ (void)copyData:(const char *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(int)arg3 dataStride:(unsigned long long)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) TXCPixelBufferPool *pool; // @synthesize pool=_pool;
@property(readonly, nonatomic) _Bool isHevc; // @synthesize isHevc=_isHevc;
@property(retain) TXCVideoFrame *originalFrame; // @synthesize originalFrame=_originalFrame;
@property(copy) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) TXCVideoDecodeConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <TXIVideoDecoderSupervisorInterface> supervisor; // @synthesize supervisor;
- (void)onDecodeData:(const struct DecodedDataS *)arg1 cost:(unsigned int)arg2;
- (void)releaseDecoder;
- (_Bool)createDecoder;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)resetDecoderOnComplete:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 isHevc:(_Bool)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

