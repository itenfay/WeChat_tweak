//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinString_t;

@interface GetQRCodeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(retain, nonatomic) SKBuiltinString_t *qrCodeUrl; // @dynamic qrCodeUrl;
@property(nonatomic) unsigned int style; // @dynamic style;
@property(retain, nonatomic) SKBuiltinString_t *userName; // @dynamic userName;

@end

