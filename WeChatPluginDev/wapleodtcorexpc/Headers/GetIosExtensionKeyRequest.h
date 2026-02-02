//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSData;

@class WXPBGeneratedMessage;

@interface GetIosExtensionKeyRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *extensionDeviceId; // @dynamic extensionDeviceId;
@property(nonatomic) unsigned int extensionSessionType; // @dynamic extensionSessionType;

@end

