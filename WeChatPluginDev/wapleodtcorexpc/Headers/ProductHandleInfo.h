//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ExchangeInfo, ReturnInfo;

@interface ProductHandleInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ExchangeInfo *exchangeInfo; // @dynamic exchangeInfo;
@property(nonatomic) unsigned int handleType; // @dynamic handleType;
@property(retain, nonatomic) ReturnInfo *returnInfo; // @dynamic returnInfo;

@end

