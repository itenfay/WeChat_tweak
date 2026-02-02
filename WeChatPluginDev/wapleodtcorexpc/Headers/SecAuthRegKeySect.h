//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class ECDHKey, SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface SecAuthRegKeySect : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int authResultFlag; // @dynamic authResultFlag;
@property(retain, nonatomic) SKBuiltinBuffer_t *autoAuthKey; // @dynamic autoAuthKey;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientSessionKey; // @dynamic clientSessionKey;
@property(retain, nonatomic) SKBuiltinBuffer_t *extEncryptKeySeries; // @dynamic extEncryptKeySeries;
@property(retain, nonatomic) SKBuiltinBuffer_t *serverSessionKey; // @dynamic serverSessionKey;
@property(retain, nonatomic) SKBuiltinBuffer_t *sessionKey; // @dynamic sessionKey;
@property(retain, nonatomic) ECDHKey *svrPubEcdhkey; // @dynamic svrPubEcdhkey;

@end

