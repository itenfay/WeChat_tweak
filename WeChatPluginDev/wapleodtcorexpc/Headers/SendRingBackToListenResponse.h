//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface SendRingBackToListenResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned long long minSeq; // @dynamic minSeq;
@property(nonatomic) unsigned long long scanRingBackCount; // @dynamic scanRingBackCount;
@property(nonatomic) unsigned long long sendRingBackCount; // @dynamic sendRingBackCount;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

