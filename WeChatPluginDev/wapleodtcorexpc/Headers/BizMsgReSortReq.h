//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BizMsgReSortContext, NSMutableArray, NSString;

@interface BizMsgReSortReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int bitFlag; // @dynamic bitFlag;
@property(retain, nonatomic) NSString *buffer; // @dynamic buffer;
@property(retain, nonatomic) BizMsgReSortContext *context; // @dynamic context;
@property(nonatomic) unsigned int digestBoldCnt; // @dynamic digestBoldCnt;
@property(nonatomic) unsigned int digestExposeCnt; // @dynamic digestExposeCnt;
@property(nonatomic) _Bool isHeadsetOn; // @dynamic isHeadsetOn;
@property(nonatomic) unsigned int lastFailReason; // @dynamic lastFailReason;
@property(retain, nonatomic) NSMutableArray *msg; // @dynamic msg;
@property(retain, nonatomic) NSString *netType; // @dynamic netType;
@property(retain, nonatomic) NSString *recBuffer; // @dynamic recBuffer;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

