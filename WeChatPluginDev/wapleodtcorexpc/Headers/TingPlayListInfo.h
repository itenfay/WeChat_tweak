//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, TingTapeInfo;

@interface TingPlayListInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *ids; // @dynamic ids;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(nonatomic) int playingIndex; // @dynamic playingIndex;
@property(nonatomic) int sourceCount; // @dynamic sourceCount;
@property(retain, nonatomic) TingTapeInfo *tapeInfo; // @dynamic tapeInfo;

@end

