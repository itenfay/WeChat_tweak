//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class VoIPInvitationInfo;

@protocol VoIPInvitationServiceExtension <NSObject>

@optional
- (void)voIPInvitationServiceDidRejectWithInfo:(VoIPInvitationInfo *)arg1;
- (void)voIPInvitationServiceWillAcceptWithInfo:(VoIPInvitationInfo *)arg1;
- (void)voIPInvitationServiceDidClear;
- (void)voIPInvitationServiceWillClear;
- (void)voIPInvitationServiceDidScrollOut;
- (void)voIPInvitationServiceWillScrollOut;
- (void)voIPInvitationServiceDidScrollIn;
- (void)voIPInvitationServiceWillScrollIn;
@end

