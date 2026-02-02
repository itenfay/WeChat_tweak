//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSString;

@interface GetPassKeyUserInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *passKeyUserId; // @dynamic passKeyUserId;
@property(retain, nonatomic) NSString *passKeyUserName; // @dynamic passKeyUserName;
@property(retain, nonatomic) NSString *verifyId; // @dynamic verifyId;

@end

