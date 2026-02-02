//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface VoipNatDetectSvr : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int addrCnt; // @dynamic addrCnt;
@property(retain, nonatomic) NSMutableArray *addrs; // @dynamic addrs;
@property(nonatomic) unsigned int isp; // @dynamic isp;

@end

