//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class IMBehaviorChattingOP, IMBehaviorMsgOP;

@interface IMBehavior : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) IMBehaviorChattingOP *chattingOp; // @dynamic chattingOp;
@property(retain, nonatomic) IMBehaviorMsgOP *msgOp; // @dynamic msgOp;
@property(nonatomic) int opType; // @dynamic opType;

@end

