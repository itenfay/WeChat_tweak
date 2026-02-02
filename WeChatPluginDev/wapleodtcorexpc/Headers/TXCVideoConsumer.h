//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TXCDispatchQueue, TXCVideoDecodeConfig, TXCVideoDecodeReport, TXCVideoDecoderSupervisor, TXCVideoRenderConfig, TXCVideoRenderReport, TXCVideoResultHandler, TXCVideoStreamSnapshot;
@protocol TXIGlContext, TXILocalVideoRenderer, TXIVideoConsumerDelegate, TXIVideoDecoderInterface, TXIVideoRenderer;

@interface TXCVideoConsumer : NSObject
{
    _Bool _paused;
    _Bool _running;
    _Bool _enablesBackgroundDecoding;
    id <TXIVideoConsumerDelegate> _delegate;
    NSString *_tag;
    unsigned long long _currentRenderTimestamp;
    TXCDispatchQueue *_queue;
    TXCDispatchQueue *_decodeQueue;
    TXCVideoDecoderSupervisor *_supervisor;
    TXCVideoDecodeConfig *_decodeConfig;
    id <TXIVideoDecoderInterface> _decoder;
    TXCVideoDecodeReport *_decodeReport;
    id <TXIGlContext> _glContext;
    TXCVideoRenderConfig *_renderConfig;
    id <TXILocalVideoRenderer> _localRenderer;
    id <TXIVideoRenderer> _customRenderer;
    TXCVideoRenderReport *_renderReporter;
    TXCVideoStreamSnapshot *_streamSnapshot;
    TXCVideoResultHandler *_resultHandler;
    CDUnknownBlockType _inputLog;
    long long _lastTicks;
}

+ (void)setLogDelegate:(id)arg1;
+ (struct DecodeAbility)decodeAbility;
- (void).cxx_destruct;
@property(nonatomic) long long lastTicks; // @synthesize lastTicks=_lastTicks;
@property(readonly, copy, nonatomic) CDUnknownBlockType inputLog; // @synthesize inputLog=_inputLog;
@property(readonly, nonatomic) TXCVideoResultHandler *resultHandler; // @synthesize resultHandler=_resultHandler;
@property(retain, nonatomic) TXCVideoStreamSnapshot *streamSnapshot; // @synthesize streamSnapshot=_streamSnapshot;
@property(readonly, nonatomic) TXCVideoRenderReport *renderReporter; // @synthesize renderReporter=_renderReporter;
@property(retain, nonatomic) id <TXIVideoRenderer> customRenderer; // @synthesize customRenderer=_customRenderer;
@property(retain, nonatomic) id <TXILocalVideoRenderer> localRenderer; // @synthesize localRenderer=_localRenderer;
@property(readonly, nonatomic) TXCVideoRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(retain, nonatomic) id <TXIGlContext> glContext; // @synthesize glContext=_glContext;
@property _Bool enablesBackgroundDecoding; // @synthesize enablesBackgroundDecoding=_enablesBackgroundDecoding;
@property(readonly, nonatomic) TXCVideoDecodeReport *decodeReport; // @synthesize decodeReport=_decodeReport;
@property(retain, nonatomic) id <TXIVideoDecoderInterface> decoder; // @synthesize decoder=_decoder;
@property(readonly, nonatomic) TXCVideoDecodeConfig *decodeConfig; // @synthesize decodeConfig=_decodeConfig;
@property(readonly, nonatomic) TXCVideoDecoderSupervisor *supervisor; // @synthesize supervisor=_supervisor;
@property(readonly, nonatomic) TXCDispatchQueue *decodeQueue; // @synthesize decodeQueue=_decodeQueue;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property unsigned long long currentRenderTimestamp; // @synthesize currentRenderTimestamp=_currentRenderTimestamp;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property __weak id <TXIVideoConsumerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onRenderFirstFrameInView:(id)arg1;
- (void)onRenderFrame:(id)arg1 isFirst:(_Bool)arg2;
- (void)resultHandler:(id)arg1 didProcessVideoFrame:(id)arg2;
- (void)resultHandler:(id)arg1 onError:(id)arg2;
- (void)onDecodeFrame:(id)arg1 isFirst:(_Bool)arg2;
- (void)decodeSupervisorOnNotifyRecreate:(id)arg1;
- (void)onAppResignActive;
- (void)observeAppState;
- (void)logApi:(id)arg1;
- (void)createStreamSnapshotIfNeeded;
- (id)createRendererWithView:(id)arg1;
- (void)createDecoder;
- (void)setupStreamLine;
- (void)snapshotFromSource:(unsigned long long)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)enablesRenderUsingMetal:(_Bool)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)setFillMode:(unsigned long long)arg1;
- (void)setCustomRender:(id)arg1 pixelFormat:(unsigned long long)arg2 bufferType:(unsigned long long)arg3;
- (void)setRenderView:(id)arg1;
- (void)deliverFrame:(id)arg1;
- (int)getWritableState;
- (void)setRealTime:(_Bool)arg1;
- (void)enableCustomDecoder:(id)arg1;
- (void)enableBackgroundDecoding:(_Bool)arg1;
- (void)setDecoderStrategy:(int)arg1;
- (void)pause:(CDUnknownBlockType)arg1;
- (void)resume:(CDUnknownBlockType)arg1;
- (void)stop:(_Bool)arg1;
- (void)start;
- (void)dealloc;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

