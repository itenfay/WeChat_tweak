//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class SKBuiltinBuffer_t;

@interface FunctionSwitch : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int functionId; // @dynamic functionId;
@property(nonatomic) unsigned int switchValue; // @dynamic switchValue;
@property(retain, nonatomic) SKBuiltinBuffer_t *ticket; // @dynamic ticket;
@property(nonatomic) unsigned int ticketType; // @dynamic ticketType;

@end

