//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class TransferAction_AlertMsgInfo, TransferAction_OpenAppInfo, TransferAction_OpenUrlInfo;

@interface TransferAction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionCode; // @dynamic actionCode;
@property(retain, nonatomic) TransferAction_AlertMsgInfo *alertMsgInfo; // @dynamic alertMsgInfo;
@property(retain, nonatomic) TransferAction_OpenAppInfo *openAppInfo; // @dynamic openAppInfo;
@property(retain, nonatomic) TransferAction_OpenUrlInfo *openUrlInfo; // @dynamic openUrlInfo;

@end

