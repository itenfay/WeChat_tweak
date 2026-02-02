//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MsgCheckReq, NSString;

@interface TransferMsgCheckTask : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int isOpenIm; // @dynamic isOpenIm;
@property(retain, nonatomic) MsgCheckReq *request; // @dynamic request;
@property(nonatomic) unsigned int taskFireTime; // @dynamic taskFireTime;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

