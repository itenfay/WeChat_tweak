//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface MMListenMembershipJoinRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adToken; // @dynamic adToken;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int joinType; // @dynamic joinType;
@property(retain, nonatomic) NSString *packageId; // @dynamic packageId;
@property(retain, nonatomic) NSData *subscriptionExtInfo; // @dynamic subscriptionExtInfo;

@end

