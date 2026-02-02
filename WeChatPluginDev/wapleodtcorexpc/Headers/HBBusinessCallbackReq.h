//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface HBBusinessCallbackReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *idSign; // @dynamic idSign;
@property(retain, nonatomic) NSString *sendId; // @dynamic sendId;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;
@property(nonatomic) unsigned int unionSource; // @dynamic unionSource;

@end

