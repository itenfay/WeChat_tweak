//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface OpVoiceReminderReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int opCode; // @dynamic opCode;
@property(retain, nonatomic) NSMutableArray *remindInfoList; // @dynamic remindInfoList;
@property(nonatomic) unsigned int remindInfoNum; // @dynamic remindInfoNum;

@end

