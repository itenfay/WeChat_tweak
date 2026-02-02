//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest;

@interface GetPayFunctionSwitchListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int displayAllFlag; // @dynamic displayAllFlag;
@property(nonatomic) unsigned int funcType; // @dynamic funcType;
@property(nonatomic) unsigned int gridType; // @dynamic gridType;
@property(nonatomic) unsigned int tpaCountry; // @dynamic tpaCountry;

@end

