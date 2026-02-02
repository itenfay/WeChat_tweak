//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, WxaExternalInfo;

@interface JSAuthorizeConfirmRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) WxaExternalInfo *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int opt; // @dynamic opt;
@property(nonatomic) _Bool privacyProtectInfoChecked; // @dynamic privacyProtectInfoChecked;
@property(retain, nonatomic) NSMutableArray *scope; // @dynamic scope;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

