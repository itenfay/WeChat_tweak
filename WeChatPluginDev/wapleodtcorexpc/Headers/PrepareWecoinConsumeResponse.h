//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ConsumeProductInfo, InterceptPopUp, NSData;

@interface PrepareWecoinConsumeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ConsumeProductInfo *consumeProductInfo; // @dynamic consumeProductInfo;
@property(retain, nonatomic) NSData *ctxBuff; // @dynamic ctxBuff;
@property(retain, nonatomic) InterceptPopUp *interceptInfo; // @dynamic interceptInfo;

@end

