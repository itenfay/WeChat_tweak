//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DirectConnSet, NSMutableArray, RelayConnSet;

@interface VoipMultiRelayConnData : WXPBGeneratedMessage
{
    int activeConnIdSetMemoizedSerializedSize;
    int inactiveConnIdSetMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int activeConnCnt; // @dynamic activeConnCnt;
@property(retain, nonatomic) NSMutableArray *activeConnIdSet; // @dynamic activeConnIdSet;
@property(nonatomic) int connSetSeq; // @dynamic connSetSeq;
@property(retain, nonatomic) DirectConnSet *directConnSet; // @dynamic directConnSet;
@property(nonatomic) int inactiveConnCnt; // @dynamic inactiveConnCnt;
@property(retain, nonatomic) NSMutableArray *inactiveConnIdSet; // @dynamic inactiveConnIdSet;
@property(retain, nonatomic) RelayConnSet *redirectConnSet; // @dynamic redirectConnSet;
@property(retain, nonatomic) RelayConnSet *relayConnSet; // @dynamic relayConnSet;

@end

