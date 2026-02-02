//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class Address, BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface GetLastestExpressInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) Address *address; // @dynamic address;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *lockId; // @dynamic lockId;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;

@end

