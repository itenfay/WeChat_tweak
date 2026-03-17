//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, EcsAddressInfo, NSString;

@class WXPBGeneratedMessage;

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

