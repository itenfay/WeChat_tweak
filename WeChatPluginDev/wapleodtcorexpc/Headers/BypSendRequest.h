//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, BypMsgPack;

@class WXPBGeneratedMessage;

@interface BypSendRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int bizType; // @dynamic bizType;
@property(retain, nonatomic) BypMsgPack *msgPack; // @dynamic msgPack;

@end

