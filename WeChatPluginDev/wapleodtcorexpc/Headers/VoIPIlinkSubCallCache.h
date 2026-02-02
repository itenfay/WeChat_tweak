//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, ConfRecvInviteInfo, VoIPMtInviteMsg;

@interface VoIPIlinkSubCallCache : NSObject
{
    VoIPMtInviteMsg *_inviteMsg;
    CMessageWrap *_inviteMessageWrap;
    ConfRecvInviteInfo *_inviteInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ConfRecvInviteInfo *inviteInfo; // @synthesize inviteInfo=_inviteInfo;
@property(retain, nonatomic) CMessageWrap *inviteMessageWrap; // @synthesize inviteMessageWrap=_inviteMessageWrap;
@property(retain, nonatomic) VoIPMtInviteMsg *inviteMsg; // @synthesize inviteMsg=_inviteMsg;
- (id)description;
- (id)initWithInviteMsg:(id)arg1 messageWrap:(id)arg2;

@end

