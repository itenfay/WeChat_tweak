//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RingToneMixPlayer, VoIPInvitationBreadthView, VoIPInvitationInfo;
@protocol VoIPInvitationViewControllerDelegate;

@interface VoIPInvitationViewController
{
    _Bool _isMultiTalking;
    _Bool _isRingPlayed;
    _Bool _shouldVibrate;
    id <VoIPInvitationViewControllerDelegate> _delegate;
    VoIPInvitationInfo *_info;
    VoIPInvitationBreadthView *_breadthView;
    unsigned long long _talkingRoomID;
    long long _talkingRoomKey;
    RingToneMixPlayer *_ringToneMixPlayer;
    CDUnknownBlockType _stopRingDispatchBlock;
    CDUnknownBlockType _inviteBreadthTimeoutBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldVibrate; // @synthesize shouldVibrate=_shouldVibrate;
@property(copy, nonatomic) CDUnknownBlockType inviteBreadthTimeoutBlock; // @synthesize inviteBreadthTimeoutBlock=_inviteBreadthTimeoutBlock;
@property(copy, nonatomic) CDUnknownBlockType stopRingDispatchBlock; // @synthesize stopRingDispatchBlock=_stopRingDispatchBlock;
@property(nonatomic) _Bool isRingPlayed; // @synthesize isRingPlayed=_isRingPlayed;
@property(retain, nonatomic) RingToneMixPlayer *ringToneMixPlayer; // @synthesize ringToneMixPlayer=_ringToneMixPlayer;
@property(nonatomic) _Bool isMultiTalking; // @synthesize isMultiTalking=_isMultiTalking;
@property(nonatomic) long long talkingRoomKey; // @synthesize talkingRoomKey=_talkingRoomKey;
@property(nonatomic) unsigned long long talkingRoomID; // @synthesize talkingRoomID=_talkingRoomID;
@property(retain, nonatomic) VoIPInvitationBreadthView *breadthView; // @synthesize breadthView=_breadthView;
@property(retain, nonatomic) VoIPInvitationInfo *info; // @synthesize info=_info;
@property(nonatomic) __weak id <VoIPInvitationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCarPlayVoIPReceiveTemplateClickAcceptWithNeedCloseCamera:(_Bool)arg1;
- (void)onCarPlayVoIPReceiveTemplateClickHangup;
- (void)applicationDidBecomeActive;
- (_Bool)canTouchWithPoint:(struct CGPoint)arg1 event:(id)arg2 fromView:(id)arg3;
- (void)voIPInvitationBreadthViewDidFullScreenHangup:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenMiniInAppClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidQuickReplyViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewHangup:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidSetupScene:(id)arg1;
- (void)voIPInvitationBreadthViewWillSetupScene:(id)arg1;
- (void)voIPInvitationBreadthViewDidInterceptScrollingOut:(id)arg1;
- (void)voIPInvitationBreadthViewDidScrollOut:(id)arg1 manually:(_Bool)arg2;
- (void)voIPInvitationBreadthViewWillScrollOut:(id)arg1 manually:(_Bool)arg2;
- (void)viewDidLoad;
- (void)vibrateClassicIfNeed;
- (void)dealloc;
- (void)clearInviteBreadthTimeoutBlock;
- (void)stopRing;
- (void)clearStopRingDispatchBlock;
- (void)loadBreadthView;
- (void)hangup;
- (void)hangupManually:(_Bool)arg1;
- (void)accept;
- (void)showInWindow;
- (void)restoreInviteScene;
- (void)clearIfNeedAnimation:(_Bool)arg1;
- (void)scrollIn;
- (id)initWithInfo:(id)arg1 talkingRoomID:(unsigned long long)arg2 talkingRoomKey:(long long)arg3 isMultiTalking:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

