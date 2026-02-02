//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface JSAPIModUseUserInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *jsapiName; // @dynamic jsapiName;
@property(nonatomic) unsigned int sceneType; // @dynamic sceneType;
@property(retain, nonatomic) NSString *scope; // @dynamic scope;
@property(nonatomic) unsigned int state; // @dynamic state;

@end

