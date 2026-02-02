//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface ReceiveChatroomMsgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *chatroomName; // @dynamic chatroomName;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

