//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TXCDispatchQueue, TXCVideoEncodeConfig;
@protocol TXCVideoEncoderSupervisorDelegate;

@interface TXCVideoEncoderSupervisor : NSObject
{
    _Bool _isHardware;
    _Bool _isHevc;
    _Bool _supportsSoftware;
    _Bool _supportsHevc;
    _Bool _enablesHevc;
    _Bool _enablesRps;
    _Bool _hardwareHevcError;
    _Bool _hardwareError;
    _Bool _enablesRoi;
    int _strategy;
    TXCDispatchQueue *_queue;
    id <TXCVideoEncoderSupervisorDelegate> _delegate;
    TXCVideoEncodeConfig *_encodeConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enablesRoi; // @synthesize enablesRoi=_enablesRoi;
@property(readonly, nonatomic) TXCVideoEncodeConfig *encodeConfig; // @synthesize encodeConfig=_encodeConfig;
@property(nonatomic) _Bool hardwareError; // @synthesize hardwareError=_hardwareError;
@property(nonatomic) _Bool hardwareHevcError; // @synthesize hardwareHevcError=_hardwareHevcError;
@property(nonatomic) _Bool enablesRps; // @synthesize enablesRps=_enablesRps;
@property(nonatomic) _Bool enablesHevc; // @synthesize enablesHevc=_enablesHevc;
@property(nonatomic) int strategy; // @synthesize strategy=_strategy;
@property(readonly, nonatomic) _Bool supportsHevc; // @synthesize supportsHevc=_supportsHevc;
@property(readonly, nonatomic) _Bool supportsSoftware; // @synthesize supportsSoftware=_supportsSoftware;
@property(readonly, nonatomic) __weak id <TXCVideoEncoderSupervisorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool isHevc; // @synthesize isHevc=_isHevc;
@property(nonatomic) _Bool isHardware; // @synthesize isHardware=_isHardware;
- (_Bool)notifyUseHardware:(_Bool)arg1 isHevc:(_Bool)arg2;
- (_Bool)updateStrategy;
- (void)notifyError:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)enablesRoi:(_Bool)arg1;
- (void)setEncodeUsage:(int)arg1;
- (void)enablesRps:(_Bool)arg1;
- (void)enablesHevc:(_Bool)arg1;
- (void)preferStrategy:(int)arg1;
@property(readonly, nonatomic) int codecType;
@property(readonly, nonatomic) int encoderType;
- (id)initWithQueue:(id)arg1 supportsSoftware:(_Bool)arg2 supportsHevc:(_Bool)arg3 encodeConfig:(id)arg4 delegate:(id)arg5;

@end

