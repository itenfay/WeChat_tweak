//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface SendSubscriptionMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long aid; // @dynamic aid;
@property(retain, nonatomic) NSString *appType; // @dynamic appType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;
@property(retain, nonatomic) NSString *wxaUsername; // @dynamic wxaUsername;

@end

