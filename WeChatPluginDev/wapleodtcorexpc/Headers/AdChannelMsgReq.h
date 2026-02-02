//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AdChannelMsgHeader, BaseRequest, NSString;

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

