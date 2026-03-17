//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class AdChannelMsgHeader, BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface AdChannelMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *channel; // @dynamic channel;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) AdChannelMsgHeader *header; // @dynamic header;

@end

