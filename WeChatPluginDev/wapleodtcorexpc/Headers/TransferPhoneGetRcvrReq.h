//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface TransferPhoneGetRcvrReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *homepageExt; // @dynamic homepageExt;
@property(nonatomic) unsigned int inputType; // @dynamic inputType;
@property(retain, nonatomic) NSString *phone; // @dynamic phone;
@property(retain, nonatomic) NSString *rcvrId; // @dynamic rcvrId;

@end

