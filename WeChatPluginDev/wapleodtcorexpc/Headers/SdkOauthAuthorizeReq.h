//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface SdkOauthAuthorizeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *androidPackageName; // @dynamic androidPackageName;
@property(retain, nonatomic) NSString *androidSignature; // @dynamic androidSignature;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bundleid; // @dynamic bundleid;
@property(retain, nonatomic) NSData *faceVerifyResultBuffer; // @dynamic faceVerifyResultBuffer;
@property(retain, nonatomic) NSData *ilinkSpamBuffer; // @dynamic ilinkSpamBuffer;
@property(nonatomic) _Bool isoption1; // @dynamic isoption1;
@property(nonatomic) _Bool nonautomatic; // @dynamic nonautomatic;
@property(retain, nonatomic) NSString *opensdkBundleid; // @dynamic opensdkBundleid;
@property(retain, nonatomic) NSString *opensdkVersion; // @dynamic opensdkVersion;
@property(retain, nonatomic) NSString *scope; // @dynamic scope;
@property(retain, nonatomic) NSString *sdkExtdata; // @dynamic sdkExtdata;
@property(retain, nonatomic) NSString *sdkToken; // @dynamic sdkToken;
@property(nonatomic) unsigned int sdkTokenChk; // @dynamic sdkTokenChk;
@property(retain, nonatomic) NSString *state; // @dynamic state;
@property(retain, nonatomic) NSString *universalLink; // @dynamic universalLink;

@end

