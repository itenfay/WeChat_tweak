//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionLocation, BaseRequest, NSString;

@interface CheckPayJsapiRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionLocation *actionLocation; // @dynamic actionLocation;
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int channelType; // @dynamic channelType;
@property(retain, nonatomic) NSString *commandWord; // @dynamic commandWord;
@property(nonatomic) unsigned int jsApiScene; // @dynamic jsApiScene;
@property(retain, nonatomic) NSString *nonceStr; // @dynamic nonceStr;
@property(retain, nonatomic) NSString *package; // @dynamic package;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSString *sign; // @dynamic sign;
@property(retain, nonatomic) NSString *signType; // @dynamic signType;
@property(nonatomic) int sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(retain, nonatomic) NSString *uuidForBindCard; // @dynamic uuidForBindCard;
@property(retain, nonatomic) NSString *webViewUrl; // @dynamic webViewUrl;

@end

