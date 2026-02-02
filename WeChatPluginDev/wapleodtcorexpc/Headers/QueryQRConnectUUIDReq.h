//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface QueryQRConnectUUIDReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int lastErrcode; // @dynamic lastErrcode;
@property(nonatomic) unsigned int opt; // @dynamic opt;
@property(retain, nonatomic) NSString *sdkToken; // @dynamic sdkToken;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

