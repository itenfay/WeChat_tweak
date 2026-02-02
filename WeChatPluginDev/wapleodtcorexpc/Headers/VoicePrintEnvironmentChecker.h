//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, VoicePrintMgr;

@interface VoicePrintEnvironmentChecker : NSObject
{
    _Bool _active;
    _Bool _finished;
    double _averageAudioPeak;
    VoicePrintMgr *_voicePrintManager;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) VoicePrintMgr *voicePrintManager; // @synthesize voicePrintManager=_voicePrintManager;
@property(nonatomic, getter=hasFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) double averageAudioPeak; // @synthesize averageAudioPeak=_averageAudioPeak;
- (void)OnEnviromentCheckModeLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)finishWithPassed:(_Bool)arg1;
- (void)check;
- (void)checkEnvironmentWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithManger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

