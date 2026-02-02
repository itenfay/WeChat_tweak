//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString, WxaPage;

@interface SearchWxaResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSData *debugBuf; // @dynamic debugBuf;
@property(nonatomic) int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(retain, nonatomic) WxaPage *moreAction; // @dynamic moreAction;
@property(retain, nonatomic) NSString *msg; // @dynamic msg;
@property(nonatomic) unsigned int nextId; // @dynamic nextId;
@property(nonatomic) unsigned int resultType; // @dynamic resultType;
@property(nonatomic) unsigned int subType; // @dynamic subType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned int totalCount; // @dynamic totalCount;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

