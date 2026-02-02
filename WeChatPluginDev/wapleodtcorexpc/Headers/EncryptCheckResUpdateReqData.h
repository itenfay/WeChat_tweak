//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class EncryptCheckResUpdateAesReqData, EncryptCheckResUpdateRsaReqData;

@class WXPBGeneratedMessage;

@interface EncryptCheckResUpdateReqData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) EncryptCheckResUpdateAesReqData *aesReqData; // @dynamic aesReqData;
@property(retain, nonatomic) EncryptCheckResUpdateRsaReqData *rsaReqData; // @dynamic rsaReqData;

@end

