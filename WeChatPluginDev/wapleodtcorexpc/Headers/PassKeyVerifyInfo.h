//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSData;

@class WXPBGeneratedMessage;

@interface PassKeyVerifyInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *clientDataJson; // @dynamic clientDataJson;
@property(retain, nonatomic) NSData *credentialId; // @dynamic credentialId;
@property(retain, nonatomic) NSData *passKeyUserId; // @dynamic passKeyUserId;
@property(retain, nonatomic) NSData *rawAuthenticatorData; // @dynamic rawAuthenticatorData;
@property(retain, nonatomic) NSData *sign; // @dynamic sign;

@end

