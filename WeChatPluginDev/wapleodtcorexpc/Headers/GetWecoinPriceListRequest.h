//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetWecoinPriceListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int businessId; // @dynamic businessId;
@property(retain, nonatomic) NSString *currencyCode; // @dynamic currencyCode;
@property(nonatomic) unsigned int diffWecoinCount; // @dynamic diffWecoinCount;
@property(retain, nonatomic) NSString *reportSessionId; // @dynamic reportSessionId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sdkVersion; // @dynamic sdkVersion;

@end

