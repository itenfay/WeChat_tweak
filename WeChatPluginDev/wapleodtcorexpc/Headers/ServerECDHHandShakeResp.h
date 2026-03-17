//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSData, NSString;

@class WXPBGeneratedMessage;

@interface ServerECDHHandShakeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *ecdsaSignature; // @dynamic ecdsaSignature;
@property(retain, nonatomic) NSData *encryptPskInfo; // @dynamic encryptPskInfo;
@property(retain, nonatomic) NSData *server4DeviceEcdhPubKey; // @dynamic server4DeviceEcdhPubKey;
@property(retain, nonatomic) NSString *signaturePlainJson; // @dynamic signaturePlainJson;

@end

