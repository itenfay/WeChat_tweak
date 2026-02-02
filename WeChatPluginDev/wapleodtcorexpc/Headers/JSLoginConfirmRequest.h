//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, WxaExternalInfo;

@interface JSLoginConfirmRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) WxaExternalInfo *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int loginType; // @dynamic loginType;
@property(nonatomic) unsigned int opt; // @dynamic opt;
@property(retain, nonatomic) NSMutableArray *scope; // @dynamic scope;
@property(retain, nonatomic) NSString *state; // @dynamic state;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

