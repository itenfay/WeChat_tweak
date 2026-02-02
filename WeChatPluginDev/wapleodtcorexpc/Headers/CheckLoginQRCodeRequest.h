//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString, SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface CheckLoginQRCodeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey; // @dynamic randomEncryKey;
@property(nonatomic) unsigned int timeStamp; // @dynamic timeStamp;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

