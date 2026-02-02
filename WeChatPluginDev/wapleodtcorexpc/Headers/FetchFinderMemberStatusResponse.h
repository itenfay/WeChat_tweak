//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse;

@interface FetchFinderMemberStatusResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int isCancel; // @dynamic isCancel;
@property(nonatomic) unsigned long long leftDay; // @dynamic leftDay;
@property(nonatomic) unsigned int membershipStatus; // @dynamic membershipStatus;
@property(nonatomic) unsigned int subscriptionType; // @dynamic subscriptionType;
@property(nonatomic) unsigned long long validTime; // @dynamic validTime;
@property(nonatomic) unsigned int visitorMemberStatus; // @dynamic visitorMemberStatus;

@end

