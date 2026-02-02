//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface SubscribeNewGameRequest_V2 : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) _Bool hasEnableChatroom; // @dynamic hasEnableChatroom;
@property(retain, nonatomic) NSString *lang; // @dynamic lang;
@property(retain, nonatomic) NSString *noticeId; // @dynamic noticeId;

@end

