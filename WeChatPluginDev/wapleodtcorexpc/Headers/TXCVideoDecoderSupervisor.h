//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString, TXCDispatchQueue, TXCDroppableDispatcher;
@protocol TXIVideoDecodeSupervisorDelegate;

@interface TXCVideoDecoderSupervisor
{
    _Bool _usesHevc;
    _Bool _hasCustomDecoder;
    _Bool _isHardwareFailed;
    _Bool _isHardwareHevcFailed;
    _Bool _isSoftwareHevcFailed;
    int _strategy;
    id <TXIVideoDecodeSupervisorDelegate> _delegate;
    NSNumber *_isHardware;
    TXCDispatchQueue *_decodeQueue;
    TXCDroppableDispatcher *_outputDispatcher;
}

+ (_Bool)supportsSoftwareCodec;
+ (_Bool)supportsHevc;
- (void).cxx_destruct;
@property _Bool isSoftwareHevcFailed; // @synthesize isSoftwareHevcFailed=_isSoftwareHevcFailed;
@property _Bool isHardwareHevcFailed; // @synthesize isHardwareHevcFailed=_isHardwareHevcFailed;
@property(readonly, nonatomic) TXCDroppableDispatcher *outputDispatcher; // @synthesize outputDispatcher=_outputDispatcher;
@property(readonly, nonatomic) TXCDispatchQueue *decodeQueue; // @synthesize decodeQueue=_decodeQueue;
@property _Bool isHardwareFailed; // @synthesize isHardwareFailed=_isHardwareFailed;
@property _Bool hasCustomDecoder; // @synthesize hasCustomDecoder=_hasCustomDecoder;
@property int strategy; // @synthesize strategy=_strategy;
@property _Bool usesHevc; // @synthesize usesHevc=_usesHevc;
@property(retain) NSNumber *isHardware; // @synthesize isHardware=_isHardware;
@property(nonatomic) __weak id <TXIVideoDecodeSupervisorDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isHevcAvailableWithHardware:(_Bool)arg1;
- (_Bool)preferHevcWithHardware:(_Bool)arg1 error:(id *)arg2;
- (_Bool)forceHevcWithHardware:(_Bool)arg1 error:(id *)arg2;
- (id)switchToSoftwareAfterHardwareFailure:(id)arg1;
- (_Bool)filterUnchanged:(_Bool)arg1 isHardware:(_Bool)arg2;
- (_Bool)forceSoftware:(id *)arg1;
- (_Bool)forceHardware:(id *)arg1;
- (_Bool)forceHevc:(id *)arg1;
- (_Bool)updateStrategy:(id)arg1 error:(id *)arg2;
@property(readonly) long long cachedFrameCount;
@property(readonly) int decoderType;
- (void)reset;
- (id)notifyError:(id)arg1 withFrame:(id)arg2;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1 decodeQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

