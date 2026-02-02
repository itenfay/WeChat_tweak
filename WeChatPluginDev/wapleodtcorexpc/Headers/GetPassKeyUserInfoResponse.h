//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSString;

@class WXPBGeneratedMessage;

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

