//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface SpeedTestNotify : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int concurrentNum; // @dynamic concurrentNum;
@property(retain, nonatomic) NSData *ctx; // @dynamic ctx;
@property(nonatomic) unsigned int interval; // @dynamic interval;
@property(nonatomic) unsigned int reqSize; // @dynamic reqSize;
@property(retain, nonatomic) NSMutableArray *serverAddrList; // @dynamic serverAddrList;

@end

