//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface BusiF2FCancelPayRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long cancelSource; // @dynamic cancelSource;
@property(retain, nonatomic) NSString *f2FTradeNo; // @dynamic f2FTradeNo;
@property(retain, nonatomic) NSString *qrcodeId; // @dynamic qrcodeId;
@property(retain, nonatomic) NSString *receiverOpenid; // @dynamic receiverOpenid;

@end

