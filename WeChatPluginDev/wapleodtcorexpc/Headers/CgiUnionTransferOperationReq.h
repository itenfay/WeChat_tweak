//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CgiUnionTransferOperationReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *againCtx; // @dynamic againCtx;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cftTradeId; // @dynamic cftTradeId;
@property(retain, nonatomic) NSString *leftButtonContinue; // @dynamic leftButtonContinue;
@property(nonatomic) unsigned int op; // @dynamic op;
@property(retain, nonatomic) NSString *roomid; // @dynamic roomid;
@property(retain, nonatomic) NSString *transferId; // @dynamic transferId;

@end

