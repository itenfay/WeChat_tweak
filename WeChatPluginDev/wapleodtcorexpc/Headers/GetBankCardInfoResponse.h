//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetBankCardInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *encryptBankCardId1; // @dynamic encryptBankCardId1;
@property(retain, nonatomic) NSString *encryptBankCardId2; // @dynamic encryptBankCardId2;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end

