//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest;

@class WXPBGeneratedMessage;

@interface TransferPhoneChangeSwitchReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int grantFlag; // @dynamic grantFlag;
@property(nonatomic) unsigned int switchChangeType; // @dynamic switchChangeType;

@end

