//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, ECDHKey, NSString, PubKeyInfo, SKBuiltinBuffer_t;

@interface NewRegRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adSource; // @dynamic adSource;
@property(retain, nonatomic) NSString *alias; // @dynamic alias;
@property(retain, nonatomic) NSString *androidId; // @dynamic androidId;
@property(retain, nonatomic) NSString *androidInstallRef; // @dynamic androidInstallRef;
@property(retain, nonatomic) NSString *appleIdTicket; // @dynamic appleIdTicket;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bindEmail; // @dynamic bindEmail;
@property(retain, nonatomic) NSString *bindMobile; // @dynamic bindMobile;
@property(nonatomic) unsigned int bindUin; // @dynamic bindUin;
@property(nonatomic) unsigned int bioSigCheckType; // @dynamic bioSigCheckType;
@property(retain, nonatomic) NSString *bioSigTicket; // @dynamic bioSigTicket;
@property(nonatomic) unsigned int builtinIpseq; // @dynamic builtinIpseq;
@property(retain, nonatomic) NSString *bundleId; // @dynamic bundleId;
@property(retain, nonatomic) ECDHKey *cliPubEcdhkey; // @dynamic cliPubEcdhkey;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientCheckData; // @dynamic clientCheckData;
@property(retain, nonatomic) NSString *clientFingerprint; // @dynamic clientFingerprint;
@property(retain, nonatomic) NSString *clientSeqId; // @dynamic clientSeqId;
@property(nonatomic) unsigned int dlsrc; // @dynamic dlsrc;
@property(retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo; // @dynamic extSpamInfo;
@property(nonatomic) unsigned int forceReg; // @dynamic forceReg;
@property(retain, nonatomic) NSString *googleAid; // @dynamic googleAid;
@property(nonatomic) unsigned int hasHeadImg; // @dynamic hasHeadImg;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSString *macAddr; // @dynamic macAddr;
@property(nonatomic) unsigned int mobileCheckType; // @dynamic mobileCheckType;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *privacyPolicyCountry; // @dynamic privacyPolicyCountry;
@property(retain, nonatomic) PubKeyInfo *pubKey; // @dynamic pubKey;
@property(retain, nonatomic) NSString *pwd; // @dynamic pwd;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey; // @dynamic randomEncryKey;
@property(retain, nonatomic) NSString *realCountry; // @dynamic realCountry;
@property(nonatomic) unsigned int regMode; // @dynamic regMode;
@property(retain, nonatomic) NSString *regSessionId; // @dynamic regSessionId;
@property(nonatomic) unsigned int suggestRet; // @dynamic suggestRet;
@property(retain, nonatomic) NSString *thirdAppAuthTicket; // @dynamic thirdAppAuthTicket;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(retain, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(retain, nonatomic) NSString *verifyContent; // @dynamic verifyContent;
@property(retain, nonatomic) NSString *verifySignature; // @dynamic verifySignature;

@end

