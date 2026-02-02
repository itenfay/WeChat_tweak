//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetPOIListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int autoQueryInterval; // @dynamic autoQueryInterval;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *buff; // @dynamic buff;
@property(nonatomic) unsigned int isEnd; // @dynamic isEnd;
@property(nonatomic) unsigned int listCount; // @dynamic listCount;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(retain, nonatomic) NSString *openId; // @dynamic openId;
@property(retain, nonatomic) NSMutableArray *poilist; // @dynamic poilist;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

