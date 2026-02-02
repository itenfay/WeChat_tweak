//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, VerifyUserSpamInfo;

@interface VerifyUserResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *antispamTicket; // @dynamic antispamTicket;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *ctx; // @dynamic ctx;
@property(retain, nonatomic) NSString *encryptUserName; // @dynamic encryptUserName;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(retain, nonatomic) VerifyUserSpamInfo *verifyUserSpamInfo; // @dynamic verifyUserSpamInfo;

@end

