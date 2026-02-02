//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface RegAffiliatedAcctRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *countryRegion; // @dynamic countryRegion;
@property(nonatomic) unsigned int hasHeadImg; // @dynamic hasHeadImg;
@property(retain, nonatomic) NSString *headImgAesKey; // @dynamic headImgAesKey;
@property(retain, nonatomic) NSString *headImgFileId; // @dynamic headImgFileId;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *password; // @dynamic password;
@property(nonatomic) unsigned int regScene; // @dynamic regScene;
@property(retain, nonatomic) NSString *regTicket; // @dynamic regTicket;
@property(retain, nonatomic) NSString *smsticket; // @dynamic smsticket;

@end

