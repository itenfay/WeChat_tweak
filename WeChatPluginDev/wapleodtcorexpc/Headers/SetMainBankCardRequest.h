//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionLocation, BaseRequest, NSString;

@interface SetMainBankCardRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionLocation *actionLocation; // @dynamic actionLocation;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bindSerial; // @dynamic bindSerial;
@property(retain, nonatomic) NSString *jsapiReqkey; // @dynamic jsapiReqkey;

@end

