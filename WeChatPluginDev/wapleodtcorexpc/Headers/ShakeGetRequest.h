//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinBuffer_t;

@interface ShakeGetRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *buffer; // @dynamic buffer;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientCheckData; // @dynamic clientCheckData;
@property(retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo; // @dynamic extSpamInfo;
@property(nonatomic) int isNewVerson; // @dynamic isNewVerson;

@end

