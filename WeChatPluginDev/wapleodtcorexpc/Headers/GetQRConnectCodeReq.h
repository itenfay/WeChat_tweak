//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetQRConnectCodeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bundleid; // @dynamic bundleid;
@property(retain, nonatomic) NSString *opensdkBundleid; // @dynamic opensdkBundleid;
@property(retain, nonatomic) NSString *opensdkVersion; // @dynamic opensdkVersion;
@property(retain, nonatomic) NSString *scope; // @dynamic scope;
@property(retain, nonatomic) NSString *sdkToken; // @dynamic sdkToken;
@property(nonatomic) unsigned int sdkTokenChk; // @dynamic sdkTokenChk;
@property(retain, nonatomic) NSString *state; // @dynamic state;
@property(retain, nonatomic) NSString *universalLink; // @dynamic universalLink;

@end

