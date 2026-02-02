//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString, SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface GetVoicePrintResourceRsaRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey; // @dynamic randomEncryKey;
@property(nonatomic) unsigned int resScence; // @dynamic resScence;
@property(retain, nonatomic) NSString *verifyTicket; // @dynamic verifyTicket;

@end

