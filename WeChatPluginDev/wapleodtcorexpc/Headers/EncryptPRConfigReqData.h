//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class EncryptPRConfigAesReqData, EncryptPRConfigRsaReqData;

@class WXPBGeneratedMessage;

@interface EncryptPRConfigReqData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) EncryptPRConfigAesReqData *aesReqData; // @dynamic aesReqData;
@property(retain, nonatomic) EncryptPRConfigRsaReqData *rsaReqData; // @dynamic rsaReqData;

@end

