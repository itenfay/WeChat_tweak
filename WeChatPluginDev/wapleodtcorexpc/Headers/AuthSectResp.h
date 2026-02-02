//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ECDHKey, NSString, SKBuiltinBuffer_t, ShowStyleKey, WTLoginImgRespInfo, WxVerifyCodeRespInfo;

@interface AuthSectResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *a2Key; // @dynamic a2Key;
@property(retain, nonatomic) NSString *applyBetaUrl; // @dynamic applyBetaUrl;
@property(retain, nonatomic) NSString *authKey; // @dynamic authKey;
@property(nonatomic) unsigned int authResultFlag; // @dynamic authResultFlag;
@property(retain, nonatomic) NSString *authTicket; // @dynamic authTicket;
@property(retain, nonatomic) SKBuiltinBuffer_t *autoAuthKey; // @dynamic autoAuthKey;
@property(retain, nonatomic) SKBuiltinBuffer_t *cliDbencryptInfo; // @dynamic cliDbencryptInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *cliDbencryptKey; // @dynamic cliDbencryptKey;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientSessionKey; // @dynamic clientSessionKey;
@property(nonatomic) unsigned int ecdhControlFlag; // @dynamic ecdhControlFlag;
@property(retain, nonatomic) SKBuiltinBuffer_t *extEncryptKeySeries; // @dynamic extEncryptKeySeries;
@property(retain, nonatomic) NSString *fsurl; // @dynamic fsurl;
@property(nonatomic) unsigned int mmtlsControlBitFlag; // @dynamic mmtlsControlBitFlag;
@property(nonatomic) unsigned int newVersion; // @dynamic newVersion;
@property(retain, nonatomic) SKBuiltinBuffer_t *serverSessionKey; // @dynamic serverSessionKey;
@property(nonatomic) unsigned int serverTime; // @dynamic serverTime;
@property(retain, nonatomic) SKBuiltinBuffer_t *sessionKey; // @dynamic sessionKey;
@property(retain, nonatomic) ShowStyleKey *showStyle; // @dynamic showStyle;
@property(retain, nonatomic) ECDHKey *svrPubEcdhkey; // @dynamic svrPubEcdhkey;
@property(nonatomic) unsigned int uin; // @dynamic uin;
@property(nonatomic) unsigned int updateFlag; // @dynamic updateFlag;
@property(retain, nonatomic) WTLoginImgRespInfo *wtloginImgRespInfo; // @dynamic wtloginImgRespInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *wtloginRspBuff; // @dynamic wtloginRspBuff;
@property(nonatomic) unsigned int wtloginRspBuffFlag; // @dynamic wtloginRspBuffFlag;
@property(retain, nonatomic) WxVerifyCodeRespInfo *wxVerifyCodeRespInfo; // @dynamic wxVerifyCodeRespInfo;

@end

