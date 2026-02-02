//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface ConvertBizChatReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *corpId; // @dynamic corpId;
@property(retain, nonatomic) NSString *qychatId; // @dynamic qychatId;
@property(retain, nonatomic) NSString *qychatType; // @dynamic qychatType;

@end

