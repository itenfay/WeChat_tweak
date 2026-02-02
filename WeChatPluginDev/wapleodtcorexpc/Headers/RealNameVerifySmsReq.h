//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface RealNameVerifySmsReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *mobileArea; // @dynamic mobileArea;
@property(retain, nonatomic) NSString *mobileNo; // @dynamic mobileNo;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(retain, nonatomic) NSString *verifyCode; // @dynamic verifyCode;

@end

