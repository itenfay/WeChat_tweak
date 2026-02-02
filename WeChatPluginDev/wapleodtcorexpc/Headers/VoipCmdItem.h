//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t;

@interface VoipCmdItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *cmdBuf; // @dynamic cmdBuf;
@property(nonatomic) int cmdId; // @dynamic cmdId;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;

@end

