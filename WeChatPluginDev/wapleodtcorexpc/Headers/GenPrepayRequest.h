//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionLocation, BaseRequest, NSString;

@interface GenPrepayRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionLocation *actionLocation; // @dynamic actionLocation;
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int channel; // @dynamic channel;
@property(retain, nonatomic) NSString *contactAppUsername; // @dynamic contactAppUsername;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *nonceStr; // @dynamic nonceStr;
@property(retain, nonatomic) NSString *package; // @dynamic package;
@property(retain, nonatomic) NSString *payCookies; // @dynamic payCookies;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sign; // @dynamic sign;
@property(retain, nonatomic) NSString *signType; // @dynamic signType;
@property(retain, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *webViewUrl; // @dynamic webViewUrl;
@property(nonatomic) int wxAppScene; // @dynamic wxAppScene;

@end

