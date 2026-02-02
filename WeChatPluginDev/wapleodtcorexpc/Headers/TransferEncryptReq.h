//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class TransferAesEncryptData, TransferRsaEncryptData;

@interface TransferEncryptReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TransferAesEncryptData *aesEncryptData; // @dynamic aesEncryptData;
@property(retain, nonatomic) TransferRsaEncryptData *rsaEncryptData; // @dynamic rsaEncryptData;

@end

