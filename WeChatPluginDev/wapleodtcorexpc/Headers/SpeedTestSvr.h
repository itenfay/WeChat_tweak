//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class VoipAddr;

@interface SpeedTestSvr : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) VoipAddr *addr; // @dynamic addr;
@property(nonatomic) unsigned int pktSize; // @dynamic pktSize;
@property(nonatomic) unsigned int testCnt; // @dynamic testCnt;
@property(nonatomic) unsigned int testGap; // @dynamic testGap;
@property(nonatomic) unsigned int timeout; // @dynamic timeout;

@end

