//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface VOIPRUDPCmd : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *cmdBuffer; // @dynamic cmdBuffer;
@property(nonatomic) int cmdType; // @dynamic cmdType;

@end

