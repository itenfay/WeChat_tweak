//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LaunchImage, NSMutableArray, NSMutableSet, NSString, PreEnterShowGlobalAlertStep;

@interface PreEnterWechatLogic : NSObject
{
    _Bool m_bCalledPreEnterWechatDone;
    _Bool m_bRunning;
    NSMutableArray *m_nsArrSteps;
    PreEnterShowGlobalAlertStep *m_GlobalAlert;
    LaunchImage *m_launchImage;
    _Bool m_hasShownPrivacy;
    _Bool m_hasShownWCOpenService;
    _Bool m_hasShowLimitedModeEntry;
    NSMutableSet *m_hasShownPolicyListSet;
    _Bool _hasCallLocalMsgText;
    NSMutableSet *_hasShownStepIdSet;
}

+ (void)LocalMsgTest;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *hasShownStepIdSet; // @synthesize hasShownStepIdSet=_hasShownStepIdSet;
@property(nonatomic) _Bool hasCallLocalMsgText; // @synthesize hasCallLocalMsgText=_hasCallLocalMsgText;
- (void)onNewSyncFinish;
- (void)onMainControllStart;
- (void)onGetUpdateInfoOk;
- (void)delayLoadAndCheck;
- (void)checkUpdateTabbarBadgeNum;
- (void)checkUpdateNewVersionTip:(_Bool)arg1;
- (void)preLoadContacts;
- (void)clearLaunchImages;
- (void)restoreContactDraft;
- (void)fixContactPlugin;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)callPreEnterWechatDone;
- (void)firstBecomeActive;
- (void)enterForeground;
- (void)checkTimeChange;
- (void)onTimeChange;
- (void)handleSuspend;
- (void)onPreEnterStepDone:(id)arg1;
- (void)setHasShownWithType:(id)arg1 stepId:(id)arg2;
- (_Bool)checkHasShownWithType:(id)arg1 stepId:(id)arg2;
- (void)dealloc;
- (void)checkStartSteps;
- (void)addStep:(id)arg1;
- (void)addStepIfNotExist:(id)arg1;
- (void)startSteps:(id)arg1 FromReg:(_Bool)arg2;
- (id)init;
- (void)goNext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

