//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetCardPkgMchInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cardPackMerchantId; // @dynamic cardPackMerchantId;
@property(nonatomic) unsigned long long lastReceiveTime; // @dynamic lastReceiveTime;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sortRule; // @dynamic sortRule;

@end

