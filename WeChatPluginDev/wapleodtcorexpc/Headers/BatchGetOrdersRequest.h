//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface BatchGetOrdersRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(retain, nonatomic) NSString *sessionUsername; // @dynamic sessionUsername;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

