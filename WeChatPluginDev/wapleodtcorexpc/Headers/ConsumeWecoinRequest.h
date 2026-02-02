//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface ConsumeWecoinRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *ctxBuff; // @dynamic ctxBuff;
@property(retain, nonatomic) NSString *reportSessionId; // @dynamic reportSessionId;
@property(retain, nonatomic) NSData *sign; // @dynamic sign;

@end

