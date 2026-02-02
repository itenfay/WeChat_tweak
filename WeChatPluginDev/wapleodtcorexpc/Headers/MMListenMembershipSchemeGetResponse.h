//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenMembershipInfo, MMListenMembershipJoinInfo;

@interface MMListenMembershipSchemeGetResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MMListenMembershipJoinInfo *joinMembershipInfo; // @dynamic joinMembershipInfo;
@property(retain, nonatomic) MMListenMembershipInfo *membershipInfo; // @dynamic membershipInfo;

@end

