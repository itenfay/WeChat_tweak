//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSData;

@class WXPBGeneratedMessage;

@interface VerifySignatureTestRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *sign; // @dynamic sign;
@property(retain, nonatomic) NSData *signData; // @dynamic signData;

@end

