//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString, VoIPMtUserInfo;

@interface VoIPMtSendBannerMsgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *bannerMsg; // @dynamic bannerMsg;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) VoIPMtUserInfo *fromUser; // @dynamic fromUser;
@property(retain, nonatomic) NSString *wxGroupid; // @dynamic wxGroupid;

@end

