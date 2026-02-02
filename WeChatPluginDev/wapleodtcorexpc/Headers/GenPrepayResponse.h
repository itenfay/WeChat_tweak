//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, WalletMixSpGenprepayResp;

@interface GenPrepayResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appSource; // @dynamic appSource;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSString *prepayId; // @dynamic prepayId;
@property(retain, nonatomic) WalletMixSpGenprepayResp *walletMixSpGenprepayResp; // @dynamic walletMixSpGenprepayResp;

@end

