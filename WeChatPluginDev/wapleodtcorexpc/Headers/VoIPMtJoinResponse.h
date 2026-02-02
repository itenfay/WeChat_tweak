//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSString;

@interface VoIPMtJoinResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) NSData *ilink3RdappAuthCode; // @dynamic ilink3RdappAuthCode;
@property(retain, nonatomic) NSString *token; // @dynamic token;

@end

