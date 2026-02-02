//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface JSAPIPreVerifyRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int entryScene; // @dynamic entryScene;
@property(retain, nonatomic) NSMutableArray *jsapiList; // @dynamic jsapiList;
@property(retain, nonatomic) NSString *noncestr; // @dynamic noncestr;
@property(nonatomic) unsigned int requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *signatureMethod; // @dynamic signatureMethod;
@property(retain, nonatomic) NSString *sourceAppid; // @dynamic sourceAppid;
@property(retain, nonatomic) NSMutableArray *tagnameList; // @dynamic tagnameList;
@property(retain, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

