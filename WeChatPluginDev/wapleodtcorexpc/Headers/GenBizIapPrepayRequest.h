//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GenBizIapPrepayRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *nonceStr; // @dynamic nonceStr;
@property(retain, nonatomic) NSString *package; // @dynamic package;
@property(retain, nonatomic) NSString *paySign; // @dynamic paySign;
@property(retain, nonatomic) NSString *signType; // @dynamic signType;
@property(retain, nonatomic) NSString *stepInUrl; // @dynamic stepInUrl;
@property(retain, nonatomic) NSString *timeStamp; // @dynamic timeStamp;

@end

