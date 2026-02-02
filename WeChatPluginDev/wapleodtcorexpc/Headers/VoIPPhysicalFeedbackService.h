//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface VoIPPhysicalFeedbackService
{
    _Bool _isActived;
    _Bool _isVideoMode;
    _Bool _isReadyToLaunchTips;
    _Bool _isLaunchTips;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLaunchTips; // @synthesize isLaunchTips=_isLaunchTips;
@property(nonatomic) _Bool isReadyToLaunchTips; // @synthesize isReadyToLaunchTips=_isReadyToLaunchTips;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool isVideoMode; // @synthesize isVideoMode=_isVideoMode;
@property(nonatomic) _Bool isActived; // @synthesize isActived=_isActived;
- (void)voIPAudioServiceDidReceiveAudioUnitPlaybackCallbackFirst:(id)arg1;
- (void)voIPAudioServiceQuitCompulsivelyFromInterruption;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceInterruptionBegin;
- (id)init;
- (void)close;
- (void)openIfIsVideoMode:(_Bool)arg1;
- (void)reset;
- (void)completeAudioUnitOutputInitialization;
- (void)launchEnding;
- (void)launchTips;
- (void)playCloseSoundIfShouldBeLower:(_Bool)arg1;
- (void)playSoundWithFileName:(id)arg1 fileType:(id)arg2 volume:(float)arg3 ambient:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

