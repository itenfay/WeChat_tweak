//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTipsViewController, NSString, VoIPInvitationInfo, VoIPInvitationViewController;
@protocol VoIPInvitationViewInfo;

@interface VoIPInvitationService
{
    VoIPInvitationViewController *_viewController;
    VoIPInvitationInfo *_acceptedInvitationInfo;
    MMTipsViewController *_tipsViewController;
    CDUnknownBlockType _interrputBlock;
}

+ (_Bool)isSupportingMultiTalk;
+ (id)defaultService;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType interrputBlock; // @synthesize interrputBlock=_interrputBlock;
@property(retain, nonatomic) MMTipsViewController *tipsViewController; // @synthesize tipsViewController=_tipsViewController;
@property(retain, nonatomic) VoIPInvitationInfo *acceptedInvitationInfo; // @synthesize acceptedInvitationInfo=_acceptedInvitationInfo;
@property(retain, nonatomic) VoIPInvitationViewController *viewController; // @synthesize viewController=_viewController;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceInterruptionBegin;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isMonoServiceUIExist;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)multiTalkMgrDidClose;
- (void)UIManagerDidCloseCompletely;
- (void)voIPInvitationViewControllerDidClear:(id)arg1;
- (void)voIPInvitationViewControllerWillClear:(id)arg1;
- (void)voIPInvitationViewController:(id)arg1 didClickQuickReplyWithInfo:(id)arg2;
- (id)currentAppTopViewController;
- (void)voIPInvitationViewController:(id)arg1 didHangupWithInfo:(id)arg2 manually:(_Bool)arg3;
- (void)voIPInvitationViewController:(id)arg1 didAcceptWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 didClickWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 didScollOutWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 willScollOutWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 didScollInWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 willScollInWithInfo:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;
- (void)rejectIfNeedAnimation:(_Bool)arg1;
- (void)acceptInvitationWithInfo:(id)arg1 needCloseCamera:(_Bool)arg2;
- (void)acceptInvitationWithInfo:(id)arg1;
- (void)handleAccpetedInvitationInfoIfNeedWithneedCloseCamera:(_Bool)arg1;
- (void)handleAccpetedInvitationInfoIfNeed;
- (void)rejectInvitationWithInfo:(id)arg1;
@property(readonly, nonatomic) id <VoIPInvitationViewInfo> currentViewInfo;
- (void)scrollIn;
- (_Bool)handleCancelMonoMsg:(id)arg1;
- (_Bool)handleInviteMonoMsg:(id)arg1 withTalkingRoomID:(unsigned long long)arg2 talkingRoomKey:(unsigned long long)arg3;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

