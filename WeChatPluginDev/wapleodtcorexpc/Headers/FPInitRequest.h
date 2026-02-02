//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSData;

@class WXPBGeneratedMessage;

@interface FPInitRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *randomkey; // @dynamic randomkey;
@property(retain, nonatomic) NSData *spamBuff; // @dynamic spamBuff;

@end

