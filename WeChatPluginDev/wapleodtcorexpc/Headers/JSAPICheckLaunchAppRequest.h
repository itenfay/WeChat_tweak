//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface JSAPICheckLaunchAppRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int alertType; // @dynamic alertType;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) unsigned int appmsgInnerType; // @dynamic appmsgInnerType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int contentType; // @dynamic contentType;
@property(retain, nonatomic) NSString *installSchemeUrl; // @dynamic installSchemeUrl;
@property(retain, nonatomic) NSString *launchappAppid; // @dynamic launchappAppid;
@property(retain, nonatomic) NSString *msgId; // @dynamic msgId;
@property(retain, nonatomic) NSString *msgUsername; // @dynamic msgUsername;
@property(nonatomic) unsigned int operateDirectly; // @dynamic operateDirectly;
@property(retain, nonatomic) NSString *packageName; // @dynamic packageName;
@property(nonatomic) unsigned int requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *schemeUrl; // @dynamic schemeUrl;
@property(nonatomic) unsigned int secCtrlMode; // @dynamic secCtrlMode;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSString *srcWebCompt; // @dynamic srcWebCompt;
@property(nonatomic) unsigned long long timespanFromTouchToLaunch; // @dynamic timespanFromTouchToLaunch;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(nonatomic) unsigned int userTouchActionFlag; // @dynamic userTouchActionFlag;
@property(nonatomic) unsigned int userTouchLocationX; // @dynamic userTouchLocationX;
@property(nonatomic) unsigned int userTouchLocationY; // @dynamic userTouchLocationY;

@end

