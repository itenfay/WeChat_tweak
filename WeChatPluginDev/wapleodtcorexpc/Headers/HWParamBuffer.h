//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSData;

@class WXPBGeneratedMessage;

@interface HWParamBuffer : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int headerLen; // @dynamic headerLen;
@property(retain, nonatomic) NSData *ppsbuf; // @dynamic ppsbuf;
@property(retain, nonatomic) NSData *spsbuf; // @dynamic spsbuf;
@property(retain, nonatomic) NSData *vpsbuf; // @dynamic vpsbuf;

@end

