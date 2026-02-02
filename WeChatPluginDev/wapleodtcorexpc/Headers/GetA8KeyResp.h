//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, DeepLinkBitSet, GeneralControlBitSet, JSAPIPermissionBitSet, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetA8KeyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *a8Key; // @dynamic a8Key;
@property(nonatomic) unsigned int actionCode; // @dynamic actionCode;
@property(retain, nonatomic) NSString *antispamTicket; // @dynamic antispamTicket;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) SKBuiltinBuffer_t *cookie; // @dynamic cookie;
@property(retain, nonatomic) DeepLinkBitSet *deepLinkBitSet; // @dynamic deepLinkBitSet;
@property(retain, nonatomic) NSString *fullUrl; // @dynamic fullUrl;
@property(retain, nonatomic) GeneralControlBitSet *generalControlBitSet; // @dynamic generalControlBitSet;
@property(retain, nonatomic) NSString *headImg; // @dynamic headImg;
@property(retain, nonatomic) NSMutableArray *httpHeader; // @dynamic httpHeader;
@property(nonatomic) unsigned int httpHeaderCount; // @dynamic httpHeaderCount;
@property(retain, nonatomic) SKBuiltinBuffer_t *jsapicontrolBytes; // @dynamic jsapicontrolBytes;
@property(retain, nonatomic) JSAPIPermissionBitSet *jsapipermission; // @dynamic jsapipermission;
@property(retain, nonatomic) NSString *menuWording; // @dynamic menuWording;
@property(retain, nonatomic) NSString *mid; // @dynamic mid;
@property(nonatomic) unsigned int scopeCount; // @dynamic scopeCount;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;
@property(retain, nonatomic) NSString *shareUrl; // @dynamic shareUrl;
@property(retain, nonatomic) SKBuiltinBuffer_t *spamExtBuf; // @dynamic spamExtBuf;
@property(retain, nonatomic) NSString *ssid; // @dynamic ssid;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(retain, nonatomic) SKBuiltinBuffer_t *verifyPrefetchInfo; // @dynamic verifyPrefetchInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *webComponentInfo; // @dynamic webComponentInfo;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

