//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class VoIPInvitationInfo, VoIPInvitationViewController;

@protocol VoIPInvitationViewControllerDelegate <NSObject>
- (void)voIPInvitationViewControllerDidClear:(VoIPInvitationViewController *)arg1;
- (void)voIPInvitationViewControllerWillClear:(VoIPInvitationViewController *)arg1;
- (void)voIPInvitationViewController:(VoIPInvitationViewController *)arg1 didClickQuickReplyWithInfo:(VoIPInvitationInfo *)arg2;
- (void)voIPInvitationViewController:(VoIPInvitationViewController *)arg1 didHangupWithInfo:(VoIPInvitationInfo *)arg2 manually:(_Bool)arg3;
- (void)voIPInvitationViewController:(VoIPInvitationViewController *)arg1 didAcceptWithInfo:(VoIPInvitationInfo *)arg2;
- (void)voIPInvitationViewController:(VoIPInvitationViewController *)arg1 didClickWithInfo:(VoIPInvitationInfo *)arg2;
- (void)voIPInvitationViewController:(VoIPInvitationViewController *)arg1 didScollOutWithInfo:(VoIPInvitationInfo *)arg2;
- (void)voIPInvitationViewController:(VoIPInvitationViewController *)arg1 willScollOutWithInfo:(VoIPInvitationInfo *)arg2;
- (void)voIPInvitationViewController:(VoIPInvitationViewController *)arg1 didScollInWithInfo:(VoIPInvitationInfo *)arg2;
- (void)voIPInvitationViewController:(VoIPInvitationViewController *)arg1 willScollInWithInfo:(VoIPInvitationInfo *)arg2;
@end

