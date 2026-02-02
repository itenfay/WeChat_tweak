//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, NSString, UIPanGestureRecognizer, VOIPVideoRender, VoIPInvitationBreadthInviteView, VoIPInvitationBreadthQuickReplyView, VoIPInvitationFullScreenView, VoIPInvitationInfo, XImageViewRenderer;
@protocol VoIPInvitationBreadthViewDelegate;

@interface VoIPInvitationBreadthView : UIView
{
    _Bool _disableVideoCapture;
    _Bool _isAccepted;
    _Bool _isScrollingOutDisable;
    _Bool _isInviteViewPaning;
    _Bool _wasInviteViewDraggedOverThreshold;
    _Bool _isQuickReplyViewDismissDelayBlockPaused;
    _Bool _isQuickReplyViewPaning;
    _Bool _wasQuickReplyViewDraggedOverThreshold;
    id <VoIPInvitationBreadthViewDelegate> _delegate;
    unsigned long long _scene;
    unsigned long long _lastScene;
    unsigned long long _animateStatus;
    VoIPInvitationInfo *_info;
    unsigned long long _layoutScene;
    VoIPInvitationBreadthInviteView *_inviteView;
    UIPanGestureRecognizer *_inviteViewPanGesture;
    double _inviteViewPanStartHeight;
    double _inviteViewContentLeftMargin;
    unsigned long long _inviteViewDragType;
    VoIPInvitationBreadthQuickReplyView *_quickReplyView;
    CDUnknownBlockType _quickReplyViewDismissBlock;
    CDUnknownBlockType _quickReplyViewDismissDelayinglyBlock;
    double _quickReplyViewDismissDelayinglySeconds;
    UIPanGestureRecognizer *_quickReplyViewPanGesture;
    double _quickReplyViewPanStartHeight;
    double _quickReplyViewContentLeftMargin;
    unsigned long long _quickReplyViewDragType;
    VoIPInvitationFullScreenView *_fullScreenView;
    CDUnknownBlockType _setupSceneThemSameUILayoutBlock;
    struct CGPoint _inviteViewLastPanPostion;
    struct CGPoint _inviteViewPanStartPos;
    struct CGPoint _quickReplyViewLastPanPostion;
    struct CGPoint _quickReplyViewPanStartPos;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType setupSceneThemSameUILayoutBlock; // @synthesize setupSceneThemSameUILayoutBlock=_setupSceneThemSameUILayoutBlock;
@property(retain, nonatomic) VoIPInvitationFullScreenView *fullScreenView; // @synthesize fullScreenView=_fullScreenView;
@property(nonatomic) _Bool wasQuickReplyViewDraggedOverThreshold; // @synthesize wasQuickReplyViewDraggedOverThreshold=_wasQuickReplyViewDraggedOverThreshold;
@property(nonatomic) _Bool isQuickReplyViewPaning; // @synthesize isQuickReplyViewPaning=_isQuickReplyViewPaning;
@property(nonatomic) unsigned long long quickReplyViewDragType; // @synthesize quickReplyViewDragType=_quickReplyViewDragType;
@property(nonatomic) double quickReplyViewContentLeftMargin; // @synthesize quickReplyViewContentLeftMargin=_quickReplyViewContentLeftMargin;
@property(nonatomic) double quickReplyViewPanStartHeight; // @synthesize quickReplyViewPanStartHeight=_quickReplyViewPanStartHeight;
@property(nonatomic) struct CGPoint quickReplyViewPanStartPos; // @synthesize quickReplyViewPanStartPos=_quickReplyViewPanStartPos;
@property(nonatomic) struct CGPoint quickReplyViewLastPanPostion; // @synthesize quickReplyViewLastPanPostion=_quickReplyViewLastPanPostion;
@property(retain, nonatomic) UIPanGestureRecognizer *quickReplyViewPanGesture; // @synthesize quickReplyViewPanGesture=_quickReplyViewPanGesture;
@property(nonatomic) _Bool isQuickReplyViewDismissDelayBlockPaused; // @synthesize isQuickReplyViewDismissDelayBlockPaused=_isQuickReplyViewDismissDelayBlockPaused;
@property(nonatomic) double quickReplyViewDismissDelayinglySeconds; // @synthesize quickReplyViewDismissDelayinglySeconds=_quickReplyViewDismissDelayinglySeconds;
@property(copy, nonatomic) CDUnknownBlockType quickReplyViewDismissDelayinglyBlock; // @synthesize quickReplyViewDismissDelayinglyBlock=_quickReplyViewDismissDelayinglyBlock;
@property(copy, nonatomic) CDUnknownBlockType quickReplyViewDismissBlock; // @synthesize quickReplyViewDismissBlock=_quickReplyViewDismissBlock;
@property(retain, nonatomic) VoIPInvitationBreadthQuickReplyView *quickReplyView; // @synthesize quickReplyView=_quickReplyView;
@property(nonatomic) _Bool wasInviteViewDraggedOverThreshold; // @synthesize wasInviteViewDraggedOverThreshold=_wasInviteViewDraggedOverThreshold;
@property(nonatomic) _Bool isInviteViewPaning; // @synthesize isInviteViewPaning=_isInviteViewPaning;
@property(nonatomic) unsigned long long inviteViewDragType; // @synthesize inviteViewDragType=_inviteViewDragType;
@property(nonatomic) double inviteViewContentLeftMargin; // @synthesize inviteViewContentLeftMargin=_inviteViewContentLeftMargin;
@property(nonatomic) double inviteViewPanStartHeight; // @synthesize inviteViewPanStartHeight=_inviteViewPanStartHeight;
@property(nonatomic) struct CGPoint inviteViewPanStartPos; // @synthesize inviteViewPanStartPos=_inviteViewPanStartPos;
@property(nonatomic) struct CGPoint inviteViewLastPanPostion; // @synthesize inviteViewLastPanPostion=_inviteViewLastPanPostion;
@property(retain, nonatomic) UIPanGestureRecognizer *inviteViewPanGesture; // @synthesize inviteViewPanGesture=_inviteViewPanGesture;
@property(retain, nonatomic) VoIPInvitationBreadthInviteView *inviteView; // @synthesize inviteView=_inviteView;
@property(nonatomic) unsigned long long layoutScene; // @synthesize layoutScene=_layoutScene;
@property(nonatomic) _Bool isScrollingOutDisable; // @synthesize isScrollingOutDisable=_isScrollingOutDisable;
@property(nonatomic) _Bool isAccepted; // @synthesize isAccepted=_isAccepted;
@property(nonatomic) _Bool disableVideoCapture; // @synthesize disableVideoCapture=_disableVideoCapture;
@property(retain, nonatomic) VoIPInvitationInfo *info; // @synthesize info=_info;
@property(nonatomic) unsigned long long animateStatus; // @synthesize animateStatus=_animateStatus;
@property(nonatomic) unsigned long long lastScene; // @synthesize lastScene=_lastScene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <VoIPInvitationBreadthViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeKVOForDescriptionLabel;
- (void)voIPInvitationFullScreenViewDidHangupButtonClick:(id)arg1;
- (void)voIPInvitationFullScreenViewDidAcceptButtonClick:(id)arg1;
- (void)voIPInvitationFullScreenViewDidMiniInAppButtonClick:(id)arg1;
- (void)voIPInvitationBreadthQuickReplyViewDidClick:(id)arg1;
- (void)voIPInvitationBreadthInviteViewDidHangup:(id)arg1;
- (void)voIPInvitationBreadthInviteViewDidAccept:(id)arg1;
- (void)voIPInvitationBreadthInviteViewDidClick:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)clearSetupSceneThemSameUILayoutBlock;
- (id)initWithFrame:(struct CGRect)arg1 info:(id)arg2;
- (void)scrollOutWithScene:(unsigned long long)arg1 manually:(_Bool)arg2;
- (_Bool)handleQuickReplyViewPanGesture:(id)arg1;
- (void)dismissQuickReplyViewAutomatically;
- (void)dismissQuickReplyView;
- (void)dismissQuickReplyViewAfterSeconds:(double)arg1 manually:(_Bool)arg2;
- (void)resumeQuickReplyViewDismissDelayBlock;
- (void)pauseQuickReplyViewDismissDelayBlock;
- (void)dismissQuickReplyViewWithBlock:(CDUnknownBlockType)arg1 afterSeconds:(double)arg2;
- (void)cancelQuickReplyViewTransforming;
- (void)layoutQuickReplyView;
- (_Bool)handleInviteViewPanGesture:(id)arg1;
- (void)layoutInviteView;
- (void)layoutFullScreenView;
- (void)setupSceneEnd;
- (void)setupSceneQuickReply;
- (void)setupSceneNone;
- (void)setupSceneInvite;
- (void)reset;
- (void)setupScene:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setupScene:(unsigned long long)arg1 shouldDelegate:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;
- (void)setupScene:(unsigned long long)arg1 shouldDelegate:(_Bool)arg2 shouldIgnoreDefaultAnimation:(_Bool)arg3 withDuration:(double)arg4 willBlock:(CDUnknownBlockType)arg5 otherAnimation:(CDUnknownBlockType)arg6 didBlock:(CDUnknownBlockType)arg7;
- (id)touchAreaView;
@property(readonly, nonatomic) XImageViewRenderer *rciLocalRender;
@property(readonly, nonatomic) VOIPVideoRender *videoRender;
- (void)setupQuickReplyCaptureImage:(id)arg1;
@property(readonly, nonatomic) UIView *currentQuickReplyView;
@property(readonly, nonatomic) CContact *contact;
@property(readonly, nonatomic) _Bool isVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

