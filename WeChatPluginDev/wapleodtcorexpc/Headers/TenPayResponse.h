//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, SKBuiltinBuffer_t;

@interface TenPayResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int cgiCmdid; // @dynamic cgiCmdid;
@property(retain, nonatomic) NSString *platMsg; // @dynamic platMsg;
@property(nonatomic) int platRet; // @dynamic platRet;
@property(retain, nonatomic) SKBuiltinBuffer_t *retText; // @dynamic retText;
@property(retain, nonatomic) NSString *tenpayErrMsg; // @dynamic tenpayErrMsg;
@property(nonatomic) int tenpayErrType; // @dynamic tenpayErrType;

@end

