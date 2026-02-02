//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SpeakTextLogicV2;
@protocol SpeakTextLogicControllerDelegate;

@interface SpeakTextLogicController : NSObject
{
    unsigned long long m_lastReceiveTimeMs;
    struct _NSRange m_lastReceiveRange;
    unsigned int m_lastReceiveCostTimeMs;
    id <SpeakTextLogicControllerDelegate> _delegate;
    NSString *_reportIdentifier;
    SpeakTextLogicV2 *_speakLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SpeakTextLogicV2 *speakLogic; // @synthesize speakLogic=_speakLogic;
@property(retain, nonatomic) NSString *reportIdentifier; // @synthesize reportIdentifier=_reportIdentifier;
@property(nonatomic) __weak id <SpeakTextLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)initSpeakTextLogic;
- (void)onSpeakFail;
- (void)onSpeakStop;
- (void)onSpeakLoading;
- (void)onSpeakStart:(struct _NSRange)arg1 costTimeMs:(unsigned int)arg2;
- (unsigned int)currentSpeakIndex;
- (_Bool)IsPlaying;
- (void)EndSpeak;
- (void)ResumeSpeak;
- (void)PauseSpeak;
- (_Bool)StartSpeakText:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

