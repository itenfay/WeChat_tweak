//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetPackageReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *attach; // @dynamic attach;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *busiId; // @dynamic busiId;
@property(nonatomic) unsigned int busiType; // @dynamic busiType;
@property(retain, nonatomic) NSString *currencyType; // @dynamic currencyType;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) unsigned int env; // @dynamic env;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int priceLevel; // @dynamic priceLevel;
@property(retain, nonatomic) NSString *productType; // @dynamic productType;
@property(retain, nonatomic) NSString *sign; // @dynamic sign;
@property(nonatomic) unsigned int wxaVersionType; // @dynamic wxaVersionType;

@end

