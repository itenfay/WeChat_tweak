//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface WecoinRealNameAuthRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int businessId; // @dynamic businessId;
@property(retain, nonatomic) NSString *reportSessionId; // @dynamic reportSessionId;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(retain, nonatomic) NSString *token; // @dynamic token;

@end

