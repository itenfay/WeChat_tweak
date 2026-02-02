//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSMutableArray, NSString;

@interface GetMobileReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *business; // @dynamic business;
@property(retain, nonatomic) NSMutableArray *channelTokenList; // @dynamic channelTokenList;
@property(retain, nonatomic) NSMutableArray *clientIps; // @dynamic clientIps;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(nonatomic) unsigned int mobileType; // @dynamic mobileType;
@property(retain, nonatomic) NSString *msgid; // @dynamic msgid;
@property(retain, nonatomic) NSData *reqSpamInfo; // @dynamic reqSpamInfo;

@end

