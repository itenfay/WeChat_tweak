//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FreeFloatMsgInfo, LiveFloatMsgPaymentInfo;

@interface LiveFloatMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) LiveFloatMsgPaymentInfo *info; // @dynamic info;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(nonatomic) unsigned int priority; // @dynamic priority;
@property(nonatomic) unsigned int remainCount; // @dynamic remainCount;
@property(retain, nonatomic) FreeFloatMsgInfo *stayLiveFreeFloatMsgInfo; // @dynamic stayLiveFreeFloatMsgInfo;
@property(nonatomic) unsigned int usedCount; // @dynamic usedCount;

@end

