//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface ModifyHoneyPayerCreditLineReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authToken; // @dynamic authToken;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cardNo; // @dynamic cardNo;
@property(nonatomic) unsigned long long creditLine; // @dynamic creditLine;
@property(retain, nonatomic) NSString *takeMessage; // @dynamic takeMessage;

@end

