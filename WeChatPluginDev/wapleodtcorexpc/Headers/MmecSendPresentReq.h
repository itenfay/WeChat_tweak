//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, EcsAddressInfo, NSString;

@interface MmecSendPresentReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) EcsAddressInfo *addressInfo; // @dynamic addressInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long orderId; // @dynamic orderId;
@property(retain, nonatomic) NSString *receiveUserName; // @dynamic receiveUserName;
@property(retain, nonatomic) NSString *wishmessage; // @dynamic wishmessage;

@end

