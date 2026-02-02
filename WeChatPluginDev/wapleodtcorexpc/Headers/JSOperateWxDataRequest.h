//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString, WxaExternalInfo;

@interface JSOperateWxDataRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) unsigned int avatarId; // @dynamic avatarId;
@property(nonatomic) unsigned int avatarOpt; // @dynamic avatarOpt;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) WxaExternalInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *grantScope; // @dynamic grantScope;
@property(nonatomic) _Bool needPrivacyProtectInfo; // @dynamic needPrivacyProtectInfo;
@property(nonatomic) unsigned int opt; // @dynamic opt;
@property(nonatomic) _Bool privacyProtectInfoChecked; // @dynamic privacyProtectInfoChecked;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

