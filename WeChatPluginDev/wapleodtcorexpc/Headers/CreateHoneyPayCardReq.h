//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CreateHoneyPayCardReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authToken; // @dynamic authToken;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cardType; // @dynamic cardType;
@property(nonatomic) unsigned long long creditLine; // @dynamic creditLine;
@property(nonatomic) _Bool isSignAgreement; // @dynamic isSignAgreement;
@property(retain, nonatomic) NSString *takeMessage; // @dynamic takeMessage;
@property(retain, nonatomic) NSString *userUsername; // @dynamic userUsername;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;

@end

