//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FullBizChat, NSString;

@interface CreateBizChatInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *brandUserName; // @dynamic brandUserName;
@property(retain, nonatomic) FullBizChat *fullChat; // @dynamic fullChat;

@end

