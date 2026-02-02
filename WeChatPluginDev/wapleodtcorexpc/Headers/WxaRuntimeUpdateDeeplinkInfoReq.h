//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface WxaRuntimeUpdateDeeplinkInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deeplinkTicket; // @dynamic deeplinkTicket;
@property(retain, nonatomic) NSData *respData; // @dynamic respData;
@property(nonatomic) unsigned int status; // @dynamic status;

@end

