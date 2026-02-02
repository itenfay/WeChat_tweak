//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class VoIPInvitationBreadthView;

@protocol VoIPInvitationBreadthViewDelegate <NSObject>
- (void)voIPInvitationBreadthViewDidFullScreenHangup:(VoIPInvitationBreadthView *)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenAccept:(VoIPInvitationBreadthView *)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenMiniInAppClick:(VoIPInvitationBreadthView *)arg1;
- (void)voIPInvitationBreadthViewDidQuickReplyViewClick:(VoIPInvitationBreadthView *)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewHangup:(VoIPInvitationBreadthView *)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewAccept:(VoIPInvitationBreadthView *)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewClick:(VoIPInvitationBreadthView *)arg1;
- (void)voIPInvitationBreadthViewDidInterceptScrollingOut:(VoIPInvitationBreadthView *)arg1;
- (void)voIPInvitationBreadthViewDidScrollOut:(VoIPInvitationBreadthView *)arg1 manually:(_Bool)arg2;
- (void)voIPInvitationBreadthViewWillScrollOut:(VoIPInvitationBreadthView *)arg1 manually:(_Bool)arg2;
- (void)voIPInvitationBreadthViewDidSetupScene:(VoIPInvitationBreadthView *)arg1;
- (void)voIPInvitationBreadthViewWillSetupScene:(VoIPInvitationBreadthView *)arg1;
@end

