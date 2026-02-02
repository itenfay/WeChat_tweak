//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CgiTransferBeforeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *groupUsername; // @dynamic groupUsername;
@property(retain, nonatomic) NSString *jsapiReqkey; // @dynamic jsapiReqkey;
@property(retain, nonatomic) NSString *receiverUsername; // @dynamic receiverUsername;

@end

