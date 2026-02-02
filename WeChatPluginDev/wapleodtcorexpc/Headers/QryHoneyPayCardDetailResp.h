//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, RightCorner, TokeMess;

@interface QryHoneyPayCardDetailResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cardType; // @dynamic cardType;
@property(retain, nonatomic) NSString *cardTypeName; // @dynamic cardTypeName;
@property(nonatomic) unsigned long long creditLine; // @dynamic creditLine;
@property(retain, nonatomic) NSString *icon; // @dynamic icon;
@property(retain, nonatomic) NSString *payerUsername; // @dynamic payerUsername;
@property(nonatomic) unsigned long long remainCreditLine; // @dynamic remainCreditLine;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) RightCorner *rightCorner; // @dynamic rightCorner;
@property(retain, nonatomic) TokeMess *tokeMess; // @dynamic tokeMess;

@end

