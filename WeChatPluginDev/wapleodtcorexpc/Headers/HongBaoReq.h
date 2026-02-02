//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinBuffer_t;

@interface HongBaoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cgiCmd; // @dynamic cgiCmd;
@property(nonatomic) unsigned int outPutType; // @dynamic outPutType;
@property(retain, nonatomic) SKBuiltinBuffer_t *reqText; // @dynamic reqText;

@end

