//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, WxaLocation;

@interface SearchWxaRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int begId; // @dynamic begId;
@property(nonatomic) _Bool isHomePage; // @dynamic isHomePage;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(nonatomic) unsigned long long scene; // @dynamic scene;
@property(nonatomic) unsigned long long searchId; // @dynamic searchId;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(retain, nonatomic) WxaLocation *wxaLocation; // @dynamic wxaLocation;

@end

