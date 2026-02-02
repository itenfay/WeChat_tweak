//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, LiteAppBizData, NSString;

@interface GetGameShareMsgInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *gameMsgId; // @dynamic gameMsgId;
@property(retain, nonatomic) LiteAppBizData *liteAppBizData; // @dynamic liteAppBizData;

@end

