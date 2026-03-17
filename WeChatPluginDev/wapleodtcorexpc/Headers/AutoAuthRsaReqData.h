//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class ECDHKey, SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface AutoAuthRsaReqData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *aesEncryptKey; // @dynamic aesEncryptKey;
@property(retain, nonatomic) ECDHKey *cliPubEcdhkey; // @dynamic cliPubEcdhkey;

@end

