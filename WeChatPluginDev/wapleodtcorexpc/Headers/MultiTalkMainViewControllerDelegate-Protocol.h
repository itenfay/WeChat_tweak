//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMConfSDKMemberMgr, NSArray, NSMutableDictionary, NSString, UIImage, UIView;

@protocol MultiTalkMainViewControllerDelegate <NSObject>

@optional
- (unsigned long long)getStartTalkingTime;
- (NSMutableDictionary *)getLowVersionMembers;
- (void)showToastOnMultiTalkVC:(NSString *)arg1;
- (_Bool)getIfThisTalkIlink;
- (void)onMultiTalkMainViewControllerViewDidAppear;
- (struct CGRect)onMultiTalkMainViewControllerRequestMinimizeFrame;
- (void)onMultiTalkMainViewControllerOpenCameraByInterrupt;
- (void)onMultiTalkMainViewControllerCloseCameraByInterrupt;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainViewControllerCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerCollapseAnimationDidEnd;
- (void)onMultiTalkMainViewControllerQuitAnimationDidEnd;
- (void)onMultiTalkMainViewControllerQuitAnimationWillStart;
- (void)onMultiTalkMainViewControllerResumeMultiTalkAudio;
- (void)onMultiTalkMainViewControllerHoldMultiTalkAudio;
- (_Bool)onMultiTalkMainViewControllerShouldBlockReceiveVideo;
- (_Bool)onMultiTalkMainViewControllerRequestLocalVideoDeviceStatus;
- (void)onMultiTalkMainViewControllerResubscribe;
- (void)onMultiTalkMainViewControllerRecoverVideoOn:(_Bool)arg1 screenStatus:(unsigned int)arg2;
- (void)onMultiTalkMainViewControllerCloseVideoSendAndRecv;
- (void)onMultiTalkMainViewControllerUpdateMessageWith:(MMConfSDKMemberMgr *)arg1 duration:(unsigned int)arg2 messageId:(unsigned int)arg3;
- (void)onMultiTalkMainViewControllerFlipCamera;
- (void)onMultiTalkMainViewControllerClickedCollapseButtonWithNotAnimation;
- (void)onMultiTalkMainViewControllerSlipToCollapse:(UIImage *)arg1;
- (void)onMultiTalkMainViewControllerClickedCollapseButton;
- (void)onMultiTalkMainViewControllerScreenSharingPresentationDidTransition;
- (void)onMultiTalkMainViewControllerScreenSharingPresentationWillTransition;
- (void)onMultiTalkMainViewControllerScreenSharingDidResume;
- (void)onMultiTalkMainViewControllerScreenSharingDidPause;
- (void)onMultiTalkMainViewControllerScreenSharingDidStop;
- (void)onMultiTalkMainViewControllerScreenSharingDidStartWithView:(UIView *)arg1;
- (void)onMultiTalkMainViewControllerVideoSelected:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerMicButtonSeclect:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerSpeakerButtonSeclect:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerReceiveCancelCall:(MMConfSDKMemberMgr *)arg1;
- (void)onMultiTalkMainViewControllerAddNewMemberArray:(NSArray *)arg1 withGroup:(id)arg2;
- (void)onMultiTalkMainViewControllerReceiveTimeOutWithGroup:(MMConfSDKMemberMgr *)arg1;
- (void)onMultiTalkMainViewControllerCancelJoinWithGroup:(MMConfSDKMemberMgr *)arg1;
- (void)onMultiTalkMainViewControllerRejectWithGroup:(MMConfSDKMemberMgr *)arg1;
- (void)onMultiTalkMainViewControllerAcceptWithGroup:(MMConfSDKMemberMgr *)arg1;
- (void)onMultiTalkMainViewControllerHangupWithGroup:(MMConfSDKMemberMgr *)arg1 isClickHangup:(_Bool)arg2 isNewIlink:(_Bool)arg3 isInviterQuitEarly:(_Bool)arg4;
@end

