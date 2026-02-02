//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, VoIPMtUserInfo;

@interface VoIPMtInviteRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *displayUserList; // @dynamic displayUserList;
@property(retain, nonatomic) VoIPMtUserInfo *fromUser; // @dynamic fromUser;
@property(retain, nonatomic) NSMutableArray *inviteUserList; // @dynamic inviteUserList;
@property(nonatomic) unsigned long long roomid; // @dynamic roomid;
@property(retain, nonatomic) NSString *sdkGroupid; // @dynamic sdkGroupid;
@property(retain, nonatomic) NSString *wxGroupid; // @dynamic wxGroupid;

@end

