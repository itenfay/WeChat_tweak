//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface GetA8KeyLiteRespInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionCode; // @dynamic actionCode;
@property(nonatomic) unsigned int antiSpamBits; // @dynamic antiSpamBits;
@property(retain, nonatomic) NSString *antiSpamTicket; // @dynamic antiSpamTicket;
@property(nonatomic) unsigned int authBits; // @dynamic authBits;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int domainLevelInterval; // @dynamic domainLevelInterval;
@property(retain, nonatomic) NSString *headImg; // @dynamic headImg;
@property(retain, nonatomic) NSMutableArray *httpHeader; // @dynamic httpHeader;
@property(retain, nonatomic) NSData *jsapiControlBytes; // @dynamic jsapiControlBytes;
@property(retain, nonatomic) NSString *menuWording; // @dynamic menuWording;
@property(nonatomic) unsigned int requestId; // @dynamic requestId;
@property(retain, nonatomic) NSString *respUrl; // @dynamic respUrl;
@property(retain, nonatomic) NSString *shareUrl; // @dynamic shareUrl;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

