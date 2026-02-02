//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSMutableArray, NSString;

@interface SdkOauthAuthorizeConfirmReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) unsigned int avatarId; // @dynamic avatarId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bundleid; // @dynamic bundleid;
@property(retain, nonatomic) NSData *gamecenterBuffer; // @dynamic gamecenterBuffer;
@property(retain, nonatomic) NSData *ilinkSpamBuffer; // @dynamic ilinkSpamBuffer;
@property(nonatomic) _Bool isHaveGamecenterPage; // @dynamic isHaveGamecenterPage;
@property(nonatomic) _Bool isoption1; // @dynamic isoption1;
@property(retain, nonatomic) NSData *oauthContextBuffer; // @dynamic oauthContextBuffer;
@property(retain, nonatomic) NSString *opensdkBundleid; // @dynamic opensdkBundleid;
@property(retain, nonatomic) NSString *opensdkVersion; // @dynamic opensdkVersion;
@property(nonatomic) unsigned int opt; // @dynamic opt;
@property(retain, nonatomic) NSMutableArray *scope; // @dynamic scope;
@property(retain, nonatomic) NSString *sdkExtdata; // @dynamic sdkExtdata;
@property(retain, nonatomic) NSString *sdkToken; // @dynamic sdkToken;
@property(nonatomic) unsigned int sdkTokenChk; // @dynamic sdkTokenChk;
@property(retain, nonatomic) NSString *state; // @dynamic state;
@property(retain, nonatomic) NSString *universalLink; // @dynamic universalLink;

@end

